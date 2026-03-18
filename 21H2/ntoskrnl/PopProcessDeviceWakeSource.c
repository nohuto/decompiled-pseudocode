/*
 * XREFs of PopProcessDeviceWakeSource @ 0x140A51700
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1403965EC (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x140396620 (PopAcquireWakeSourceSpinLock.c)
 *     PopFreeWakeSource @ 0x14098F2F8 (PopFreeWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x140A6B1E0 (PopProcessWakeSourceWork.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID *PopProcessDeviceWakeSource()
{
  PVOID v0; // rdi
  _DWORD *v1; // rcx
  PVOID *result; // rax
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 **v6; // r8
  __int64 *v7; // rax
  PVOID **v8; // rax
  PVOID *v9; // rdx
  PVOID **v10; // r8
  PVOID *v11; // rcx
  _QWORD *v12; // rax
  PVOID *v13; // rcx
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
    PopReleaseWakeSourceSpinLock(&LockHandle);
    v3 = PopProcessWakeSourceWork(*((_QWORD *)v0 + 2), &v18, &v19);
    ObfDereferenceObjectWithTag(*((PVOID *)v0 + 2), 0x67446F50u);
    PopAcquireWakeSourceSpinLock(&LockHandle);
    if ( v3 >= 0 )
    {
      v4 = PopCurrentWakeInfo;
      v5 = PopCurrentWakeInfo + 24;
      v6 = *(__int64 ***)(PopCurrentWakeInfo + 32);
      if ( *v6 != (__int64 *)(PopCurrentWakeInfo + 24) )
        goto LABEL_19;
      v7 = v18;
      v18 = 0LL;
      *v7 = v5;
      v7[1] = (__int64)v6;
      *v6 = v7;
      *(_QWORD *)(v5 + 8) = v7;
      ++*(_DWORD *)(v4 + 40);
      v8 = v19;
      if ( v19 )
      {
        v9 = *v19;
        if ( (*v19)[1] != v19
          || (v10 = (PVOID **)v19[1], *v10 != (PVOID *)v19)
          || (*v10 = v9, v9[1] = v10, --*(_DWORD *)(v4 + 40), --*(_DWORD *)(v4 + 84), v11 = p_P, *p_P != &P) )
        {
LABEL_19:
          __fastfail(3u);
        }
        v8[1] = p_P;
        *v8 = &P;
        *v11 = v8;
        p_P = (PVOID *)v8;
      }
    }
    v12 = *(_QWORD **)v0;
    if ( *(PVOID *)(*(_QWORD *)v0 + 8LL) != v0 )
      goto LABEL_19;
    v13 = (PVOID *)*((_QWORD *)v0 + 1);
    if ( *v13 != v0 )
      goto LABEL_19;
    *v13 = v12;
    v12[1] = v13;
    ExFreePoolWithTag(v0, 0x206D654Du);
  }
  PopWakeSourceWorkState = 2;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  while ( 1 )
  {
    v1 = P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_19;
    v14 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_19;
    P = *(PVOID *)P;
    *(_QWORD *)(v14 + 8) = &P;
    PopFreeWakeSource(v1);
  }
}
