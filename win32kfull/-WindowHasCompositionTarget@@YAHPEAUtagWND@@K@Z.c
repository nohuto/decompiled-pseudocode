/*
 * XREFs of ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C007DBD8
 * Callers:
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1C007D9EC (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C007DC28 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 */

__int64 __fastcall WindowHasCompositionTarget(struct tagWND *a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  v5 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v5) )
    return *(_QWORD *)(v5 + 16 * v2 + 24) != 0LL;
  return v3;
}
