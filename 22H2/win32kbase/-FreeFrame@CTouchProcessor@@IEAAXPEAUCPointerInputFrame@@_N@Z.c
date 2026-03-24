/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018EB88
 * Callers:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD33C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C01A5648 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A6D70 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0031AA0 (HMAssignmentUnlock.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC60 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD0C0 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C018625C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C018F460 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C018F618 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C018F66C (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019B364 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeFrame(struct _KTHREAD **this, struct CPointerInputFrame *a2, char a3)
{
  __int64 v6; // rcx
  CTouchProcessor *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  struct CPointerInputFrame **v11; // rcx
  struct CPointerInputFrame *v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct CPointerInfoNode *v16; // rdx
  struct CPointerQFrame *v17; // rdx
  CInpLockGuard *v18[13]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+8h] BYREF
  int v20; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+20h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v18,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  if ( this[6] != KeGetCurrentThread() )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7601);
  }
  if ( (unsigned int)CTouchProcessor::IsFrameReferenced(v6, (__int64)a2) )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7608);
  }
  if ( (unsigned int)dword_1C024AA90 > 5 && tlgKeywordOn((__int64)&dword_1C024AA90, 32LL) )
  {
    v20 = *((_DWORD *)a2 + 10);
    v19 = *((_QWORD *)a2 + 9);
    v21 = *((_QWORD *)a2 + 14);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024AA90,
      byte_1C021D3FE,
      v8,
      v9,
      (__int64)&v21,
      (__int64)&v19,
      (__int64)&v20);
  }
  if ( !a3 )
  {
    if ( *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 12) )
    {
      v20 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7613);
    }
    v10 = (_QWORD *)((char *)a2 + 8);
    v11 = (struct CPointerInputFrame **)*((_QWORD *)a2 + 1);
    if ( v11[1] != (struct CPointerInputFrame *)((char *)a2 + 8)
      || (v12 = (struct CPointerInputFrame *)*((_QWORD *)a2 + 2), *(_QWORD **)v12 != v10) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v12 = v11;
    v11[1] = v12;
    *((_QWORD *)a2 + 2) = (char *)a2 + 8;
    *v10 = v10;
    CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList((CTouchProcessor *)v11, a2);
  }
  v13 = *((_DWORD *)a2 + 31);
  if ( (v13 & 0x80u) == 0 )
  {
    if ( (v13 & 0x40) != 0 )
    {
      v14 = *((_DWORD *)this + 38);
      if ( !v14 )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7634);
        v14 = *((_DWORD *)this + 38);
      }
      *((_DWORD *)this + 38) = v14 - 1;
    }
    else
    {
      v15 = *((_DWORD *)this + 39);
      if ( !v15 )
      {
        v20 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 7639);
        v15 = *((_DWORD *)this + 39);
      }
      *((_DWORD *)this + 39) = v15 - 1;
    }
  }
  v16 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
  if ( v16 )
    CTouchProcessor::FreePointerInfoList(v7, v16, *((_DWORD *)a2 + 12));
  v17 = (struct CPointerQFrame *)*((_QWORD *)a2 + 18);
  if ( v17 )
    CTouchProcessor::FreePointerQFrameList(v7, v17, *((_DWORD *)a2 + 12));
  HMAssignmentUnlock((__int64 *)a2 + 19);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)a2 + 16));
  Win32FreePool((__int64)a2);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v18);
}
