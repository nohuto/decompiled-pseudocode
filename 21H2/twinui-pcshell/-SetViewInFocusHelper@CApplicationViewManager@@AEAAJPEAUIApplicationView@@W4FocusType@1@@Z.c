/*
 * XREFs of ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x18006ECE8
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18006ECD0 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801FF3E0 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002D0A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocusHelper(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx

  v3 = (RTL_SRWLOCK *)(a1 + 672);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 672));
  if ( a3 )
  {
    if ( a3 == 1 && a2 == *(_QWORD *)(a1 + 712) )
      goto LABEL_4;
  }
  else if ( a2 == *(_QWORD *)(a1 + 712) && (*(_BYTE *)(a1 + 720) & 1) == 0 )
  {
    goto LABEL_4;
  }
  v8 = *(_QWORD *)(a1 + 712);
  if ( v8 && v8 != a2 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v8, 9u, a2);
  v9 = *(_QWORD *)(a1 + 712);
  if ( v9 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = *(_QWORD *)(a1 + 712);
    }
    *(_QWORD *)(a1 + 712) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( a3 == 1 )
    *(_DWORD *)(a1 + 720) |= 1u;
  else
    *(_DWORD *)(a1 + 720) &= ~1u;
  v10 = *(_QWORD *)(a1 + 712);
  if ( v10 )
    CApplicationViewManager::RaiseApplicationViewChanged(a1 + 136, v10, 8 - (a3 != 1), 0LL);
LABEL_4:
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
