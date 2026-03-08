/*
 * XREFs of ACPIGetWorkerForNothing @ 0x1C002B780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

void __fastcall ACPIGetWorkerForNothing(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  void (__fastcall *v7)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v8; // al
  __int64 v9; // r9
  _QWORD *v10; // r8

  a4[18] = a2;
  if ( a2 >= 0 )
  {
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1LL);
  }
  if ( (*a4 & 0x10000000) == 0 )
  {
    v7 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*((_QWORD *)a4 + 5);
    if ( v7 )
      v7(a1, (unsigned int)a2, 0LL, *((_QWORD *)a4 + 6));
    v8 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v9 = *((_QWORD *)a4 + 1);
    if ( *(_DWORD **)(v9 + 8) != a4 + 2 || (v10 = (_QWORD *)*((_QWORD *)a4 + 2), (_DWORD *)*v10 != a4 + 2) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    KeReleaseSpinLock(&AcpiGetLock, v8);
    ExFreePoolWithTag(a4, 0);
  }
}
