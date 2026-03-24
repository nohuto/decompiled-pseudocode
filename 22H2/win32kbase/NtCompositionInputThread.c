/*
 * XREFs of NtCompositionInputThread @ 0x1C01FB110
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0048F20 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01F9F74 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 */

__int64 __fastcall NtCompositionInputThread(void *a1, void *a2, int a3)
{
  int v6; // eax
  CInputManager *v7; // rcx

  if ( qword_1C0256E48 )
    v6 = qword_1C0256E48();
  else
    v6 = -1073741637;
  if ( v6 < 0 )
    return 3221225474LL;
  if ( !UserIsCurrentProcessDwm((__int64)a1, (__int64)a2) )
    return 3221225506LL;
  if ( g_pInputManager )
    return CInputManager::DwmInputThread(v7, a1, a2, a3);
  return 3221225473LL;
}
