/*
 * XREFs of ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C006CDD0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall DxgkEngCheckRemoteSessionRemoteAdapterAccess(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4)
{
  DWORD LowPart; // ebx
  unsigned int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 SuiteMask; // ax
  LONG HighPart; // [rsp+34h] [rbp+Ch]
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v5 = 0;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( Object )
    {
      if ( (PVOID)PsGetCurrentProcess(65533LL, a2, a3, a4) != gpepCSRSS && !UserIsCurrentProcessDwm(v8, v7, v9, v10) )
      {
        ProductType = 0;
        RtlGetNtProductType(&ProductType);
        SuiteMask = RtlGetSuiteMask();
        if ( ProductType == NtProductServer
          && (SuiteMask & 0x110) == 0x10
          && __PAIR64__(HighPart, LowPart) != qword_1C0297084 )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  return v5;
}
