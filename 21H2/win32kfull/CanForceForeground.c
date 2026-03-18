/*
 * XREFs of CanForceForeground @ 0x1C007B000
 * Callers:
 *     CheckAllowForeground @ 0x1C007AD80 (CheckAllowForeground.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C00A66BC (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A6928 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z @ 0x1C00CE268 (-ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C01067C8 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01CE668 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     xxxHardErrorControl @ 0x1C023CD7C (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CanForceForeground(__int64 a1)
{
  struct tagTHREADINFO *PtiLastWoken; // rax
  _QWORD *v3; // rdx
  unsigned int *v4; // rax
  _BOOL8 result; // rax

  PtiLastWoken = CInputGlobals::GetPtiLastWoken(gpInputGlobals);
  result = 1;
  if ( PtiLastWoken )
  {
    v3 = (_QWORD *)*((_QWORD *)PtiLastWoken + 53);
    if ( v3 != (_QWORD *)a1
      && gptiForeground
      && *(_QWORD *)(gptiForeground + 424LL) != a1
      && (*(_DWORD *)(a1 + 12) & 0x80100) == 0
      && a1 != gppiInputProvider
      && gpqForeground
      && (LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory)
       || !PsGetProcessDebugPort(*v3) && !PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 424LL))) )
    {
      v4 = (unsigned int *)UPDWORDPointer(0x2000LL);
      if ( !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v4) )
        return 0;
    }
  }
  return result;
}
