__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r14
  int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // rax
  int v11; // eax
  struct RGNOBJ *v13; // rdx
  __int64 v14; // rcx
  __m128i v15; // xmm1
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm1_8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // xmm0_8
  LONG v20; // r8d
  LONG v21; // edx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  struct _RECTL v25; // [rsp+20h] [rbp-10h] BYREF
  __int64 v26; // [rsp+50h] [rbp+20h] BYREF

  v4 = a4;
  v9 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v10 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *(_QWORD *)(v9 + 6400) )
    goto LABEL_6;
  if ( (unsigned int)(v4 - 1) <= 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a2 + 48LL) == 56 && RGNOBJ::bContain(a2, a3) )
    {
      if ( (_DWORD)v4 != 1 )
        a3 = a2;
      v13 = a3;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)a3 + 48LL) != 56 || !RGNOBJ::bContain(a3, a2) )
      {
        if ( (_DWORD)v4 == 1 && *(_DWORD *)(*(_QWORD *)a2 + 48LL) == 56 )
        {
          v14 = *(_QWORD *)a3;
          if ( *(_DWORD *)(*(_QWORD *)a3 + 48LL) == 56 )
          {
            v15 = *(__m128i *)(*(_QWORD *)a2 + 56LL);
            v25 = 0LL;
            v16 = v15.m128i_i64[0];
            v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
            v18 = *(_QWORD *)(v14 + 56);
            v19 = _mm_srli_si128(*(__m128i *)(v14 + 56), 8).m128i_u64[0];
            v20 = v18;
            if ( (int)v16 > (int)v18 )
              v20 = v16;
            v21 = v19;
            v25.left = v20;
            if ( (int)v17 < (int)v19 )
              v21 = v17;
            v22 = HIDWORD(v16);
            v23 = HIDWORD(v18);
            v25.right = v21;
            if ( (int)v22 > (int)v23 )
              LODWORD(v23) = v22;
            v24 = HIDWORD(v19);
            v25.top = v23;
            if ( SHIDWORD(v17) < SHIDWORD(v19) )
              LODWORD(v24) = HIDWORD(v17);
            v25.bottom = v24;
            if ( (int)v23 >= (int)v24 || v20 >= v21 )
              RGNOBJ::vSet(this);
            else
              RGNOBJ::vSet(this, &v25);
            return 2LL;
          }
        }
        goto LABEL_3;
      }
      if ( (_DWORD)v4 != 1 )
        a2 = a3;
      v13 = a2;
    }
    v11 = RGNOBJ::bCopy(this, v13);
    goto LABEL_4;
  }
LABEL_3:
  LOBYTE(v8) = byte_1C028B390[v4];
  v11 = RGNOBJ::bMerge(this, a2, a3, v8);
LABEL_4:
  if ( v11 )
  {
    v10 = *(_QWORD *)this;
LABEL_6:
    v26 = (v10 + 24) & -(__int64)(v10 != 0);
    return RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v26);
  }
  RGNOBJ::vSet(this);
  return 0LL;
}
