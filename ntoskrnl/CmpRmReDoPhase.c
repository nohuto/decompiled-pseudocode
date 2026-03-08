/*
 * XREFs of CmpRmReDoPhase @ 0x140A1C1E0
 * Callers:
 *     CmpStartRMLog @ 0x140863C7C (CmpStartRMLog.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpTransSearchAddTransFromRm @ 0x140735958 (CmpTransSearchAddTransFromRm.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140A1BD4C (CmpDoReadTxRBigLogRecord.c)
 *     CmpRealignLogBuffers @ 0x140A1BEB8 (CmpRealignLogBuffers.c)
 *     CmpVerifyLogRecord @ 0x140A1C5E0 (CmpVerifyLogRecord.c)
 *     CmpDoReDoRecord @ 0x140A27C2C (CmpDoReDoRecord.c)
 */

int __fastcall CmpRmReDoPhase(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rax
  struct _PRIVILEGE_SET *v4; // rdi
  int v5; // eax
  __int64 v6; // rsi
  PVOID ppvReadBuffer; // [rsp+58h] [rbp-9h] BYREF
  PVOID pvReadContext; // [rsp+60h] [rbp-1h] BYREF
  struct _PRIVILEGE_SET *v10; // [rsp+68h] [rbp+7h] BYREF
  __int64 v11; // [rsp+70h] [rbp+Fh] BYREF
  CLFS_LSN plsnPrevious; // [rsp+78h] [rbp+17h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+80h] [rbp+1Fh] BYREF
  CLFS_LSN plsnRecord; // [rsp+88h] [rbp+27h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+C8h] [rbp+67h] BYREF
  CLFS_LSN plsnFirst; // [rsp+D0h] [rbp+6Fh] BYREF
  ULONG pcbBuffer; // [rsp+D8h] [rbp+77h] BYREF
  ULONG v18; // [rsp+E0h] [rbp+7Fh] BYREF

  plsnFirst = a2;
  v2 = (_QWORD *)(a1 + 16);
  pvReadContext = 0LL;
  ppvReadBuffer = 0LL;
  pcbBuffer = 0;
  plsnUndoNext.ullOffset = 0LL;
  plsnPrevious.ullOffset = 0LL;
  plsnRecord.ullOffset = 0LL;
  peRecordType = 0;
  v11 = 0LL;
  if ( (_QWORD *)*v2 == v2 )
    return (int)v2;
  LODWORD(v2) = ClfsReadLogRecord(
                  *(PVOID *)(a1 + 96),
                  &plsnFirst,
                  ClfsContextForward,
                  &ppvReadBuffer,
                  &pcbBuffer,
                  &peRecordType,
                  &plsnUndoNext,
                  &plsnPrevious,
                  &pvReadContext);
  while ( (int)v2 >= 0 )
  {
    if ( (peRecordType & 1) != 0 )
    {
      LODWORD(v2) = CmpTransSearchAddTransFromRm((_QWORD *)a1, 0LL, (__int64)ppvReadBuffer + 16, 0, &v11);
      if ( (int)v2 >= 0 )
      {
        v4 = (struct _PRIVILEGE_SET *)ppvReadBuffer;
        v10 = (struct _PRIVILEGE_SET *)ppvReadBuffer;
        v18 = pcbBuffer;
        if ( pcbBuffer < 0x30 )
          break;
        if ( *((int *)ppvReadBuffer + 3) < 0 )
        {
          LODWORD(v2) = CmpDoReadTxRBigLogRecord(pvReadContext, ppvReadBuffer, pcbBuffer, &v10, &v18);
          if ( (int)v2 < 0 )
            break;
          v4 = v10;
        }
        v5 = CmpVerifyLogRecord(v4);
        v6 = v11;
        if ( v5 >= 0 )
        {
          CmpRealignLogBuffers((__int64)v4);
          if ( (int)CmpDoReDoRecord(v6, v4) < 0 )
            goto LABEL_14;
        }
        else
        {
          if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
            __debugbreak();
LABEL_14:
          *(_DWORD *)(v6 + 48) |= 2u;
        }
        if ( *((int *)ppvReadBuffer + 3) < 0 )
          CmSiFreeMemory(v4);
      }
    }
    peRecordType = 1;
    LODWORD(v2) = ClfsReadNextLogRecord(
                    pvReadContext,
                    &ppvReadBuffer,
                    &pcbBuffer,
                    &peRecordType,
                    0LL,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &plsnRecord);
    if ( (_DWORD)v2 == -1073741807 )
      break;
  }
  if ( pvReadContext )
    LODWORD(v2) = ClfsTerminateReadLog(pvReadContext);
  return (int)v2;
}
