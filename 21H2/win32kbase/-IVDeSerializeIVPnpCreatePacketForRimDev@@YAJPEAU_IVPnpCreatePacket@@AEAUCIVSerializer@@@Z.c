/*
 * XREFs of ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C01B4E60
 * Callers:
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8BB0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z @ 0x1C01B44A8 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01B49D0 (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall IVDeSerializeIVPnpCreatePacketForRimDev(struct _IVPnpCreatePacket *a1, struct CIVSerializer *a2)
{
  struct CIVSerializer *v2; // rsi
  int v4; // edx
  CIVSerializer *v5; // rcx
  int v6; // edi

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      106,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  *((_QWORD *)a1 + 2) = *((_QWORD *)v2 + 2) + (*((_QWORD *)a1 + 2) & 0xFFFFFFFFFFFFFFFEuLL);
  v6 = CIVSerializer::Deserialize(v2, (unsigned __int16 **)a1 + 8);
  if ( v6 >= 0 )
  {
    if ( *((_DWORD *)a1 + 6) != 2
      || (v6 = CIVSerializer::Deserialize(v5, (struct _IVPnpCreatePacket *)((char *)a1 + 80), *((_DWORD *)a1 + 14) != 0),
          v6 >= 0) )
    {
      v6 = 0;
      *((_QWORD *)a1 + 163) = *((_QWORD *)v2 + 2) + (*((_QWORD *)a1 + 163) & 0xFFFFFFFFFFFFFFFEuLL);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      107,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  return (unsigned int)v6;
}
