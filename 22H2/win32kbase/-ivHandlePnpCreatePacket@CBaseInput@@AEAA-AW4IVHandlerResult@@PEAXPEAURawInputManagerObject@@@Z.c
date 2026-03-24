/*
 * XREFs of ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8AE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C954 (RIMVirtDeviceClassNotify.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3C8C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C01B4D90 (-IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpCreatePacket(__int64 a1, struct _IVPnpCreatePacket *a2, char *a3)
{
  struct _IVPnpCreatePacket *v4; // rdi
  unsigned int v5; // ebx
  int PacketForRimDev; // eax
  int v7; // edx
  int v8; // r9d
  int v10; // [rsp+28h] [rbp-50h]
  _BYTE v11[16]; // [rsp+30h] [rbp-48h] BYREF
  struct _IVPnpCreatePacket *v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+58h] [rbp-20h]
  char v16; // [rsp+60h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      12,
      34,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  v13 = 0LL;
  v14 = 0LL;
  v5 = 1;
  v15 = 0LL;
  v16 = 1;
  v12 = v4;
  PacketForRimDev = IVDeSerializeIVPnpCreatePacketForRimDev(v4, (struct CIVSerializer *)v11);
  if ( PacketForRimDev < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 37;
      goto LABEL_11;
    }
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      12,
      35,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  PacketForRimDev = RIMVirtDeviceClassNotify(a3, ((unsigned __int64)v4 + 8) & -(__int64)(v4 != 0LL));
  if ( PacketForRimDev < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 36;
LABEL_11:
      v10 = PacketForRimDev;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        12,
        v8,
        (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids,
        v10);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
LABEL_13:
  CIVSerializer::~CIVSerializer((CIVSerializer *)v11);
  return v5;
}
