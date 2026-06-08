/*
 * XREFs of RegisterHvLegacyPcc @ 0x1C00316F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     GetPerfDomain @ 0x1C0026628 (GetPerfDomain.c)
 *     DecodeDoorbellAddressIo @ 0x1C00324C8 (DecodeDoorbellAddressIo.c)
 */

__int64 __fastcall RegisterHvLegacyPcc(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // rsi
  char v4; // r12
  __int64 v5; // r14
  unsigned int PerfDomain; // r13d
  int v7; // edi
  __int64 v8; // rax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-A1h]
  __int64 v14; // [rsp+38h] [rbp-99h] BYREF
  __int64 v15; // [rsp+40h] [rbp-91h] BYREF
  __int64 v16; // [rsp+48h] [rbp-89h] BYREF
  __int64 v17; // [rsp+50h] [rbp-81h] BYREF
  __int64 v18; // [rsp+58h] [rbp-79h] BYREF
  int v19; // [rsp+60h] [rbp-71h]
  __int128 v20; // [rsp+68h] [rbp-69h] BYREF
  __int128 v21; // [rsp+78h] [rbp-59h]
  _OWORD v22[2]; // [rsp+88h] [rbp-49h] BYREF
  _QWORD v23[10]; // [rsp+A8h] [rbp-29h] BYREF

  v15 = 0LL;
  v1 = 0LL;
  v3 = 0LL;
  v17 = 0LL;
  LODWORD(v14) = 0;
  v4 = 0;
  LODWORD(v16) = 0;
  memset(v22, 0, sizeof(v22));
  v5 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  memset(v23, 0, 0x48uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001C3E8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v22, &v14);
  if ( (_DWORD)v14 == 253 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( (_DWORD)v14 == 254 )
      v7 = 2;
  }
  v8 = 0LL;
  v9 = -1073741823;
  v18 = qword_1C001C880;
  v19 = dword_1C001C888;
  v14 = 0LL;
  if ( (unsigned __int8)qword_1C001C880 <= 1u )
  {
    v3 = qword_1C001C878;
    v5 = qword_1C001C870;
    if ( (_BYTE)qword_1C001C880 == 1 )
    {
      v10 = DecodeDoorbellAddressIo(&v18, &v14, &v17, &v16);
      v1 = v17;
      v9 = v10;
      v8 = v14;
      v4 = v16;
    }
    else if ( !(_BYTE)qword_1C001C880 )
    {
      v9 = -1073741823;
    }
  }
  if ( v9 >= 0 )
  {
    HIDWORD(v23[0]) = dword_1C001C830;
    v23[2] = qword_1C001C860;
    LODWORD(v23[3]) = dword_1C001C868;
    v23[6] = v5 << v4;
    v23[5] = v3 << v4;
    v23[1] = __PAIR64__(v7, PerfDomain);
    v23[4] = v8;
    v23[7] = v1;
    LODWORD(v20) = 62;
    ResetEnumerationContext((__int64 *)v22);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v22, &v15) )
    {
      v23[8] = **(_QWORD **)(v15 + 568);
      DWORD1(v20) = *(_DWORD *)(v15 + 48);
      *((_QWORD *)&v21 + 1) = v23;
      if ( qword_1C001C660 )
        v11 = qword_1C001C660(&v20);
      else
        v11 = -1073741822;
      if ( v11 < 0 )
      {
        v9 = v11;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v13) = v11;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x10u,
            (__int64)&WPP_1179e57565003c44c8b3022adf67a914_Traceguids,
            v13);
        }
      }
    }
    ++dword_1C001C830;
    if ( v9 < 0 )
    {
      LODWORD(v23[0]) = 1;
      *((_QWORD *)&v21 + 1) = v23;
      ResetEnumerationContext((__int64 *)v22);
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v22, &v15) )
      {
        DWORD1(v20) = *(_DWORD *)(v15 + 48);
        if ( qword_1C001C660 )
          qword_1C001C660(&v20);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C3E8);
  return (unsigned int)v9;
}
