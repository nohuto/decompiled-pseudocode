/*
 * XREFs of ?HandleVisibilityOverrideImmunityChange@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x1801EDB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x1801F3B58 (WPP_SF_Sd.c)
 */

__int64 __fastcall CImmersiveApp::HandleVisibilityOverrideImmunityChange(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( a2 == 1 && a3 == 2 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12,
        (unsigned int)&WPP_05fc2d62e6f6302a16b19b31c4fc753f_Traceguids,
        *(_QWORD *)(a1 + 480),
        *(_DWORD *)(a1 + 488));
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 1LL);
  }
  return result;
}
