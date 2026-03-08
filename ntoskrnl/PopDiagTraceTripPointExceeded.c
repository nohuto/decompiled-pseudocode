/*
 * XREFs of PopDiagTraceTripPointExceeded @ 0x14098EEE4
 * Callers:
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x14098F160 (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14098F1D8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x14098F2CC (PopDiagTraceZoneS4TripPointExceeded.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceTripPointExceeded(unsigned __int16 a1, __int64 a2, int a3, const EVENT_DESCRIPTOR *a4)
{
  _UNKNOWN **v4; // rax
  int v7; // edi
  __int64 v9; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v11; // [rsp+58h] [rbp+7h]
  int v12; // [rsp+60h] [rbp+Fh]
  int v13; // [rsp+64h] [rbp+13h]
  __int64 *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  int *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  unsigned __int16 v21; // [rsp+B8h] [rbp+67h] BYREF
  int v22; // [rsp+C8h] [rbp+77h] BYREF

  v4 = &retaddr;
  v22 = a3;
  v21 = a1;
  v7 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, a4);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      UserData.Size = 2;
      v11 = a2;
      v12 = 2 * v7;
      v16 = 0;
      v19 = 0;
      v9 = MEMORY[0xFFFFF78000000014];
      v14 = &v9;
      v17 = &v22;
      v15 = 8;
      v18 = 4;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, a4, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
