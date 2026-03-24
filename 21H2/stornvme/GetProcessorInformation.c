/*
 * XREFs of GetProcessorInformation @ 0x1C000BAB4
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000DC0C (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     FreeProcessorInfo @ 0x1C000B660 (FreeProcessorInfo.c)
 */

char __fastcall GetProcessorInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // si
  int v9; // eax
  _QWORD *v10; // r14
  _DWORD *v11; // r15
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 *v14; // r13
  unsigned int v15; // ecx
  unsigned __int16 v16; // r12
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  __int16 v20; // cx
  __int64 v21; // rbx
  char v22; // r15
  __int64 v23; // r12
  __int64 v24; // rcx
  char v26; // [rsp+38h] [rbp-29h]
  unsigned __int16 v27; // [rsp+3Ah] [rbp-27h]
  unsigned __int16 v28; // [rsp+3Ch] [rbp-25h]
  __int16 v29; // [rsp+40h] [rbp-21h] BYREF
  char v30; // [rsp+42h] [rbp-1Fh]
  char v31; // [rsp+43h] [rbp-1Eh]
  unsigned int v32; // [rsp+44h] [rbp-1Dh] BYREF
  __int64 v33; // [rsp+48h] [rbp-19h]
  __int128 v34; // [rsp+50h] [rbp-11h]
  __int128 v35; // [rsp+60h] [rbp-1h]
  __int128 v36; // [rsp+70h] [rbp+Fh]
  __int64 v37; // [rsp+80h] [rbp+1Fh]

  v26 = 1;
  FreeProcessorInfo(a1, a2, a3, a4);
  v8 = 0;
  if ( !*(_WORD *)(a1 + 216) )
    goto LABEL_26;
  v9 = *(unsigned __int16 *)(a1 + 218);
  if ( !(_WORD)v9 )
    goto LABEL_26;
  v10 = (_QWORD *)(a1 + 248);
  StorPortExtendedFunction(0LL, a1, (unsigned int)(48 * v9), 1701672526LL);
  if ( !*(_QWORD *)(a1 + 248) )
    goto LABEL_26;
  NVMeZeroMemory(*(void **)(a1 + 248), 48 * *(unsigned __int16 *)(a1 + 218));
  v11 = (_DWORD *)(a1 + 224);
  StorPortExtendedFunction(22LL, a1, a1 + 224, v12);
  StorPortExtendedFunction(20LL, a1, a1 + 220, v13);
  if ( *(_DWORD *)(a1 + 220)
    && (v14 = (__int64 *)(a1 + 240),
        StorPortExtendedFunction(0LL, a1, (unsigned int)(24 * (*v11 + 1)), 1701672526LL),
        *(_QWORD *)(a1 + 240)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 240), 24 * (*v11 + 1));
    v15 = 0;
    v28 = 0;
    v16 = 0;
    do
    {
      v17 = *v14;
      v33 = 3LL * v16;
      *(_WORD *)(v17 + 8 * v33) = v16;
      StorPortExtendedFunction(21LL, a1, v15, *v14 + 8 + 24LL * v16);
      v18 = *(_DWORD *)(*v14 + 24LL * v16 + 8) - ((*(_DWORD *)(*v14 + 24LL * v16 + 8) >> 1) & 0x55555555);
      *(_WORD *)(*v14 + 24LL * v16 + 2) = (unsigned __int16)((16843009
                                                            * (((v18 & 0x33333333)
                                                              + ((v18 >> 2) & 0x33333333)
                                                              + (((v18 & 0x33333333) + ((v18 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v19 = HIDWORD(*(_QWORD *)(*v14 + 24LL * v16 + 8))
          - (((unsigned int)HIDWORD(*(_QWORD *)(*v14 + 24LL * v16 + 8)) >> 1) & 0x55555555);
      *(_WORD *)(*v14 + 24LL * v16 + 2) += (unsigned __int16)((16843009
                                                             * (((v19 & 0x33333333)
                                                               + ((v19 >> 2) & 0x33333333)
                                                               + (((v19 & 0x33333333) + ((v19 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
      v20 = *(_WORD *)(*v14 + 24LL * v16 + 16);
      v27 = v20;
      if ( *(_WORD *)(*v14 + 24LL * v16 + 2) )
      {
        v21 = *(_QWORD *)(*v14 + 24LL * v16 + 8);
        if ( v21 )
        {
          v22 = v26;
          v23 = v33;
          do
          {
            if ( _bittest64(&v21, (unsigned __int8)v8) )
            {
              v32 = 0;
              v29 = v20;
              v30 = v8;
              v31 = 0;
              StorPortExtendedFunction(56LL, a1, &v29, &v32);
              *(_DWORD *)(*v10 + 48LL * v32) = v32;
              *(_QWORD *)(*v10 + 48LL * v32 + 24) = *(_QWORD *)(a1 + 232) + 16LL * v27;
              *(_QWORD *)(*v10 + 48LL * v32 + 32) = *v14 + 8 * v23;
              if ( (*(_DWORD *)(a1 + 3828) & 0x10) != 0 && v22 )
              {
                LODWORD(v33) = 56;
                v37 = 0LL;
                v34 = 0LL;
                v35 = 0LL;
                v36 = 0LL;
                if ( (unsigned int)StorPortExtendedFunction(23LL, a1, &v29, 0LL) )
                  goto LABEL_19;
                v24 = v36;
                if ( !(_QWORD)v36 )
                  goto LABEL_19;
                if ( WORD4(v36) == v29 )
                {
                  _bittestandreset64(&v24, v8);
                  *(_QWORD *)&v36 = v24;
                }
                if ( v24 )
                  *(_OWORD *)(*v10 + 48LL * v32 + 8) = v36;
                else
LABEL_19:
                  v22 = 0;
              }
              v20 = v27;
              _bittestandreset64(&v21, v8);
            }
            ++v8;
          }
          while ( v21 );
          v16 = v28;
          v26 = v22;
          v11 = (_DWORD *)(a1 + 224);
        }
        v8 = 0;
      }
      v15 = ++v16;
      v28 = v16;
    }
    while ( (unsigned int)v16 <= *v11 );
    return 1;
  }
  else
  {
LABEL_26:
    FreeProcessorInfo(a1, v5, v6, v7);
    return 0;
  }
}
