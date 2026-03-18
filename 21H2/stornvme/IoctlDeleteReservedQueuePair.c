/*
 * XREFs of IoctlDeleteReservedQueuePair @ 0x1C001B48C
 * Callers:
 *     IoctlToNVMe @ 0x1C0002DE0 (IoctlToNVMe.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0023504 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0023810 (NVMeIoSubmissionQueueDelete.c)
 */

__int64 __fastcall IoctlDeleteReservedQueuePair(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  int v4; // edx
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  _WORD *v10; // r12
  unsigned int v11; // r9d
  __int16 v12; // r8
  unsigned __int16 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int16 v19; // r9
  __int64 v20; // r11
  unsigned __int16 v21; // cx
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int16 v24; // ax
  __int64 v26; // [rsp+100h] [rbp+8h] BYREF

  v2 = 0;
  v4 = *(unsigned __int16 *)(a1 + 838);
  v6 = 0;
  if ( !(_WORD)v4 || !*(_WORD *)(a1 + 810) )
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
  if ( *(_DWORD *)(v8 + a2) < 0x28u )
  {
    v6 = -1056964602;
LABEL_36:
    if ( !*(_BYTE *)(a2 + 3) )
      *(_BYTE *)(a2 + 3) = 4;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    return v6;
  }
  v9 = *(unsigned __int16 *)(a1 + 306);
  v10 = (_WORD *)(v7 + 36);
  v11 = *(unsigned __int16 *)(v7 + 36);
  if ( v11 > v9 + v4 || (unsigned __int16)v11 <= (unsigned __int16)v9 )
  {
LABEL_35:
    v6 = -1056964601;
    goto LABEL_36;
  }
  v12 = *(_WORD *)(a1 + 808);
  v13 = 0;
  do
  {
    if ( !v12 )
      break;
    v14 = *(_QWORD *)(a1 + 816);
    if ( *(_WORD *)(v14 + 48LL * v13 + 28) == *v10 )
    {
      v15 = *(_QWORD *)(v14 + 48LL * v13);
      if ( v15 && (*(_DWORD *)(a1 + 136) & 1) != 0 )
      {
        v16 = *(unsigned __int16 *)(v14 + 48LL * v13 + 26);
        v26 = *(_QWORD *)(v14 + 48LL * v13 + 8);
        NVMeFreeDmaBuffer(a1, v16 << 6, &v26, v15);
      }
      if ( !(unsigned __int8)NVMeIoSubmissionQueueDelete(a1) )
      {
        *(_DWORD *)(a1 + 36) = 19;
        v6 = -1056964607;
        StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
        goto LABEL_36;
      }
      v17 = *(_QWORD *)(a1 + 816);
      *(_OWORD *)(v17 + 48LL * v13) = 0LL;
      *(_OWORD *)(v17 + 48LL * v13 + 16) = 0LL;
      *(_OWORD *)(v17 + 48LL * v13 + 32) = 0LL;
      v12 = --*(_WORD *)(a1 + 808);
    }
    ++v13;
  }
  while ( v13 < *(_WORD *)(a1 + 838) );
  if ( (*(_DWORD *)(a1 + 136) & 1) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 824);
    v19 = *(_WORD *)(a1 + 810);
    v20 = *(unsigned __int16 *)(v18 + 48LL * v13 + 26);
    v21 = 0;
    if ( v19 )
    {
      while ( *(_WORD *)(v18 + 48LL * v21 + 24) != *v10 )
      {
        if ( ++v21 >= v19 )
          goto LABEL_26;
      }
      v22 = *(_QWORD *)(v18 + 48LL * v21);
      v26 = *(_QWORD *)(v18 + 48LL * v21 + 8);
      NVMeFreeDmaBuffer(a1, v20 << 6, &v26, v22);
    }
  }
LABEL_26:
  if ( !(unsigned __int8)NVMeIoCompletionQueueDelete(a1) )
  {
    *(_DWORD *)(a1 + 36) = 20;
    v6 = -1056964607;
    StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
    goto LABEL_36;
  }
  while ( 1 )
  {
    v24 = *(_WORD *)(a1 + 810);
    if ( v2 >= v24 )
      break;
    v23 = *(_QWORD *)(a1 + 824);
    if ( *(_WORD *)(v23 + 48LL * v2 + 24) == *v10 )
    {
      *(_OWORD *)(v23 + 48LL * v2) = 0LL;
      *(_OWORD *)(v23 + 48LL * v2 + 16) = 0LL;
      *(_OWORD *)(v23 + 48LL * v2 + 32) = 0LL;
    }
    ++v2;
  }
  *(_WORD *)(a1 + 810) = v24 - 1;
  *(_BYTE *)(a2 + 3) = 1;
  return v6;
}
