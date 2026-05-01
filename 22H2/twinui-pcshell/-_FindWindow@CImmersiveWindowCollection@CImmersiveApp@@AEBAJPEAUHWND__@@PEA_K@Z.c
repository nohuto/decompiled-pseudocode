/*
 * XREFs of ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180035DD8
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180035CA0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x1801EF004 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x1801F08A0 (-SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1801F0C08 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801F11CC (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1801F2628 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        unsigned __int64 *a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax

  v6 = 0;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 22) )
  {
    if ( a2 )
    {
      v7 = 0LL;
      v8 = 0LL;
      if ( *((_QWORD *)this + 22) )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v8);
          if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == a2 )
            break;
          if ( ++v8 >= *((_QWORD *)this + 22) )
            goto LABEL_10;
        }
        v7 = v8;
        v10 = 0;
      }
      else
      {
LABEL_10:
        v10 = -2147319765;
      }
      if ( v10 >= 0 )
        *a3 = v7;
      return (unsigned int)v10;
    }
  }
  else
  {
    return (unsigned int)-2147319765;
  }
  return v6;
}
