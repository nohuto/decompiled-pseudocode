/*
 * XREFs of DpiQueryAdapterRegistryInfo @ 0x1C0394FE4
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C01F1618 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DpiQueryAdapterRegistryInfo(__int64 a1, char *a2)
{
  char v4; // bl
  __int64 result; // rax

  v4 = 0;
  memset(a2, 0, 0x820uLL);
  result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.AdapterString", a2, 0x206u, 2u);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  else
  {
    v4 = 1;
  }
  result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.BiosString", a2 + 520, 0x206u, 2u);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  else
  {
    v4 = 1;
  }
  result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.DacType", a2 + 1040, 0x206u, 2u);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  else
  {
    v4 = 1;
  }
  result = DpiReadPnpRegistryValue(a1, L"HardwareInformation.ChipType", a2 + 1560, 0x206u, 2u);
  if ( (_DWORD)result == -1073741772 )
  {
    if ( v4 )
      return 0LL;
  }
  return result;
}
