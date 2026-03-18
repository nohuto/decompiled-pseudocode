/*
 * XREFs of IoctlCreateReservedQueuePair @ 0x1C001AFEC
 * Callers:
 *     IoctlToNVMe @ 0x1C0002DE0 (IoctlToNVMe.c)
 * Callees:
 *     memset @ 0x1C00109C0 (memset.c)
 *     GetFreeReservedQueueIndex @ 0x1C001AE30 (GetFreeReservedQueueIndex.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0023504 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0023810 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0023B84 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023F2C (NVMeReservedSubmissionQueueCreate.c)
 */

__int64 __fastcall IoctlCreateReservedQueuePair(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r11
  unsigned int v5; // edi
  unsigned __int16 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int16 FreeReservedQueueIndex; // ax
  int v11; // r11d
  __int64 v12; // r12
  int v13; // ecx
  unsigned __int16 v14; // bp
  unsigned __int16 v15; // r11
  unsigned __int16 i; // r15
  __int64 v17; // rax
  _OWORD *v18; // rdx
  void *v20; // [rsp+D0h] [rbp-48h]
  __int64 v21; // [rsp+138h] [rbp+20h]

  v2 = *(_WORD *)(a1 + 838);
  v5 = 0;
  v6 = 0;
  if ( !v2 || *(_WORD *)(a1 + 810) >= v2 || *(_WORD *)(a1 + 808) >= v2 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    v8 = 60LL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = 16LL;
  }
  v9 = *(unsigned int *)(a2 + v8);
  if ( (unsigned int)v9 < 0xC4 )
  {
    *(_BYTE *)(a2 + 3) = 18;
    v5 = -1056964602;
LABEL_36:
    if ( !*(_BYTE *)(a2 + 3) )
      *(_BYTE *)(a2 + 3) = 4;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v5;
  }
  v20 = (void *)(v7 + *(unsigned int *)(v7 + 36) + 28LL);
  if ( v9 < ((unsigned __int64)*(unsigned __int16 *)(v7 + 68) << 6) + 132 )
  {
    *(_BYTE *)(a2 + 3) = 18;
    v5 = -1056964604;
    goto LABEL_36;
  }
  if ( *(unsigned int *)(v7 + 40) < 48 * (unsigned __int64)*(unsigned __int16 *)(v7 + 68) + 56 )
  {
    v5 = -1056964604;
    goto LABEL_36;
  }
  FreeReservedQueueIndex = GetFreeReservedQueueIndex(a1);
  v12 = FreeReservedQueueIndex;
  if ( FreeReservedQueueIndex == 0xFFFF
    || (v13 = *(unsigned __int16 *)(a1 + 306), v14 = FreeReservedQueueIndex + v13 + 1, v14 > (unsigned int)(v11 + v13)) )
  {
LABEL_35:
    v5 = -1056964601;
    goto LABEL_36;
  }
  if ( (unsigned __int16)NVMeReservedCompletionQueueCreate(a1) )
  {
    *(_DWORD *)(a1 + 36) = 18;
    v5 = -1056964607;
    goto LABEL_36;
  }
  v21 = *(_QWORD *)(a1 + 824) + 48 * v12;
  if ( !*(_WORD *)(v7 + 68) )
  {
LABEL_33:
    *(_BYTE *)(a2 + 3) = 1;
    return v5;
  }
  while ( !(unsigned __int16)NVMeReservedSubmissionQueueCreate(a1, v12, v6) )
  {
    ++v6;
    ++*(_WORD *)(v21 + 34);
    v15 = *(_WORD *)(v7 + 68);
    if ( v6 < v15 )
    {
      LOWORD(v12) = GetFreeReservedQueueIndex(a1);
      if ( (_WORD)v12 == 0xFFFF )
        goto LABEL_25;
    }
    if ( v6 >= v15 )
      goto LABEL_33;
  }
  *(_DWORD *)(a1 + 36) = 18;
  v5 = -1056964607;
LABEL_25:
  if ( v14 )
  {
    for ( i = 0; i < *(_WORD *)(a1 + 808); ++i )
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 816) + 48LL * i + 28) == v14 )
      {
        NVMeIoSubmissionQueueDelete(a1);
        v17 = *(_QWORD *)(a1 + 816);
        *(_OWORD *)(v17 + 48LL * i) = 0LL;
        *(_OWORD *)(v17 + 48LL * i + 16) = 0LL;
        *(_OWORD *)(v17 + 48LL * i + 32) = 0LL;
      }
    }
    NVMeIoCompletionQueueDelete(a1);
    v18 = (_OWORD *)(*(_QWORD *)(a1 + 824) + 48LL * (v14 - *(unsigned __int16 *)(a1 + 306) - 1));
    *v18 = 0LL;
    v18[1] = 0LL;
    v18[2] = 0LL;
    memset(v20, 0, 0x68uLL);
  }
  if ( v5 )
    goto LABEL_36;
  return v5;
}
