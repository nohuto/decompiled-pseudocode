/*
 * XREFs of ??$CreateWindowProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAJPEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1C0101540
 * Callers:
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C010141C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowProp::CreateWindowProp<WindowMargins::CWindowMarginProp>(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = Win32AllocPoolZInit(56LL, 1668118357LL);
  if ( v3 )
  {
    *a1 = v3;
    *(_OWORD *)v3 = 0LL;
    *(_OWORD *)(v3 + 16) = 0LL;
    *(_OWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)v3 = &WindowMargins::CWindowMarginProp::`vftable';
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
