/*
 * XREFs of PoTraceSystemTimerResolutionIgnore @ 0x14058EDC8
 * Callers:
 *     PspSetProcessTimerResolutionPolicy @ 0x140790FB0 (PspSetProcessTimerResolutionPolicy.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PoTraceSystemTimerResolutionIgnore(__int64 a1)
{
  REGHANDLE v1; // rbx
  BOOLEAN result; // al
  int v4; // eax
  int v5; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  v1 = PopDiagHandle;
  result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_KERNEL_TIME_RESOLUTION_IGNORE);
  if ( result )
  {
    v6 = *(_DWORD *)(a1 + 1088);
    v4 = (*(_DWORD *)(a1 + 2172) >> 26) & 1;
    *(_QWORD *)&UserData.Size = 4LL;
    v5 = v4;
    UserData.Ptr = (ULONGLONG)&v5;
    v8 = &v6;
    v9 = 4LL;
    return EtwWriteEx(v1, &POP_ETW_EVENT_KERNEL_TIME_RESOLUTION_IGNORE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
