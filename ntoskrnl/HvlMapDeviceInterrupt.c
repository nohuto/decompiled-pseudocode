__int64 __fastcall HvlMapDeviceInterrupt(PHYSICAL_ADDRESS a1, _OWORD *a2, __int64 *a3, _OWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  PHYSICAL_ADDRESS *v11; // r14
  PHYSICAL_ADDRESS *v12; // rbx
  int v13; // eax
  unsigned int v14; // eax
  __int16 v15; // ax
  __int16 v16; // bx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v21; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  __int64 v23; // [rsp+40h] [rbp-C0h]
  __int128 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  _QWORD v27[34]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[112]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v29[288]; // [rsp+1F0h] [rbp+F0h] BYREF

  v22 = 0LL;
  LODWORD(v23) = 0;
  v25 = 0LL;
  LODWORD(v26) = 0;
  v21 = 0LL;
  v24 = 0LL;
  memset(v27, 0, 0x108uLL);
  v8 = 0;
  if ( a3 )
  {
    LODWORD(v27[0]) = 2097153;
    memset((char *)v27 + 4, 0, 0x104uLL);
    v9 = *((unsigned __int16 *)a3 + 4);
    v10 = *a3;
    if ( (_WORD)v9 )
    {
      if ( WORD1(v27[0]) <= (unsigned __int16)v9 )
        goto LABEL_6;
      LOWORD(v27[0]) = v9 + 1;
    }
    v27[v9 + 1] |= v10;
  }
  while ( 1 )
  {
LABEL_6:
    v11 = HvlpAcquireHypercallPage((__int64)&v24, 2, (__int64)v28, 56LL);
    v12 = HvlpAcquireHypercallPage((__int64)&v21, 1, (__int64)v29, 144LL);
    memset(v12, 0, 0x48uLL);
    *(_OWORD *)&v12[5].LowPart = *a2;
    *(_OWORD *)&v12[7].LowPart = a2[1];
    if ( a3 )
    {
      v13 = HvlpAffinityToHvProcessorSet(v27, &v12[8], (v21 & 2) != 0 ? 64 : 4016);
      if ( v13 == -1 )
      {
        HvlpReleaseHypercallPage((__int64)&v21);
        v12 = HvlpAcquireHypercallPage((__int64)&v21, 1, 0LL, 0LL);
        memset(v12, 0, 0x48uLL);
        *(_OWORD *)&v12[5].LowPart = *a2;
        *(_OWORD *)&v12[7].LowPart = a2[1];
        v13 = HvlpAffinityToHvProcessorSet(v27, &v12[8], 4016LL);
      }
      v12[7].HighPart |= 2u;
      v14 = v13 + 80;
      v8 = v14 - 72;
      if ( v14 <= 0x48 )
        v8 = 0;
    }
    else
    {
      *(_OWORD *)&v12[7].LowPart = 0LL;
    }
    v12->QuadPart = -1LL;
    v12[1] = a1;
    v15 = HvcallInitiateHypercall(((v8 + 7) << 14) & 0x3FE0000 | 0x7C);
    v8 = 0;
    v16 = v15;
    if ( !v15 )
      *a4 = *(_OWORD *)&v11->LowPart;
    HvlpReleaseHypercallPage((__int64)&v21);
    HvlpReleaseHypercallPage((__int64)&v24);
    if ( !HvlpHvStatusIsInsufficientMemory(v16) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v16, v17, v18, v19) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v16);
}
