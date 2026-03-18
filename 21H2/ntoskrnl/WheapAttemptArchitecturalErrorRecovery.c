/*
 * XREFs of WheapAttemptArchitecturalErrorRecovery @ 0x140643CB4
 * Callers:
 *     WheapAttemptErrorRecovery @ 0x140643D54 (WheapAttemptErrorRecovery.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1403C0934 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14051CD90 (WheaGetErrPacketFromErrRecord.c)
 *     WheapGetErrorSource @ 0x140643F2C (WheapGetErrorSource.c)
 */

__int64 __fastcall WheapAttemptArchitecturalErrorRecovery(__int64 a1)
{
  unsigned int v2; // edi
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 ErrorSource; // rax
  __int64 v5; // r11
  __int64 v6; // rbx
  __int64 (__fastcall *ErrorSourceFunction)(__int64, int *); // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = *(_DWORD *)(a1 + 12);
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
            v2 = ErrorSourceFunction(a1, &v9);
          else
            v2 = -1073741822;
          _InterlockedDecrement((volatile signed __int32 *)(v6 + 92));
          *(_DWORD *)(a1 + 12) = v9;
        }
      }
    }
  }
  return v2;
}
