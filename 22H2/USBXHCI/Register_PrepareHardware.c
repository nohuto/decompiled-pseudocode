/*
 * XREFs of Register_PrepareHardware @ 0x1C006CD24
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006D0A0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0009764 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     Register_BiosHandoff @ 0x1C0013F74 (Register_BiosHandoff.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014518 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     Register_MapSecureMmio @ 0x1C003C9D4 (Register_MapSecureMmio.c)
 *     Register_ParseCapabilityRegister @ 0x1C006FA80 (Register_ParseCapabilityRegister.c)
 */

__int64 __fastcall Register_PrepareHardware(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  char *v5; // rdx
  int v6; // edx
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rcx
  char v18; // [rsp+30h] [rbp-68h]
  __int128 v19; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 2432))(WdfDriverGlobals) )
  {
LABEL_11:
    if ( !*(_QWORD *)(a1 + 24) )
    {
      v11 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          (_DWORD)v5,
          6,
          16,
          (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids);
      }
      goto LABEL_33;
    }
    if ( Controller_IsSecureDevice(*(_QWORD *)(a1 + 8)) )
    {
      v11 = Register_MapSecureMmio(a1);
      if ( v11 < 0 )
        goto LABEL_33;
    }
    v12 = Register_ParseCapabilityRegister(a1);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v12 = Register_BiosHandoff((_QWORD *)a1);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v12 = Register_ControllerReset(a1, 0);
        v11 = v12;
        if ( v12 >= 0 )
        {
          if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u64[0] & 0x80000) != 0
            || (XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL)) & 1) == 0 )
          {
            v14 = *(_QWORD *)(a1 + 8);
            v5 = (char *)&v19 - v14;
            v19 = 1uLL;
            v15 = 2LL;
            v16 = (_QWORD *)(v14 + 336);
            do
            {
              *v16 |= *(_QWORD *)((char *)v16 + (_QWORD)v5 - 336);
              ++v16;
              --v15;
            }
            while ( v15 );
          }
          goto LABEL_33;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v13 = 19;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v13 = 18;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      v13 = 17;
    }
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v5,
      6,
      v13,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
      v12);
    goto LABEL_33;
  }
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
           WdfDriverGlobals,
           a2,
           v4);
    if ( *(_BYTE *)v7 != 3 )
      goto LABEL_10;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v6,
        6,
        12,
        (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
        v4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v8,
          6,
          13,
          (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
          *(_DWORD *)(v7 + 8),
          *(_DWORD *)(v7 + 4),
          *(_DWORD *)(v7 + 12));
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
      goto LABEL_10;
    v9 = MmMapIoSpaceEx(*(_QWORD *)(v7 + 4), *(unsigned int *)(v7 + 12), 516LL);
    *(_QWORD *)(a1 + 24) = v9;
    if ( !v9 )
      break;
    v10 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(a1 + 20) = v10;
    *(_BYTE *)(a1 + 16) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = v10;
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v10,
        6,
        15,
        (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
        v9,
        v18);
    }
LABEL_10:
    if ( ++v4 >= (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2432))(
                   WdfDriverGlobals,
                   a2) )
      goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v5,
      6,
      14,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids);
  }
  v11 = -1073741670;
LABEL_33:
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)v5,
        6,
        20,
        (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v11;
}
