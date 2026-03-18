/*
 * XREFs of ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C001E100
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall DxgkEngCheckRemoteSessionRemoteAdapterAccess(struct _LUID a1)
{
  DWORD LowPart; // ebx
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int16 SuiteMask; // ax
  LONG HighPart; // [rsp+34h] [rbp+Ch]
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v2 = 0;
  v3 = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD))SGDGetSessionState)(a1) + 24);
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( *(_QWORD *)(v3 + 3096) )
    {
      if ( (PVOID)PsGetCurrentProcess(v3, 65533LL, v4) != gpepCSRSS && !UserIsCurrentProcessDwm(v7, v6, v8) )
      {
        ProductType = 0;
        v10 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
        RtlGetNtProductType(&ProductType);
        SuiteMask = RtlGetSuiteMask();
        if ( ProductType == NtProductServer
          && (SuiteMask & 0x110) == 0x10
          && __PAIR64__(HighPart, LowPart) != *(_QWORD *)(v10 + 3084) )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  return v2;
}
