/*
 * XREFs of ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C001CD20
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0048F20 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall DxgkEngCheckRemoteSessionRemoteAdapterAccess(struct _LUID a1, __int64 a2)
{
  DWORD LowPart; // ebx
  unsigned int v3; // edi
  __int16 SuiteMask; // ax
  LONG HighPart; // [rsp+34h] [rbp+Ch]
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v3 = 0;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( Object )
    {
      if ( (PVOID)PsGetCurrentProcess(65533LL, a2) != gpepCSRSS && !(unsigned int)UserIsCurrentProcessDwm() )
      {
        ProductType = 0;
        RtlGetNtProductType(&ProductType);
        SuiteMask = RtlGetSuiteMask();
        if ( ProductType == NtProductServer
          && (SuiteMask & 0x110) == 0x10
          && __PAIR64__(HighPart, LowPart) != qword_1C02512E4 )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  return v3;
}
