/*
 * XREFs of GetProcessorInformation @ 0x1C00075B8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     FreeProcessorInfo @ 0x1C00078F8 (FreeProcessorInfo.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 */

char __fastcall GetProcessorInformation(__int64 a1)
{
  unsigned __int16 v2; // si
  int v3; // eax
  _QWORD *v4; // r14
  _DWORD *v5; // r15
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 *v8; // r13
  unsigned int v9; // ecx
  unsigned __int16 v10; // r12
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int16 v14; // cx
  __int64 v15; // rbx
  char v16; // r15
  __int64 v17; // r12
  __int64 v19; // rcx
  char v20; // [rsp+38h] [rbp-29h]
  unsigned __int16 v21; // [rsp+3Ah] [rbp-27h]
  unsigned __int16 v22; // [rsp+3Ch] [rbp-25h]
  __int16 v23; // [rsp+40h] [rbp-21h] BYREF
  char v24; // [rsp+42h] [rbp-1Fh]
  char v25; // [rsp+43h] [rbp-1Eh]
  unsigned int v26; // [rsp+44h] [rbp-1Dh] BYREF
  __int64 v27; // [rsp+48h] [rbp-19h]
  __int128 v28; // [rsp+50h] [rbp-11h]
  __int128 v29; // [rsp+60h] [rbp-1h]
  __int128 v30; // [rsp+70h] [rbp+Fh]
  __int64 v31; // [rsp+80h] [rbp+1Fh]

  v20 = 1;
  ((void (*)(void))FreeProcessorInfo)();
  v2 = 0;
  if ( !*(_WORD *)(a1 + 232) )
    goto LABEL_26;
  v3 = *(unsigned __int16 *)(a1 + 234);
  if ( !(_WORD)v3 )
    goto LABEL_26;
  v4 = (_QWORD *)(a1 + 264);
  StorPortExtendedFunction(0LL, a1, (unsigned int)(48 * v3), 1701672526LL);
  if ( !*(_QWORD *)(a1 + 264) )
    goto LABEL_26;
  NVMeZeroMemory(*(void **)(a1 + 264), 48 * *(unsigned __int16 *)(a1 + 234));
  v5 = (_DWORD *)(a1 + 240);
  StorPortExtendedFunction(22LL, a1, a1 + 240, v6);
  StorPortExtendedFunction(20LL, a1, a1 + 236, v7);
  if ( *(_DWORD *)(a1 + 236)
    && (v8 = (__int64 *)(a1 + 256),
        StorPortExtendedFunction(0LL, a1, (unsigned int)(24 * (*v5 + 1)), 1701672526LL),
        *(_QWORD *)(a1 + 256)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 256), 24 * (*v5 + 1));
    v9 = 0;
    v22 = 0;
    v10 = 0;
    do
    {
      v11 = *v8;
      v27 = 3LL * v10;
      *(_WORD *)(v11 + 8 * v27) = v10;
      StorPortExtendedFunction(21LL, a1, v9, *v8 + 8 + 24LL * v10);
      v12 = *(_DWORD *)(*v8 + 24LL * v10 + 8) - ((*(_DWORD *)(*v8 + 24LL * v10 + 8) >> 1) & 0x55555555);
      *(_WORD *)(*v8 + 24LL * v10 + 2) = (unsigned __int16)((16843009
                                                           * (((v12 & 0x33333333)
                                                             + ((v12 >> 2) & 0x33333333)
                                                             + (((v12 & 0x33333333) + ((v12 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v13 = HIDWORD(*(_QWORD *)(*v8 + 24LL * v10 + 8))
          - (((unsigned int)HIDWORD(*(_QWORD *)(*v8 + 24LL * v10 + 8)) >> 1) & 0x55555555);
      *(_WORD *)(*v8 + 24LL * v10 + 2) += (unsigned __int16)((16843009
                                                            * (((v13 & 0x33333333)
                                                              + ((v13 >> 2) & 0x33333333)
                                                              + (((v13 & 0x33333333) + ((v13 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v14 = *(_WORD *)(*v8 + 24LL * v10 + 16);
      v21 = v14;
      if ( *(_WORD *)(*v8 + 24LL * v10 + 2) )
      {
        v15 = *(_QWORD *)(*v8 + 24LL * v10 + 8);
        if ( v15 )
        {
          v16 = v20;
          v17 = v27;
          do
          {
            if ( _bittest64(&v15, (unsigned __int8)v2) )
            {
              v26 = 0;
              v23 = v14;
              v24 = v2;
              v25 = 0;
              StorPortExtendedFunction(56LL, a1, &v23, &v26);
              *(_DWORD *)(*v4 + 48LL * v26) = v26;
              *(_QWORD *)(*v4 + 48LL * v26 + 24) = *(_QWORD *)(a1 + 248) + 16LL * v21;
              *(_QWORD *)(*v4 + 48LL * v26 + 32) = *v8 + 8 * v17;
              if ( (*(_DWORD *)(a1 + 3844) & 0x10) != 0 && v16 )
              {
                LODWORD(v27) = 56;
                v31 = 0LL;
                v28 = 0LL;
                v29 = 0LL;
                v30 = 0LL;
                if ( (unsigned int)StorPortExtendedFunction(23LL, a1, &v23, 0LL) )
                  goto LABEL_25;
                v19 = v30;
                if ( !(_QWORD)v30 )
                  goto LABEL_25;
                if ( WORD4(v30) == v23 )
                {
                  _bittestandreset64(&v19, v2);
                  *(_QWORD *)&v30 = v19;
                }
                if ( v19 )
                  *(_OWORD *)(*v4 + 48LL * v26 + 8) = v30;
                else
LABEL_25:
                  v16 = 0;
              }
              v14 = v21;
              _bittestandreset64(&v15, v2);
            }
            ++v2;
          }
          while ( v15 );
          v10 = v22;
          v20 = v16;
          v5 = (_DWORD *)(a1 + 240);
        }
        v2 = 0;
      }
      v9 = ++v10;
      v22 = v10;
    }
    while ( (unsigned int)v10 <= *v5 );
    return 1;
  }
  else
  {
LABEL_26:
    FreeProcessorInfo(a1);
    return 0;
  }
}
