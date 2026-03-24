/*
 * XREFs of ?_ivHeaderCallback@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C01B7680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BA2A0 (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CBaseInput::_ivHeaderCallback(struct _IVSRContext *a1)
{
  unsigned int *v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+40h] [rbp-38h]
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      27,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  v2 = (unsigned int *)*((_QWORD *)a1 + 13);
  v3 = *((_QWORD *)a1 + 17);
  v4 = v2[2];
  v5 = *((_QWORD *)a1 + 16);
  v6 = *v2;
  HIDWORD(v10) = HIDWORD(*((_QWORD *)a1 + 20));
  LODWORD(v10) = v4;
  v9 = *((_DWORD *)a1 + 44);
  v11 = *((_OWORD *)a1 + 9);
  v12 = v10;
  v7 = ivrIVRecv(v6, v5, v3, &v11, v9, CBaseInput::_ivPacketDispatch);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      28,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  return v7;
}
