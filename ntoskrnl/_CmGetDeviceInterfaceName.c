/*
 * XREFs of _CmGetDeviceInterfaceName @ 0x1406C54F8
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x14078E260 (IoGetDeviceInterfaceAlias.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140244A08 (RtlStringCchCopyExW.c)
 *     _CmValidateInstallerClassName @ 0x1406C4F20 (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 */

int __fastcall CmGetDeviceInterfaceName(
        __int64 a1,
        const WCHAR *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  NTSTRSAFE_PWSTR v16; // r14
  const wchar_t *v17; // r8
  int result; // eax
  __int16 *i; // rdx
  __int16 v20; // cx
  wchar_t v21; // ax
  const wchar_t *v22; // rdx
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+30h] [rbp-10h] BYREF
  size_t pcchRemaining; // [rsp+70h] [rbp+30h] BYREF

  ppszDestEnd[0] = 0LL;
  pcchRemaining = 0LL;
  if ( (int)CmValidateInstallerClassName(a1, a2) < 0 || (int)CmValidateDeviceName(v11, a3) < 0 )
    return -1073741811;
  v12 = -1LL;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    if ( (unsigned __int64)(v13 - 1) <= 0x102 )
    {
      v21 = *a4;
      v22 = a4;
      while ( v21 )
      {
        if ( v21 == 92 || v21 == 47 )
          return -1073741773;
        v21 = *++v22;
      }
      goto LABEL_5;
    }
    return -1073741811;
  }
  v13 = 0LL;
  do
LABEL_5:
    ++v12;
  while ( a3[v12] );
  v14 = v12 + 44;
  v15 = v13 + 2;
  if ( !v13 )
    v15 = v14;
  if ( v15 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v15;
  if ( (unsigned int)v15 > (unsigned int)cchDest )
    return -1073741789;
  v16 = pszDest;
  v17 = L"\\??\\";
  if ( !a5 )
    v17 = L"\\\\?\\";
  result = RtlStringCchCopyExW(pszDest, (unsigned int)cchDest, v17, ppszDestEnd, &pcchRemaining, 0x900u);
  if ( result >= 0 )
  {
    result = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, a3, ppszDestEnd, &pcchRemaining, 0x900u);
    if ( result >= 0 )
    {
      result = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, L"#", ppszDestEnd, &pcchRemaining, 0x900u);
      if ( result >= 0 )
      {
        result = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, a2, ppszDestEnd, &pcchRemaining, 0x900u);
        if ( result >= 0 )
        {
          for ( i = (__int16 *)(v16 + 4); ; ++i )
          {
            v20 = *i;
            if ( !*i )
              break;
            if ( v20 == 92 || v20 == 47 )
              *i = 35;
          }
          if ( v13 )
          {
            result = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, L"\\", ppszDestEnd, &pcchRemaining, 0x900u);
            if ( result >= 0 )
              return RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, a4, ppszDestEnd, &pcchRemaining, 0x900u);
          }
        }
      }
    }
  }
  return result;
}
