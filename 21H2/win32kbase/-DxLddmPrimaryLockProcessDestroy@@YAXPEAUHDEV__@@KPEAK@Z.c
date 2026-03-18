/*
 * XREFs of ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C006FEC8
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006FB60 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     DxLddmFindProcessEntry @ 0x1C006FF20 (DxLddmFindProcessEntry.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockProcessDestroy(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  _QWORD *ProcessEntry; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  void (__fastcall *v10)(_QWORD, char *); // rax
  unsigned int v11; // edx

  ProcessEntry = (_QWORD *)DxLddmFindProcessEntry(a1 + 650);
  v6 = ProcessEntry;
  if ( ProcessEntry )
  {
    v7 = *ProcessEntry;
    if ( *(_QWORD **)(v7 + 8) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
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
      if ( qword_1C029ADC0 && (int)qword_1C029ADC0() >= 0 && qword_1C029ADC8 )
        qword_1C029ADC8(a1, (char *)v6 + 28, 1LL);
    }
    v11 = *a3 + *((_DWORD *)v6 + 6);
    if ( v11 < *a3 )
      v11 = -1;
    *a3 = v11;
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
  }
}
