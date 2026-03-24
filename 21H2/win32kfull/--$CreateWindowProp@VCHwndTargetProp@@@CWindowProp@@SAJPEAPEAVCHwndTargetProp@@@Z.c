/*
 * XREFs of ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C00ED100
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00ECE64 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CHwndTargetProp>(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = Win32AllocPoolZInit(88LL, 1835299669LL);
  if ( v3 )
  {
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 80) = 0LL;
    *(_QWORD *)v3 = &CHwndTargetProp::`vftable';
    *(_OWORD *)(v3 + 16) = 0LL;
    *(_OWORD *)(v3 + 32) = 0LL;
    *(_OWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
