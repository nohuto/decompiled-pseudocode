/*
 * XREFs of PopDiagTraceDirectedDripsInitialization @ 0x1407CBE24
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140A6DC48 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsInitialization(int a1)
{
  int v1; // r9d
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-9h] BYREF
  int v4; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-1h] BYREF
  int *v6; // [rsp+48h] [rbp+Fh]
  int v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+54h] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp+1Fh] BYREF
  int *v10; // [rsp+78h] [rbp+3Fh]
  int v11; // [rsp+80h] [rbp+47h]
  int v12; // [rsp+84h] [rbp+4Bh]
  int v13; // [rsp+A0h] [rbp+67h] BYREF

  v13 = a1;
  if ( PopTriggerDiagHandleRegistered
    && (unsigned int)dword_140C02228 > 5
    && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
  {
    v12 = 0;
    v10 = &v3;
    v3 = v1;
    v11 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02228, (unsigned __int8 *)&byte_140027337, 0LL, 0LL, 3u, &v9);
  }
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_INITIALIZATION) )
    {
      v4 = 0;
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 4;
      v6 = &v13;
      v7 = 4;
      EtwWrite(v2, &POP_ETW_EVENT_DIRECTED_DRIPS_ENGAGED, 0LL, 2u, &UserData);
    }
  }
}
