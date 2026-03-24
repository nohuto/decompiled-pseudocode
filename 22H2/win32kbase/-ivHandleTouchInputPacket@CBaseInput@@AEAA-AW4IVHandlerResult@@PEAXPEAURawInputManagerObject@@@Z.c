/*
 * XREFs of ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B93B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0054D5C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0055218 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C00A819C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     WPP_RECORDER_SF_s @ 0x1C01525FC (WPP_RECORDER_SF_s.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C017250C (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimProcessCompleteFrame @ 0x1C0174F58 (rimProcessCompleteFrame.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3C8C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B4E94 (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01BA450 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01BA6A4 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleTouchInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 RimDevByName; // rax
  __int64 v7; // r15
  LARGE_INTEGER *v8; // r13
  __int64 v9; // rbx
  CBaseInput *v10; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  char v17; // [rsp+60h] [rbp-10h]
  LARGE_INTEGER *v18; // [rsp+A8h] [rbp+38h] BYREF
  char v19; // [rsp+B8h] [rbp+48h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      12,
      41,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids,
      (__int64)"IV_PACKET_TYPE_TOUCH_INPUT");
  v14 = 0LL;
  v15 = 0LL;
  v5 = 1;
  v16 = 0LL;
  v17 = 1;
  v13 = a2;
  if ( (int)IVDeSerializeIVTouchInputPacket((struct _IVTouchInputPacket *)a2, (struct CIVSerializer *)v12) >= 0 )
  {
    if ( *(_DWORD *)(a2 + 120) )
    {
      v18 = 0LL;
      rimGetCompleteFrameFromIVCompleteFrame(a2, 0LL, &v18);
      v9 = (__int64)v18;
      if ( v18 )
      {
        v10 = gpHidInput;
        *((_QWORD *)gpHidInput + 169) = v18;
        CRIMBase::SensorDoWorkAndWait((__int64)v10, 0xFu);
        Win32FreePool(v9);
      }
    }
    else
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v19, 1, 0);
      RIMLockExclusive(a3 + 104);
      if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
      {
        *(_QWORD *)(a3 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
        KeLeaveCriticalRegion();
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v19);
        v5 = 2;
      }
      else
      {
        RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
        *(_QWORD *)(a3 + 112) = 0LL;
        v7 = RimDevByName;
        ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
        KeLeaveCriticalRegion();
        if ( v7 )
        {
          v18 = 0LL;
          rimGetCompleteFrameFromIVCompleteFrame(a2, v7, &v18);
          v8 = v18;
          if ( v18 )
          {
            RIMLockExclusive(a3 + 104);
            RIMLockExclusive(a3 + 568);
            v8[4] = *(LARGE_INTEGER *)(v7 + 16);
            rimProcessCompleteFrame((HANDLE *)a3, (struct RIMDEV *)v7, v8);
            *(_QWORD *)(a3 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(a3 + 568, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(a3 + 112) = 0LL;
            ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              12,
              42,
              (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
          v5 = 0;
        }
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v19);
      }
    }
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v12);
  return v5;
}
