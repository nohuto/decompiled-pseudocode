__int64 __fastcall IoctlCreateReservedQueuePair(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r11
  unsigned int v5; // esi
  unsigned __int16 v6; // ax
  char v7; // r10
  unsigned __int16 *v8; // rbx
  __int64 SrbDataBuffer; // rdx
  unsigned __int64 v10; // r9
  unsigned __int16 FreeReservedQueueIndex; // ax
  __int64 v12; // r13
  int v13; // ecx
  __int16 v14; // r12
  unsigned int v15; // ecx
  unsigned __int16 v16; // r12
  __int16 v17; // ax
  __int16 v18; // ax
  unsigned __int16 v19; // r14
  unsigned __int16 i; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  _OWORD *v24; // rdx
  __int64 v26; // [rsp+D0h] [rbp-58h]
  __int64 v27; // [rsp+D8h] [rbp-50h]
  void *v28; // [rsp+E0h] [rbp-48h]
  __int64 v29; // [rsp+140h] [rbp+18h] BYREF
  int v30; // [rsp+148h] [rbp+20h]

  LOBYTE(v2) = 0;
  v29 = 0LL;
  v5 = 0;
  v6 = *(_WORD *)(a1 + 918);
  v7 = 4;
  if ( !v6 || *(_WORD *)(a1 + 890) >= v6 || (v8 = (unsigned __int16 *)(a1 + 888), *(_WORD *)(a1 + 888) >= v6) )
  {
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_35;
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v29);
  v26 = SrbDataBuffer;
  v10 = *(unsigned int *)v29;
  if ( (unsigned int)v10 < 0xC4 )
  {
    v5 = -1056964602;
LABEL_6:
    *(_BYTE *)(a2 + 3) = 18;
LABEL_36:
    if ( *(_BYTE *)(a2 + 3) == (_BYTE)v2 )
      *(_BYTE *)(a2 + 3) = v7;
    if ( *(_BYTE *)(a1 + 22) != (_BYTE)v2 )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v5;
  }
  v28 = (void *)(SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 36) + 28LL);
  if ( v10 < ((unsigned __int64)*(unsigned __int16 *)(SrbDataBuffer + 68) << 6) + 132 )
  {
    v5 = -1056964604;
    goto LABEL_6;
  }
  if ( *(unsigned int *)(SrbDataBuffer + 40) < 48 * (unsigned __int64)*(unsigned __int16 *)(SrbDataBuffer + 68) + 56 )
  {
    v5 = -1056964604;
    goto LABEL_36;
  }
  FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
  v12 = FreeReservedQueueIndex;
  if ( FreeReservedQueueIndex == 0xFFFF
    || (v13 = *(unsigned __int16 *)(a1 + 338),
        v14 = v13 + FreeReservedQueueIndex,
        v15 = *(unsigned __int16 *)(a1 + 918) + v13,
        v16 = v14 + 1,
        v30 = v16,
        v16 > v15) )
  {
    v7 = 4;
LABEL_35:
    v5 = -1056964601;
    goto LABEL_36;
  }
  v17 = NVMeReservedCompletionQueueCreate(a1);
  v2 = 0;
  if ( v17 )
  {
    *(_DWORD *)(a1 + 36) = 18;
    v5 = -1056964607;
LABEL_16:
    v7 = 4;
    goto LABEL_36;
  }
  LOWORD(v29) = 0;
  v27 = *(_QWORD *)(a1 + 904) + 48 * v12;
  if ( !*(_WORD *)(v26 + 68) )
  {
LABEL_33:
    *(_BYTE *)(a2 + 3) = 1;
    return v5;
  }
  while ( 1 )
  {
    v18 = NVMeReservedSubmissionQueueCreate(a1, v12, v2);
    LOBYTE(v2) = 0;
    if ( v18 )
      break;
    LOWORD(v29) = v29 + 1;
    v2 = v29;
    ++*(_WORD *)(v27 + 34);
    v19 = *(_WORD *)(v26 + 68);
    if ( v2 < v19 )
    {
      LOWORD(v12) = GetFreeReservedQueueIndex(a1);
      if ( (_WORD)v12 == 0xFFFF )
      {
        LOBYTE(v2) = 0;
        goto LABEL_25;
      }
    }
    if ( v2 >= v19 )
      goto LABEL_33;
  }
  *(_DWORD *)(a1 + 36) = 18;
  v5 = -1056964607;
LABEL_25:
  if ( v16 )
  {
    for ( i = 0; i < *v8; ++i )
    {
      v21 = *(_QWORD *)(a1 + 896);
      v29 = 48LL * i;
      if ( *(_WORD *)(v29 + v21 + 28) == v16 )
      {
        NVMeIoSubmissionQueueDelete(a1);
        v22 = *(_QWORD *)(a1 + 896);
        v23 = v29;
        *(_OWORD *)(v29 + v22) = 0LL;
        *(_OWORD *)(v23 + v22 + 16) = 0LL;
        *(_OWORD *)(v23 + v22 + 32) = 0LL;
      }
    }
    NVMeIoCompletionQueueDelete(a1);
    v24 = (_OWORD *)(*(_QWORD *)(a1 + 904) + 48LL * (v30 - *(unsigned __int16 *)(a1 + 338) - 1));
    *v24 = 0LL;
    v24[1] = 0LL;
    v24[2] = 0LL;
    memset(v28, 0, 0x68uLL);
    LOBYTE(v2) = 0;
  }
  if ( v5 )
    goto LABEL_16;
  return v5;
}
