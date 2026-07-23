/*
 * XREFs of _CmGetDeviceInterfaceReferenceString @ 0x14072B8B8
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140632AA8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IoGetDeviceInterfaceAlias @ 0x14072B4C0 (IoGetDeviceInterfaceAlias.c)
 *     PiSwCompleteCreate @ 0x14074D850 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406367DC (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmGetDeviceInterfaceReferenceString(
        __int64 a1,
        const WCHAR *a2,
        wchar_t *a3,
        unsigned int a4,
        _DWORD *a5)
{
  size_t v5; // rsi
  int v8; // ebx
  wchar_t *v9; // rax
  const wchar_t *v10; // r8
  wchar_t v11; // ax
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax

  v5 = a4;
  v8 = CmValidateDeviceInterfaceName(a1, a2);
  if ( v8 >= 0 )
  {
    v9 = wcschr(a2 + 4, 0x5Cu);
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = v9[1];
      v12 = v10;
      while ( v11 )
      {
        if ( v11 == 92 || v11 == 47 )
        {
          v8 = -1073741767;
          break;
        }
        v11 = *++v12;
      }
      if ( v8 >= 0 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( v10[v13] );
        v14 = v13 + 1;
        if ( v14 > 0xFFFFFFFF )
        {
          return (unsigned int)-1073741675;
        }
        else
        {
          if ( a5 )
            *a5 = v14;
          if ( (unsigned int)v14 > (unsigned int)v5 )
            return (unsigned int)-1073741789;
          else
            return (unsigned int)RtlStringCchCopyExW(a3, v5, v10, 0LL, 0LL, 0x900u);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  return (unsigned int)v8;
}
