/*
 * XREFs of ?ForceHighColor@@YAKXZ @ 0x1800389DC
 * Callers:
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180038754 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180053258 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

__int64 ForceHighColor(void)
{
  __int64 result; // rax

  result = dword_1800E31D0;
  if ( dword_1800E31D0 == -1 )
  {
    result = (unsigned int)-RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"HighColor", &dword_1800E31D0);
    dword_1800E31D0 = result;
  }
  return result;
}
