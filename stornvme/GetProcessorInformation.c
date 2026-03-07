char __fastcall GetProcessorInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  _QWORD *v10; // r12
  _DWORD *v11; // r14
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 *v14; // rbx
  unsigned __int16 v15; // dx
  unsigned int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int16 v21; // r13
  __int64 v22; // r15
  char v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // r14d
  int v29; // r15d
  __int64 v30; // r8
  __int64 v32; // r9
  unsigned int v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h]
  int v35; // [rsp+40h] [rbp-C0h]
  int v36; // [rsp+44h] [rbp-BCh]
  int v37; // [rsp+48h] [rbp-B8h]
  int v38; // [rsp+4Ch] [rbp-B4h]
  int v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  _OWORD v41[14]; // [rsp+60h] [rbp-A0h] BYREF
  char v42; // [rsp+150h] [rbp+50h]
  unsigned __int16 v43; // [rsp+158h] [rbp+58h]
  unsigned __int16 v44; // [rsp+160h] [rbp+60h]
  unsigned __int16 v45; // [rsp+168h] [rbp+68h] BYREF
  char v46; // [rsp+16Ah] [rbp+6Ah]
  char v47; // [rsp+16Bh] [rbp+6Bh]

  v42 = 1;
  v4 = 0;
  v38 = 0;
  v39 = 0;
  v37 = 0;
  v35 = 0;
  v34 = 0LL;
  FreeProcessorInfo(a1, a2, a3, a4);
  if ( *(_WORD *)(a1 + 240) )
  {
    v9 = *(unsigned __int16 *)(a1 + 242);
    if ( (_WORD)v9 )
    {
      v10 = (_QWORD *)(a1 + 272);
      StorPortExtendedFunction(0LL, a1, (unsigned int)(72 * v9), 1701672526LL);
      if ( *(_QWORD *)(a1 + 272) )
      {
        NVMeZeroMemory(*(void **)(a1 + 272), 72 * *(unsigned __int16 *)(a1 + 242));
        v11 = (_DWORD *)(a1 + 248);
        StorPortExtendedFunction(22LL, a1, a1 + 248, v12);
        StorPortExtendedFunction(20LL, a1, a1 + 244, v13);
        if ( *(_DWORD *)(a1 + 244) )
        {
          v14 = (__int64 *)(a1 + 264);
          StorPortExtendedFunction(0LL, a1, (unsigned int)(24 * (*v11 + 1)), 1701672526LL);
          if ( *(_QWORD *)(a1 + 264) )
          {
            NVMeZeroMemory(*(void **)(a1 + 264), 24 * (*v11 + 1));
            v15 = 0;
            v16 = 0;
            v43 = 0;
            while ( 1 )
            {
              v17 = 3LL * v15;
              v18 = *v14;
              v40 = v17;
              *(_WORD *)(v18 + 8 * v17) = v15;
              StorPortExtendedFunction(21LL, a1, v16, *v14 + 8 + 24LL * v15);
              v19 = *(_DWORD *)(*v14 + 8 * v17 + 8) - ((*(_DWORD *)(*v14 + 8 * v17 + 8) >> 1) & 0x55555555);
              *(_WORD *)(*v14 + 8 * v17 + 2) = (unsigned __int16)((16843009
                                                                 * (((v19 & 0x33333333)
                                                                   + ((v19 >> 2) & 0x33333333)
                                                                   + (((v19 & 0x33333333) + ((v19 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
              v20 = HIDWORD(*(_QWORD *)(*v14 + 8 * v17 + 8))
                  - (((unsigned int)HIDWORD(*(_QWORD *)(*v14 + 8 * v17 + 8)) >> 1) & 0x55555555);
              *(_WORD *)(*v14 + 8 * v17 + 2) += (unsigned __int16)((16843009
                                                                  * (((v20 & 0x33333333)
                                                                    + ((v20 >> 2) & 0x33333333)
                                                                    + (((v20 & 0x33333333) + ((v20 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
              v44 = *(_WORD *)(*v14 + 8 * v17 + 16);
              if ( *(_WORD *)(*v14 + 8 * v17 + 2) )
              {
                v21 = 0;
                v22 = *(_QWORD *)(*v14 + 8 * v40 + 8);
                if ( v22 )
                  break;
              }
LABEL_41:
              v15 = ++v43;
              v16 = v43;
              if ( (unsigned int)v43 > *v11 )
              {
                v28 = v37;
                v29 = v35;
                if ( v37 && v35 )
                  g_HeteroSystem = 1;
                v30 = v34;
                *(_DWORD *)(a1 + 308) = v38;
                *(_DWORD *)(a1 + 312) = v39;
                *(_DWORD *)(a1 + 304) = v4;
                *(_DWORD *)(a1 + 316) = v28;
                *(_DWORD *)(a1 + 320) = v29;
                if ( v30 )
                  StorPortExtendedFunction(1LL, a1, v30, 0LL);
                return 1;
              }
            }
            while ( !_bittest64(&v22, (unsigned __int8)v21) )
            {
LABEL_39:
              ++v21;
              if ( !v22 )
              {
                v11 = (_DWORD *)(a1 + 248);
                goto LABEL_41;
              }
            }
            v33 = 0;
            memset(v41, 0, 0x50uLL);
            v36 = 80;
            v45 = v44;
            v46 = v21;
            v47 = 0;
            StorPortExtendedFunction(56LL, a1, &v45, &v33);
            *(_DWORD *)(*v10 + 72LL * v33) = v33;
            *(_QWORD *)(*v10 + 72LL * v33 + 40) = *(_QWORD *)(a1 + 256) + 16LL * v44;
            *(_QWORD *)(*v10 + 72LL * v33 + 48) = *v14 + 8 * v40;
            if ( !v34 )
            {
              StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 242), 1701672526LL);
              if ( !v34 )
                goto LABEL_48;
            }
            if ( (unsigned int)StorPortExtendedFunction(23LL, a1, &v45, 7LL) )
            {
LABEL_29:
              if ( (*(_DWORD *)(a1 + 4044) & 0x10) != 0 && v42 )
              {
                if ( (unsigned int)StorPortExtendedFunction(23LL, a1, &v45, 0LL) )
                  goto LABEL_37;
                v27 = *(_QWORD *)&v41[2];
                if ( !*(_QWORD *)&v41[2] )
                  goto LABEL_37;
                if ( WORD4(v41[2]) == v45 )
                {
                  _bittestandreset64(&v27, v21);
                  *(_QWORD *)&v41[2] = v27;
                }
                if ( v27 )
                  *(_OWORD *)(*v10 + 72LL * v33 + 8) = v41[2];
                else
LABEL_37:
                  v42 = 0;
              }
              _bittestandreset64(&v22, v21);
              goto LABEL_39;
            }
            v23 = 0;
            memset(&v41[5], 0, 0x50uLL);
            if ( v4 )
            {
              v24 = v34;
              v25 = v4;
              do
              {
                if ( *(_WORD *)(v24 + 8) == WORD4(v41[2]) && *(_QWORD *)v24 == *(_QWORD *)&v41[2] )
                  v23 = 1;
                v24 += 16LL;
                --v25;
              }
              while ( v25 );
            }
            if ( (unsigned int)StorPortExtendedFunction(23LL, a1, &v45, 0LL) )
            {
LABEL_27:
              v14 = (__int64 *)(a1 + 264);
              if ( *(_QWORD *)&v41[2] )
                *(_OWORD *)(*v10 + 72LL * v33 + 24) = v41[2];
              goto LABEL_29;
            }
            if ( BYTE9(v41[5]) )
            {
              ++v35;
              if ( !v23 )
              {
                v26 = 2LL * v4++;
                ++v39;
                goto LABEL_25;
              }
            }
            else
            {
              ++v37;
              if ( !v23 )
              {
                v26 = 2LL * v4++;
                ++v38;
LABEL_25:
                *(_WORD *)(v34 + 8 * v26 + 8) = WORD4(v41[2]);
                *(_QWORD *)(v34 + 8 * v26) = *(_QWORD *)&v41[2];
              }
            }
            *(_BYTE *)(*v10 + 72LL * v33 + 4) = BYTE9(v41[5]);
            goto LABEL_27;
          }
        }
      }
    }
  }
LABEL_48:
  FreeProcessorInfo(a1, v6, v7, v8);
  if ( v34 )
    StorPortExtendedFunction(1LL, a1, v34, v32);
  return 0;
}
