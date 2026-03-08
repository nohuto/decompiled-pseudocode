/*
 * XREFs of PopProcessDeviceWakeSource @ 0x140A9E094
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14058BF2C (PopAcquireWakeSourceSpinLock.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14058C200 (PopReleaseWakeSourceSpinLock.c)
 *     PopFreeWakeSource @ 0x1409842D8 (PopFreeWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x140A9E248 (PopProcessWakeSourceWork.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

PVOID *PopProcessDeviceWakeSource()
{
  PVOID v0; // rdi
  int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 **v4; // r8
  __int64 *v5; // rax
  PVOID **v6; // rax
  PVOID *v7; // rdx
  PVOID **v8; // r8
  PVOID *v9; // rcx
  _QWORD *v10; // rcx
  PVOID *v11; // rax
  _DWORD *v12; // rcx
  PVOID *result; // rax
  __int64 v14; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v18; // [rsp+60h] [rbp+10h] BYREF
  PVOID **v19; // [rsp+68h] [rbp+18h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquireWakeSourceSpinLock(&LockHandle);
  PopWakeSourceWorkState = 1;
  while ( 1 )
  {
    v0 = PopWakeSourceWorkList;
    if ( PopWakeSourceWorkList == &PopWakeSourceWorkList )
      break;
    ++*(_DWORD *)(PopCurrentWakeInfo + 84);
    PopReleaseWakeSourceSpinLock((__int64)&LockHandle);
    v1 = PopProcessWakeSourceWork(*((_QWORD *)v0 + 2), &v18, &v19);
    ObfDereferenceObjectWithTag(*((PVOID *)v0 + 2), 0x67446F50u);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    if ( v1 >= 0 )
    {
      v2 = PopCurrentWakeInfo;
      v3 = PopCurrentWakeInfo + 24;
      v4 = *(__int64 ***)(PopCurrentWakeInfo + 32);
      if ( *v4 != (__int64 *)(PopCurrentWakeInfo + 24) )
        goto LABEL_18;
      v5 = v18;
      v18 = 0LL;
      *v5 = v3;
      v5[1] = (__int64)v4;
      *v4 = v5;
      *(_QWORD *)(v3 + 8) = v5;
      ++*(_DWORD *)(v2 + 40);
      v6 = v19;
      if ( v19 )
      {
        v7 = *v19;
        if ( (*v19)[1] != v19
          || (v8 = (PVOID **)v19[1], *v8 != (PVOID *)v19)
          || (*v8 = v7, v7[1] = v8, --*(_DWORD *)(v2 + 40), --*(_DWORD *)(v2 + 84), v9 = p_P, *p_P != &P) )
        {
LABEL_18:
          __fastfail(3u);
        }
        v6[1] = p_P;
        *v6 = &P;
        *v9 = v6;
        p_P = (PVOID *)v6;
      }
    }
    v10 = *(_QWORD **)v0;
    if ( *(PVOID *)(*(_QWORD *)v0 + 8LL) != v0 )
      goto LABEL_18;
    v11 = (PVOID *)*((_QWORD *)v0 + 1);
    if ( *v11 != v0 )
      goto LABEL_18;
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v0, 0x206D654Du);
  }
  PopWakeSourceWorkState = 2;
  PopReleaseWakeSourceSpinLock((__int64)&LockHandle);
  while ( 1 )
  {
    v12 = P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_18;
    v14 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_18;
    P = *(PVOID *)P;
    *(_QWORD *)(v14 + 8) = &P;
    PopFreeWakeSource(v12);
  }
}
