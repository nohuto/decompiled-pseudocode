/*
 * XREFs of IovpLocalCompletionRoutine @ 0x140ABEB60
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfIoCompletionCheckState @ 0x140AC832C (VfIoCompletionCheckState.c)
 *     ViIoCallbackSnapState @ 0x140AC83D4 (ViIoCallbackSnapState.c)
 *     IovpCompleteRequest2 @ 0x140AC9AFC (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x140AC9E10 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x140AC9E98 (IovpCompleteRequest4.c)
 *     VfPendingMoreProcessingRequired @ 0x140ACE970 (VfPendingMoreProcessingRequired.c)
 *     IovpSessionDataDereference @ 0x140ADAFB4 (IovpSessionDataDereference.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall IovpLocalCompletionRoutine(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  char v7; // al
  __int64 v8; // rdx
  unsigned int v9; // r14d
  void *v10; // r15
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rbx
  __int64 v12; // r14
  __int64 v13; // rbx
  void *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi
  char v17; // al
  char v19; // [rsp+68h] [rbp+10h]
  char v20; // [rsp+70h] [rbp+18h]

  v4 = *a3;
  *(_BYTE *)(v4 + 1) = *((_BYTE *)a3 + 33);
  *(_BYTE *)(v4 + 2) = *((_BYTE *)a3 + 34);
  *(_BYTE *)(v4 + 3) = *((_BYTE *)a3 + 35) | *(_BYTE *)(v4 + 3) & 2;
  *(_QWORD *)(v4 + 8) = a3[5];
  *(_QWORD *)(v4 + 16) = a3[6];
  *(_QWORD *)(v4 + 24) = a3[7];
  *(_QWORD *)(v4 + 32) = a3[8];
  *(_QWORD *)(v4 + 48) = a3[10];
  *(_QWORD *)(v4 + 56) = a3[3];
  *(_QWORD *)(v4 + 64) = a3[1];
  v20 = *(_BYTE *)(a2 + 66) + 1;
  v19 = *(_BYTE *)(a2 + 67);
  IovpCompleteRequest2(a2, a3[2]);
  if ( *(_BYTE *)v4 != 22 )
  {
    v7 = *(_BYTE *)(v4 + 3) & 2;
    *(_WORD *)(v4 + 1) = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_BYTE *)(v4 + 3) = v7 | 0x10;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
  }
  v8 = *(_QWORD *)(v4 + 56);
  if ( v8 )
  {
    IovpCompleteRequest3(a2, v8, a3[2]);
    if ( (MmVerifierData & 0x10) != 0 && ViIoCallbacksInitialized )
      v10 = (void *)ViIoCallbackSnapState();
    else
      v10 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v4 + 56);
    v12 = *(_QWORD *)(v4 + 64);
    if ( (unsigned int)VfPendingMoreProcessingRequired(a1, a2, v4, (_DWORD)v11, v12) )
    {
      v9 = -1073741802;
      v11 = (__int64 (__fastcall *)(__int64, __int64, __int64))VfPendingMoreProcessingRequired;
    }
    else
    {
      v9 = v11(a1, a2, v12);
    }
    if ( v10 )
      VfIoCompletionCheckState(v10);
    IovpCompleteRequest4(a2, v9, v11, a3[2]);
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) && *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66) )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v9 = (unsigned int)VfPendingMoreProcessingRequired(a1, a2, v4, 0, *(_QWORD *)(v4 + 64)) != 0 ? 0xC0000016 : 0;
  }
  v13 = a3[2];
  v14 = *(void **)v13;
  if ( *(_QWORD *)v13 )
  {
    v15 = *(_QWORD *)(v13 + 8);
    *(_BYTE *)(v15 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 8));
    IovpSessionDataDereference(v14);
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 20));
    VfIrpDatabaseEntryReleaseLock(v15);
  }
  if ( v9 != -1073741802 && v19 != v20 )
  {
    v16 = v4 + 72;
    *a3 = v16;
    a3[1] = *(_QWORD *)(v16 + 64);
    *((_OWORD *)a3 + 2) = *(_OWORD *)v16;
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v16 + 16);
    *((_OWORD *)a3 + 4) = *(_OWORD *)(v16 + 32);
    *((_OWORD *)a3 + 5) = *(_OWORD *)(v16 + 48);
    a3[12] = *(_QWORD *)(v16 + 64);
    v17 = *(_BYTE *)(v16 + 3);
    if ( *(int *)(a2 + 48) < 0 )
    {
      if ( v17 < 0 )
        goto LABEL_24;
    }
    else if ( (v17 & 0x40) != 0 )
    {
      goto LABEL_24;
    }
    if ( !*(_BYTE *)(a2 + 68) || (v17 & 0x20) == 0 )
    {
      a3[3] = 0LL;
      *(_BYTE *)(v16 + 3) |= 0xE0u;
      goto LABEL_25;
    }
LABEL_24:
    a3[3] = *(_QWORD *)(v16 + 56);
LABEL_25:
    *(_QWORD *)(v16 + 64) = a3;
    *(_QWORD *)(v16 + 56) = IovpLocalCompletionRoutine;
  }
  return v9;
}
