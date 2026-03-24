/*
 * XREFs of ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01AE624 (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3D5C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01B3F2C (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01B4038 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     ?IVDeSerializeMouseInputBuffer@@YAJPEAU_IVMouseInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B5044 (-IVDeSerializeMouseInputBuffer@@YAJPEAU_IVMouseInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C01BA520 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01BA774 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleMouseInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // edi
  int v8; // r15d
  void *v9; // r14
  __int64 RimDevByName; // rax
  int v11; // edx
  void **v12; // rax
  _BYTE v14[16]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h]
  char v19; // [rsp+60h] [rbp-38h]
  __int64 v20; // [rsp+A8h] [rbp+10h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 12, 43, (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  v16 = 0LL;
  v17 = 0LL;
  v5 = 1;
  v18 = 0LL;
  v19 = 1;
  v15 = v4;
  if ( (int)IVDeSerializeMouseInputBuffer((struct _IVMouseInputPacket *)v4, (struct CIVSerializer *)v14) < 0 )
    goto LABEL_20;
  v6 = *(_DWORD *)(v4 + 16);
  if ( (v6 & 1) != 0 )
  {
    v20 = *(_QWORD *)(v4 + 36);
    ChildSynchronizeCursorAsyncWithRootPartition(&v20);
    v6 = *(_DWORD *)(v4 + 16);
  }
  v7 = 2;
  v8 = v6 & 2;
  v9 = 0LL;
  if ( (v6 & 4) == 0 )
  {
LABEL_18:
    if ( v8 )
      DeliverSynthesizedMouseInput((const struct _IVMouseInputPacket *)v4, v9);
LABEL_20:
    v7 = v5;
    goto LABEL_21;
  }
  RIMLockExclusive(a3 + 104);
  if ( !(unsigned __int8)IsRimObjectUnregistered(a3) )
  {
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)v4);
    if ( RimDevByName )
    {
      if ( v8 )
      {
        v12 = (void **)(*(_QWORD *)(RimDevByName + 32) + 88LL);
        if ( v12 )
          v9 = *v12;
      }
      else
      {
        DeliverMouseInputToRIM(
          (const struct _IVMouseInputPacket *)v4,
          (struct RawInputManagerObject *)a3,
          (struct RIMDEV *)RimDevByName);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v11, 12, 44, (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
      }
      v5 = 0;
    }
    *(_QWORD *)(a3 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_18;
  }
  *(_QWORD *)(a3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
  KeLeaveCriticalRegion();
LABEL_21:
  CIVSerializer::~CIVSerializer((CIVSerializer *)v14);
  return v7;
}
