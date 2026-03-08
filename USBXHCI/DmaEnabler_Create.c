/*
 * XREFs of DmaEnabler_Create @ 0x1C0073140
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 */

__int64 __fastcall DmaEnabler_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rcx
  int v7; // ebx
  int v8; // edx
  int v9; // esi
  unsigned __int64 v10; // rax
  unsigned int v11; // r15d
  int v12; // edx
  __int64 v13; // rbx
  __int128 v15; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16; // [rsp+40h] [rbp-49h]
  __int64 v17; // [rsp+48h] [rbp-41h]
  __int128 v18; // [rsp+50h] [rbp-39h]
  void *v19; // [rsp+60h] [rbp-29h]
  _QWORD v20[10]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+6Fh] BYREF

  v21 = 0LL;
  v4 = *(_QWORD *)(a2 + 88);
  v16 = 0LL;
  v19 = off_1C0063018;
  v15 = 0LL;
  LODWORD(v15) = 56;
  v18 = 0LL;
  v17 = 0x100000001LL;
  if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v4 + 8) + 336LL), 8).m128i_u64[0] & 0x80000) != 0 )
    v7 = 0;
  else
    v7 = XilRegister_ReadUlong(v4, (unsigned int *)(*(_QWORD *)(v4 + 24) + 16LL)) & 1;
  memset(v20, 0, sizeof(v20));
  LODWORD(v20[0]) = 80;
  HIDWORD(v20[0]) = v7 + 5;
  LODWORD(v20[9]) = 1;
  HIDWORD(v20[8]) = 3;
  v20[1] = 16776704LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01023
                                                                                                + 752))(
         WdfDriverGlobals,
         a1,
         v20,
         &v15,
         &v21);
  if ( v9 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 3072))(
            WdfDriverGlobals,
            v21,
            0LL);
    v11 = v10;
    if ( v10 > 0xFFFE00 )
      v11 = 16776704;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v21,
            off_1C0063018);
    *(_QWORD *)v13 = v21;
    *(_QWORD *)(v13 + 8) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a2 + 72),
        v12,
        18,
        11,
        (__int64)&WPP_04b707390cf73fa06bfe0db05fea1528_Traceguids,
        v21);
    }
    *(_QWORD *)(v13 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 3080))(
                              WdfDriverGlobals,
                              v21,
                              0LL);
    *(_DWORD *)(v13 + 16) = v11;
    *(_DWORD *)(v13 + 20) = (v11 >> 12) + ((v11 & 0xFFF) != 0) + 1;
    *a3 = v13;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v8, 18, 10, (__int64)&WPP_04b707390cf73fa06bfe0db05fea1528_Traceguids, v9);
  }
  return (unsigned int)v9;
}
