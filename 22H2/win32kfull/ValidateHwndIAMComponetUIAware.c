/*
 * XREFs of ValidateHwndIAMComponetUIAware @ 0x1C0037E84
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0037A00 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0037F54 (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B6A0 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0122588 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ValidateHwndIAMComponetUIAware(__int64 a1)
{
  const struct tagWND *v2; // rax
  const struct tagWND *v3; // rbx
  struct tagWND *Host; // rax

  gbValidateHandleForIL = 0;
  v2 = (const struct tagWND *)ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(v2) )
    {
      Host = CoreWindowProp::GetHost(v3);
      if ( Host )
      {
        if ( *(_QWORD *)(*((_QWORD *)Host + 2) + 424LL) == *(_QWORD *)(gptiCurrent + 424LL) )
          gbValidateHandleForIL = 0;
      }
    }
  }
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    gbValidateHandleForIL = 0;
  return ValidateHwnd(a1);
}
