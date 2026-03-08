/*
 * XREFs of PopDiagTraceProcessorThrottlePerfTrack @ 0x140591F00
 * Callers:
 *     PpmRegisterPerfCap @ 0x14058AF70 (PpmRegisterPerfCap.c)
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceProcessorThrottlePerfTrack(int a1, ULONG a2)
{
  NTSTATUS v3; // eax
  ULONG UserDataCount; // [rsp+30h] [rbp-49h]
  __int16 v6; // [rsp+40h] [rbp-39h] BYREF
  int v7; // [rsp+44h] [rbp-35h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  int *v10; // [rsp+60h] [rbp-19h]
  int v11; // [rsp+68h] [rbp-11h]
  int v12; // [rsp+6Ch] [rbp-Dh]
  __int16 *v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  wchar_t *v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  wchar_t pszDest[24]; // [rsp+90h] [rbp+17h] BYREF
  int v20; // [rsp+E0h] [rbp+67h] BYREF

  v20 = a1;
  pcchRemaining = 0LL;
  LOBYTE(v3) = aProcessor99999[20];
  wcscpy(pszDest, L"Processor 9999999999");
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK);
    if ( (_BYTE)v3 )
    {
      UserDataCount = a2;
      v3 = RtlStringCchPrintfExW(pszDest, 0x15uLL, 0LL, &pcchRemaining, 0, L"Processor %u", UserDataCount);
      if ( v3 >= 0 )
      {
        v7 = 0;
        UserData.Reserved = 0;
        v12 = 0;
        v15 = 0;
        v18 = 0;
        UserData.Ptr = (ULONGLONG)&v20;
        v10 = &v7;
        v6 = 21 - pcchRemaining;
        v13 = &v6;
        v17 = 2 * (unsigned __int16)(21 - pcchRemaining);
        UserData.Size = 4;
        v11 = 4;
        v16 = pszDest;
        v14 = 2;
        LOBYTE(v3) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return v3;
}
