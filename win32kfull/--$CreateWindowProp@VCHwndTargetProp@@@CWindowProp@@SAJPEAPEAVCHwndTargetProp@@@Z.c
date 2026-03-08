/*
 * XREFs of ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C007DC60
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C007DAFC (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CHwndTargetProp>(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = Win32AllocPoolZInit(96LL, 1835299669LL);
  if ( v3 )
  {
    *a1 = v3;
    *(_OWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 88) = 0LL;
    *(_QWORD *)v3 = &CHwndTargetProp::`vftable';
    *(_OWORD *)(v3 + 24) = 0LL;
    *(_OWORD *)(v3 + 40) = 0LL;
    *(_OWORD *)(v3 + 56) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_QWORD *)(v3 + 80) = 0LL;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
