/*
 * XREFs of _CmGetDeviceInterfaceSymbolicLinkName @ 0x140683BDC
 * Callers:
 *     IopBuildGlobalSymbolicLinkString @ 0x14068383C (IopBuildGlobalSymbolicLinkString.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140245AC0 (RtlStringCchCopyNExW.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406D3FF0 (_CmValidateDeviceInterfaceName.c)
 */

NTSTATUS __fastcall CmGetDeviceInterfaceSymbolicLinkName(
        __int64 a1,
        __int64 a2,
        wchar_t *a3,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // rdi
  NTSTATUS result; // eax
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  size_t v11; // rax
  unsigned int v12; // ecx

  v5 = a4;
  result = CmValidateDeviceInterfaceName();
  if ( result >= 0 )
  {
    v9 = (const wchar_t *)(a2 + 8);
    v10 = wcschr(v9, 0x5Cu);
    if ( v10 )
    {
      v11 = v10 - v9;
    }
    else
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v9[v11] );
    }
    if ( v11 <= 0x27 )
    {
      return -1073741773;
    }
    else
    {
      v12 = v11 + 1;
      if ( v11 + 1 > 0xFFFFFFFF )
      {
        return -1073741675;
      }
      else
      {
        if ( a5 )
          *a5 = v12;
        if ( v12 > (unsigned int)v5 )
          return -1073741789;
        else
          return RtlStringCchCopyNExW(a3, v5, v9, v11, 0LL, 0LL, 0x800u);
      }
    }
  }
  return result;
}
