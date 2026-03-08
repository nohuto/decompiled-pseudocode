/*
 * XREFs of KsepDbGetShimInfo @ 0x140800448
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x14079E958 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140303CA4 (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KseShimDatabaseClose @ 0x14079E25C (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x14079E360 (KsepDbFreeDriverShims.c)
 *     KseShimDatabaseOpen @ 0x14079EFB4 (KseShimDatabaseOpen.c)
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetKShimTagRef @ 0x14080030C (SdbGetKShimTagRef.c)
 *     KsepDbGetSdbString @ 0x140800688 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1408006BC (SdbReadGUIDTag.c)
 *     SdbTagRefToTagID @ 0x140800B74 (SdbTagRefToTagID.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
  __m128i *Paged; // rdi
  __int64 v4; // r14
  int SdbString; // ebx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rcx
  __m128i *v9; // rsi
  __int64 v10; // rax
  unsigned int KShimTagRef; // eax
  __int64 v12; // r15
  unsigned int FirstTag; // eax
  __m128i *v14; // rax
  __m128i v15; // xmm1
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // eax
  char *v20; // rdx
  _DWORD *v21; // rcx
  __int128 v22; // xmm0
  unsigned int v24; // [rsp+28h] [rbp-59h] BYREF
  __int64 *v25; // [rsp+30h] [rbp-51h] BYREF
  __int64 v26; // [rsp+38h] [rbp-49h] BYREF
  __int64 v27; // [rsp+40h] [rbp-41h]
  __int64 v28; // [rsp+48h] [rbp-39h]
  __int64 v29; // [rsp+50h] [rbp-31h]
  __int128 v30; // [rsp+58h] [rbp-29h] BYREF
  char v31[16]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v32; // [rsp+78h] [rbp-9h]

  v29 = a1;
  v24 = 0;
  v26 = 0LL;
  v32 = 0LL;
  Paged = 0LL;
  v25 = 0LL;
  v4 = a2;
  SdbString = KseShimDatabaseOpen(&v25);
  if ( SdbString >= 0 )
  {
    v6 = (unsigned int)v4;
    Paged = (__m128i *)KsepPoolAllocatePaged(80 * v4);
    v7 = 0LL;
    SdbString = -1073741275;
    v8 = *v25;
    v27 = *v25;
    if ( (_DWORD)v4 )
    {
      v9 = Paged + 4;
      v10 = a1 - (_QWORD)Paged;
      v28 = a1 - (_QWORD)Paged;
      while ( 1 )
      {
        KShimTagRef = SdbGetKShimTagRef(v8, *(const WCHAR **)((char *)&v9[-2] + v10 - 8));
        if ( !KShimTagRef )
          break;
        if ( (unsigned int)SdbTagRefToTagID(v27, KShimTagRef, &v26, &v24) )
        {
          v12 = v26;
          FirstTag = SdbFindFirstTag(v26, v24, 36880LL);
          if ( !FirstTag )
            break;
          v30 = 0LL;
          v14 = (__m128i *)SdbReadGUIDTag(v31, v12, FirstTag, &v30);
          v15 = *v14;
          v16 = v14->m128i_i64[0] - v32;
          if ( !v16 )
            v16 = _mm_srli_si128(v15, 8).m128i_u64[0] - *((_QWORD *)&v32 + 1);
          if ( !v16 )
            break;
          v17 = v24;
          v9[-4] = v15;
          v18 = SdbFindFirstTag(v12, v17, 24579LL);
          if ( !v18 )
            break;
          SdbString = KsepDbGetSdbString(v12, v18, &Paged[5 * v7 + 2]);
          if ( SdbString < 0 )
            break;
          v19 = SdbFindFirstTag(v12, v24, 16407LL);
          if ( !v19 )
            break;
          v9->m128i_i32[0] = SdbReadDWORDTag(v12, v19, 0LL);
        }
        v10 = v28;
        v7 = (unsigned int)(v7 + 1);
        v8 = v27;
        v9 += 5;
        if ( (unsigned int)v7 >= (unsigned int)v4 )
        {
          SdbString = 0;
          v20 = &Paged->m128i_i8[-v29];
          v21 = (_DWORD *)(v29 + 64);
          do
          {
            *v21 = *(_DWORD *)((char *)v21 + (_QWORD)v20);
            v22 = *(_OWORD *)((char *)v21 + (_QWORD)v20 - 32);
            v21 += 20;
            *((_OWORD *)v21 - 7) = v22;
            *((_OWORD *)v21 - 9) = *(_OWORD *)((char *)v21 + (_QWORD)v20 - 144);
            --v6;
          }
          while ( v6 );
          break;
        }
      }
    }
    else
    {
      SdbString = 0;
    }
  }
  if ( v25 )
    KseShimDatabaseClose((__int64)v25);
  if ( SdbString < 0 )
    KsepDbFreeDriverShims(Paged, v4);
  else
    KsepPoolFreePaged(Paged);
  return (unsigned int)SdbString;
}
