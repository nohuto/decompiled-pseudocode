/*
 * XREFs of ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C0058D0C
 * Callers:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1C0058BEC (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0059638 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00C9470 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     RemoveVisRgnTracker @ 0x1C00C96FC (RemoveVisRgnTracker.c)
 */

__int64 __fastcall _DetachWindowCompositionTarget(struct tagWND *a1, unsigned int a2)
{
  unsigned int v3; // ebp
  CWindowProp *v5; // rdi
  __int64 v6; // rdx
  CWindowProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v8 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v8) )
  {
    v5 = v8;
    v3 = CHwndTargetProp::ClearSystemVisual(v8, a2);
    if ( !*((_QWORD *)v5 + 3) && !*((_QWORD *)v5 + 5) && !*((_QWORD *)v5 + 7) )
      CWindowProp::RemoveAndDeleteProp(v5);
    if ( a2 )
    {
      if ( a2 != 1 )
        return v3;
      v6 = 8LL;
    }
    else
    {
      v6 = 4LL;
    }
    RemoveVisRgnTracker(a1, v6);
  }
  return v3;
}
