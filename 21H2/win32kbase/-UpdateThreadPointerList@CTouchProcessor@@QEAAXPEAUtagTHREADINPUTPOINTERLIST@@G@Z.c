/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0088C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C01CE150 (-IsLastMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?IsSamePointerFrame@CTouchProcessor@@AEAAH_K0@Z @ 0x1C01CE72C (-IsSamePointerFrame@CTouchProcessor@@AEAAH_K0@Z.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C02078CC (ApiSetEditionFindThreadPointerData.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C020BFD4 (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        struct _KTHREAD **this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  unsigned __int16 v3; // bp
  struct tagTHREADINPUTPOINTERLIST *v4; // rdi
  struct _KTHREAD **v5; // r15
  char v6; // bl
  unsigned __int64 v7; // rdx
  struct _KTHREAD **v8; // rcx
  __int64 v9; // r8
  int v10; // r14d
  struct tagTHREADINPUTPOINTERLIST *v11; // rsi
  PDEVICE_OBJECT v12; // rcx
  __int16 v13; // ax
  const int *v14; // r8
  unsigned __int64 v15; // r12
  __int64 ThreadPointerData; // rsi
  struct tagTHREADINPUTPOINTERLIST *v17; // rbp
  int v18; // r13d
  __int64 v19; // r15
  __int16 v20; // [rsp+30h] [rbp-68h]
  _BYTE v21[48]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      109,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v21, (struct CInpLockGuard *)(v5 + 4), 0LL);
  v10 = 0;
  if ( v3 == 1 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)v7 || v6 )
    {
      v13 = 110;
LABEL_34:
      v14 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
      v20 = v13;
LABEL_64:
      LOBYTE(v14) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        v12->AttachedDevice,
        v7,
        (_WORD)v14,
        v12->DeviceExtension,
        5,
        7,
        v20,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  else
  {
    v11 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 == v4 )
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v6 = 0;
      if ( !(_BYTE)v7 && !v6 )
        goto LABEL_19;
      v13 = 111;
      goto LABEL_34;
    }
    v15 = 0LL;
    if ( v3 )
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData(v4, v3);
      if ( !ThreadPointerData )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      v15 = *(_QWORD *)(ThreadPointerData + 24);
      v11 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
    }
    for ( ; v11 != v4; v5 = this )
    {
      v8 = (struct _KTHREAD **)*((unsigned int *)v11 + 12);
      v17 = v11;
      v11 = *(struct tagTHREADINPUTPOINTERLIST **)v11;
      v18 = v10++;
      v7 = *((_QWORD *)v17 + 3);
      if ( v15 == v7 )
      {
        v8 = (struct _KTHREAD **)((unsigned int)v8 | 2);
        *((_DWORD *)v17 + 12) = (_DWORD)v8;
      }
      else if ( ((unsigned __int8)v8 & 2) != 0 && !CTouchProcessor::IsSamePointerFrame((CTouchProcessor *)v8, v7, v15) )
      {
        if ( (unsigned int)CTouchProcessor::IsLastMsgData((CTouchProcessor *)v5, *((_QWORD *)v17 + 3)) )
          goto LABEL_50;
        v8 = this;
        v19 = *((_QWORD *)v17 + 3);
        if ( this[5] != KeGetCurrentThread() )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v7, v9);
        if ( (*(_DWORD *)(v19 + 36) & 0x20) != 0 )
        {
LABEL_50:
          ApiSetEditionUnlinkAndFreeThreadPointerData(v4, v17);
          v10 = v18;
        }
      }
    }
    if ( v10 != *((_DWORD *)v4 + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)v7 || v6 )
    {
      v14 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
      v20 = 112;
      goto LABEL_64;
    }
  }
LABEL_19:
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v21);
}
