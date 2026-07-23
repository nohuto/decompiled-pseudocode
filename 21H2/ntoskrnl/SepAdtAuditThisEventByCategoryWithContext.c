/*
 * XREFs of SepAdtAuditThisEventByCategoryWithContext @ 0x140693C50
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x1402812B0 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140597020 (SeAuditingFileEventsWithContextEx.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140693624 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 */

char __fastcall SepAdtAuditThisEventByCategoryWithContext(
        unsigned int a1,
        int a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  __int64 v4; // rbp
  char v6; // di
  int v7; // eax
  char v8; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  _BYTE *ClientToken; // r8
  unsigned int v12; // edx
  __int16 v13; // r13
  __int16 v14; // r12
  unsigned int v15; // r9d
  __m128i v16; // xmm3
  __m128i v17; // xmm2
  __int64 v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm2
  unsigned __int16 *v23; // rcx
  __int64 v24; // r9
  int v25; // eax
  int v26; // r11d
  unsigned int i; // r10d
  int v28; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1;
  v6 = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v7 = SeAuditingStateByCategory[a1];
  if ( !v7 )
    return 0;
  if ( (v7 & a2) != 0 )
    return 1;
  v8 = 0;
  if ( SepTokenPolicyCounterByCategory[a1] )
  {
    if ( a3 )
    {
      p_SubjectContext = a3;
    }
    else
    {
      p_SubjectContext = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
    {
      if ( ClientToken[119] == 2 )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        if ( a1 )
        {
          if ( a1 >= 8 )
          {
            v16 = 0LL;
            v17 = 0LL;
            do
            {
              v18 = v15 + 4;
              v19 = _mm_unpacklo_epi16(_mm_loadl_epi64((const __m128i *)&AdtpPerCategoryCount[v15 / 4]), (__m128i)0LL);
              v15 += 8;
              v16 = _mm_add_epi32(v19, v16);
              v20 = _mm_add_epi32(
                      _mm_unpacklo_epi16(
                        _mm_loadl_epi64((const __m128i *)((char *)AdtpPerCategoryCount + 2 * v18)),
                        (__m128i)0LL),
                      v17);
              v17 = v20;
            }
            while ( v15 < (a1 & 0xFFFFFFF8) );
            v21 = _mm_add_epi32(v20, v16);
            v22 = _mm_add_epi32(v21, _mm_srli_si128(v21, 8));
            v12 = _mm_cvtsi128_si32(_mm_add_epi32(v22, _mm_srli_si128(v22, 4)));
          }
          if ( v15 < a1 )
          {
            v23 = (unsigned __int16 *)(0x140000000LL + 2LL * v15 + 13816224);
            v24 = a1 - v15;
            do
            {
              v25 = *v23++;
              v12 += v25;
              --v24;
            }
            while ( v24 );
          }
        }
        v26 = *((unsigned __int16 *)AdtpPerCategoryCount + v4);
        for ( i = v12 + v26; v12 < i; ++v12 )
        {
          v28 = (unsigned __int8)ClientToken[((unsigned __int64)v12 >> 1) + 88] >> (4 * (v12 & 1));
          if ( (v28 & 1) != 0 )
          {
            if ( (v6 & 2) != 0 )
              goto LABEL_34;
            ++v13;
          }
          if ( (v28 & 4) != 0 )
          {
            if ( (v6 & 0x20) != 0 )
              goto LABEL_34;
            ++v14;
          }
        }
        if ( (v6 & 1) != 0 && v13 == (_WORD)v26 || (v6 & 0x10) != 0 && v14 == (_WORD)v26 )
LABEL_34:
          v8 = 1;
      }
    }
    else
    {
      SepAuditFailed(3221225596LL);
    }
    if ( !a3 )
      SeReleaseSubjectContext(p_SubjectContext);
  }
  return v8;
}
