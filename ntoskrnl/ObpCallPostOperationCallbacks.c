/*
 * XREFs of ObpCallPostOperationCallbacks @ 0x1408A0D82
 * Callers:
 *     ObpCallPreOperationCallbacks @ 0x1406DBEC0 (ObpCallPreOperationCallbacks.c)
 *     ObpPostInterceptHandleCreate @ 0x1408A0E28 (ObpPostInterceptHandleCreate.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1408A0EBC (ObpPostInterceptHandleDuplicate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCallPostOperationCallbacks(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rbx

  while ( (_QWORD *)*a2 != a2 )
  {
    v4 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v4 != a2 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    a2[1] = v5;
    *v5 = a2;
    v6 = v4[2];
    *(_QWORD *)(a1 + 24) = v4[3];
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 48))(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL), a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 56));
    ExFreePoolWithTag(v4, 0);
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x6243624Fu);
  KeLeaveCriticalRegion();
  return 0LL;
}
