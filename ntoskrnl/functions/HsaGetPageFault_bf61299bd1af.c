__int64 __fastcall HsaGetPageFault(_QWORD *a1, int *a2, _QWORD *a3, _WORD *a4, _QWORD *a5, __int64 *a6)
{
  unsigned __int64 v6; // r12
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  __int128 *v14; // rsi
  int v15; // r14d
  ULONG_PTR v16; // rbp
  int v17; // ecx
  unsigned __int64 v18; // r8
  int v19; // ecx
  unsigned __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  signed __int32 v26[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-98h]
  int *v28; // [rsp+38h] [rbp-90h]
  _WORD *v29; // [rsp+40h] [rbp-88h]
  _QWORD *v30; // [rsp+48h] [rbp-80h]
  _QWORD *v31; // [rsp+50h] [rbp-78h]
  __int64 *v32; // [rsp+58h] [rbp-70h]
  __int128 v33; // [rsp+60h] [rbp-68h]

  v6 = a1[14];
  v7 = (_QWORD *)*a1;
  v29 = a4;
  v30 = a5;
  v28 = a2;
  v8 = a1[12];
  v9 = v6 >> 4;
  v32 = a6;
  v31 = a3;
  v33 = 0LL;
  v27 = v8;
  do
  {
    while ( 1 )
    {
      v10 = v7[1028];
      v11 = v7[1030];
      v12 = v11 >> 4;
      v13 = (v11 >> 4) & 0x7FFF;
      if ( v13 != ((v7[1031] >> 4) & 0x7FFFLL) )
        break;
      if ( (v10 & 0x20) == 0 )
        return 0LL;
      if ( (v10 & 0x80u) == 0LL )
      {
        v20 = v7[3] & 0xFFFFFFFFFFFFDFFFuLL;
        v7[3] = v20;
        _InterlockedOr(v26, 0);
        v7[1028] = 32LL;
        _InterlockedOr(v26, 0);
        v7[3] = v20 | 0x6000;
        _InterlockedOr(v26, 0);
        *v28 = -1;
        *v29 = -1;
        *v30 = 0LL;
        *v32 = 32LL;
        *v31 = 0LL;
        return 1LL;
      }
      while ( (v7[1028] & 0x80u) != 0LL )
        ;
    }
    v14 = (__int128 *)(v8 + 16 * v13);
    v15 = 0;
    v33 = *v14;
    v16 = v33;
    if ( !(_QWORD)v33 )
    {
      do
      {
        if ( *((_QWORD *)&v33 + 1) )
          break;
        KeStallExecutionProcessor(0xAu);
        if ( (unsigned int)++v15 > 0x186A0 )
          KeBugCheckEx(0x159u, 0x2000uLL, v16, 0LL, 0LL);
        v33 = *v14;
        v16 = v33;
      }
      while ( !(_QWORD)v33 );
      v8 = v27;
      if ( v15 )
        ++AmdErrataPprWriteOrderMitigated;
    }
    v17 = 0;
    if ( (v12 & 0x7FFF) + 1 != (_DWORD)v9 )
      v17 = v12 + 1;
    *v14 = 0LL;
    v7[1030] = v11 ^ ((unsigned int)v11 ^ (16 * v17)) & 0x7FFF0;
    _InterlockedOr(v26, 0);
    v18 = v33;
  }
  while ( (unsigned __int64)v33 >> 60 != 1 || (v33 & 0x24020000000000LL) == 0x20000000000LL );
  if ( (v33 & 0x100000000000000LL) != 0 )
    v19 = WORD1(v33);
  else
    v19 = -1;
  *v28 = v19;
  *v29 = WORD2(v18) & 0x1FF;
  *v30 = *((_QWORD *)&v33 + 1);
  *v31 = (unsigned __int16)v18;
  v22 = (2 * ((v18 >> 53) & 1)) | 1;
  if ( (v18 & 0x4000000000000LL) == 0 )
    v22 = 2 * ((v18 >> 53) & 1);
  v23 = v22 | 4;
  if ( (v18 & 0x2000000000000LL) == 0 )
    v23 = v22;
  v24 = v23 | 8;
  if ( (v18 & 0x40000000000000LL) != 0 )
    v24 = v23;
  v25 = v24 | 0x10;
  if ( (v18 & 0x20000000000LL) == 0 )
    v25 = v24;
  *v32 = v25;
  return 1LL;
}
