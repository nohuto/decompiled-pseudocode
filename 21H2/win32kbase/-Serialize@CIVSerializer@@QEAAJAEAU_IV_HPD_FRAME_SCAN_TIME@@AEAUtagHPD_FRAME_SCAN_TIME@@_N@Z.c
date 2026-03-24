/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@AEAUtagHPD_FRAME_SCAN_TIME@@_N@Z @ 0x1C01B6DF8
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C01B65D8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HPD_FRAME_SCAN_TIME *a2,
        struct tagHPD_FRAME_SCAN_TIME *a3)
{
  struct _IV_HPD_FRAME_SCAN_TIME *v4; // rdi

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      62,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  *(_DWORD *)v4 = *(_DWORD *)a3;
  *((_DWORD *)v4 + 1) = *((_DWORD *)a3 + 1);
  *((_DWORD *)v4 + 2) = *((_DWORD *)a3 + 2);
  *((_DWORD *)v4 + 3) = *((_DWORD *)a3 + 3);
  *((_DWORD *)v4 + 4) = *((_DWORD *)a3 + 4);
  *((_DWORD *)v4 + 5) = *((_DWORD *)a3 + 5);
  *((_DWORD *)v4 + 6) = *((_DWORD *)a3 + 6);
  *((_DWORD *)v4 + 7) = *((_DWORD *)a3 + 7);
  *((_QWORD *)v4 + 4) = *((_QWORD *)a3 + 4);
  *((_QWORD *)v4 + 5) = *((_QWORD *)a3 + 5);
  *((_DWORD *)v4 + 12) = *((_DWORD *)a3 + 12) & 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      63,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  return 0LL;
}
