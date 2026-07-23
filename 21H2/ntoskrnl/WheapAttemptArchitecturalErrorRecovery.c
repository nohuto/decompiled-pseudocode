/*
 * XREFs of WheapAttemptArchitecturalErrorRecovery @ 0x1405BBA08
 * Callers:
 *     WheapAttemptErrorRecovery @ 0x1405BBAA8 (WheapAttemptErrorRecovery.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1403BB100 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1405BB278 (WheaGetErrPacketFromErrRecord.c)
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 */

__int64 __fastcall WheapAttemptArchitecturalErrorRecovery(__int64 a1)
{
  unsigned int v2; // edi
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 ErrorSource; // rax
  __int64 v5; // r10
  __int64 v6; // rbx
  __int64 (__fastcall *ErrorSourceFunction)(__int64, int *); // rax
  __int64 v8; // r11
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v2 = -1073741811;
  ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord((PWHEA_ERROR_RECORD)a1);
  if ( ErrPacketFromErrRecord )
  {
    if ( ErrPacketFromErrRecord->ErrorSourceType <= (unsigned int)WheaErrSrcTypeDeviceDriver )
    {
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, ErrPacketFromErrRecord->ErrorSourceId);
      v6 = ErrorSource;
      if ( ErrorSource )
      {
        if ( *(_QWORD *)(v5 + 48) )
        {
          ErrorSourceFunction = (__int64 (__fastcall *)(__int64, int *))WheapGetErrorSourceFunction(ErrorSource, 3, 0);
          if ( ErrorSourceFunction )
            v2 = ErrorSourceFunction(v8, &v10);
          else
            v2 = -1073741822;
          _InterlockedDecrement((volatile signed __int32 *)(v6 + 92));
          *(_DWORD *)(a1 + 12) = v10;
        }
      }
    }
  }
  return v2;
}
