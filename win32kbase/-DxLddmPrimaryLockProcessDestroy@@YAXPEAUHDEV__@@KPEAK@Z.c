/*
 * XREFs of ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00BD294
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006D050 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DxLddmFindProcessEntry @ 0x1C00BD2F0 (DxLddmFindProcessEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockProcessDestroy(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  _QWORD *ProcessEntry; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax
  void (__fastcall *v10)(_QWORD, char *); // rax
  unsigned int v11; // edx

  ProcessEntry = (_QWORD *)DxLddmFindProcessEntry(a1 + 650);
  v6 = ProcessEntry;
  if ( ProcessEntry )
  {
    v7 = *ProcessEntry;
    if ( *(_QWORD **)(*ProcessEntry + 8LL) != ProcessEntry || (v8 = (_QWORD *)ProcessEntry[1], (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *((_DWORD *)v6 + 5);
    if ( v9 )
    {
      a1[654] -= v9;
      v10 = (void (__fastcall *)(_QWORD, char *))*((_QWORD *)a1 + 328);
      if ( v10 )
        v10(*((_QWORD *)a1 + 221), (char *)v6 + 28);
      if ( qword_1C02D55C0 && (int)qword_1C02D55C0() >= 0 && qword_1C02D55C8 )
        qword_1C02D55C8(a1, (char *)v6 + 28, 1LL);
    }
    v11 = *a3 + *((_DWORD *)v6 + 6);
    if ( v11 < *a3 )
      v11 = -1;
    *a3 = v11;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v6);
  }
}
