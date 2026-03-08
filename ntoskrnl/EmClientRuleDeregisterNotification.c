/*
 * XREFs of EmClientRuleDeregisterNotification @ 0x1409393F0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EmClientRuleDeregisterNotification(PVOID P)
{
  __int64 i; // r8
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  if ( P )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 4); *(_QWORD *)(v4 + 8) = v5 )
    {
      _InterlockedAdd(*(volatile signed __int32 **)(*((_QWORD *)P + 1) + 40 * i), 0xFFFFFFFF);
      v3 = (_QWORD *)(*((_QWORD *)P + 1) + 8 * (5 * i + 3));
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      i = (unsigned int)(i + 1);
    }
    if ( *(_QWORD *)P )
      ObfDereferenceObject(*(PVOID *)P);
    ExFreePoolWithTag(*((PVOID *)P + 1), 0x6C634D45u);
    ExFreePoolWithTag(P, 0x6C634D45u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  }
}
