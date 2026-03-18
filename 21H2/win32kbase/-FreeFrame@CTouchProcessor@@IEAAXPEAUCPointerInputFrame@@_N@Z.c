/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01C5D18
 * Callers:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01DF13C (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     HMAssignmentUnlock @ 0x1C0038BD0 (HMAssignmentUnlock.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C004C7A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C01C62EC (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01C6358 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01C63B8 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D3BE4 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeFrame(struct _KTHREAD **this, char *P, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID *v13; // rax
  PVOID *v14; // rcx
  PVOID **v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct CPointerInfoNode *v19; // rdx
  struct CPointerQFrame *v20; // rdx
  PERESOURCE *v21[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+8h] BYREF
  int v23; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+20h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v21,
    (struct CInpLockGuard *)(this + 4),
    0LL);
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)CTouchProcessor::IsFrameReferenced(v7, (__int64)P, v8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  if ( (unsigned int)dword_1C028EE70 > 5 && tlgKeywordOn((__int64)&dword_1C028EE70, 32LL) )
  {
    v23 = *((_DWORD *)P + 10);
    v22 = *((_QWORD *)P + 9);
    v24 = *((_QWORD *)P + 27);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1C028EE70,
      (int)&unk_1C026071D,
      v11,
      v12,
      (__int64)&v24,
      (__int64)&v22,
      (__int64)&v23);
  }
  if ( !a3 )
  {
    if ( *((_DWORD *)P + 13) != *((_DWORD *)P + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    v13 = (PVOID *)(P + 8);
    v14 = (PVOID *)*((_QWORD *)P + 1);
    if ( v14[1] != P + 8 || (v15 = (PVOID **)*((_QWORD *)P + 2), *v15 != v13) )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = v15;
    *((_QWORD *)P + 2) = P + 8;
    *v13 = v13;
    CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(
      (CTouchProcessor *)v14,
      (const struct CPointerInputFrame *)P);
  }
  v16 = *((_DWORD *)P + 57);
  if ( (v16 & 0x80u) == 0 )
  {
    if ( (v16 & 0x40) != 0 )
    {
      v17 = *((_DWORD *)this + 36);
      if ( !v17 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
        v17 = *((_DWORD *)this + 36);
      }
      *((_DWORD *)this + 36) = v17 - 1;
    }
    else
    {
      v18 = *((_DWORD *)this + 37);
      if ( !v18 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
        v18 = *((_DWORD *)this + 37);
      }
      *((_DWORD *)this + 37) = v18 - 1;
    }
  }
  v19 = (struct CPointerInfoNode *)*((_QWORD *)P + 30);
  if ( v19 )
    CTouchProcessor::FreePointerInfoList(v10, v19, *((_DWORD *)P + 12));
  v20 = (struct CPointerQFrame *)*((_QWORD *)P + 31);
  if ( v20 )
    CTouchProcessor::FreePointerQFrameList(v10, v20, *((_DWORD *)P + 12));
  HMAssignmentUnlock((__int64 *)P + 32);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)P + 29));
  Win32FreePool(P);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v21);
}
