/*
 * XREFs of Controller_RetrieveUrsData @ 0x1C007882C
 * Callers:
 *     Controller_Create @ 0x1C00712C4 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_P @ 0x1C0037340 (WPP_RECORDER_SF_P.c)
 *     Controller_PopulatePciDeviceInformation @ 0x1C0074CAC (Controller_PopulatePciDeviceInformation.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C00782EC (Controller_PopulateAcpiDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrieveUrsData(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v10; // edx
  unsigned __int16 *Pool2; // rbx
  int v12; // r8d
  int v13; // r9d
  int v14; // edi
  __int64 v15; // r13
  int v16; // edx
  unsigned int v17; // r12d
  __int64 v18; // rax
  unsigned __int16 v19; // r9
  int v20; // edx
  unsigned __int16 v21; // r8
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 *v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]

  HIDWORD(v23) = 0;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 336LL, 1229146200LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741670;
    v13 = 139;
LABEL_4:
    WPP_RECORDER_SF_P(a2, v10, v12, v13);
    return (unsigned int)-1073741670;
  }
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, a1);
  v23 = 1LL;
  v25 = 336LL;
  v24 = Pool2;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1504))(
          WdfDriverGlobals,
          v15,
          0LL,
          2752516LL,
          0LL,
          &v23,
          0LL,
          0LL);
  if ( v14 == -2147483643 )
  {
    v17 = *(_DWORD *)Pool2;
    ExFreePoolWithTag(Pool2, 0x49434858u);
    v18 = ExAllocatePool2(64LL, v17, 1229146200LL);
    Pool2 = (unsigned __int16 *)v18;
    if ( !v18 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741670;
      v13 = 140;
      goto LABEL_4;
    }
    v24 = (unsigned __int16 *)v18;
    v25 = v17;
    v23 = 1LL;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1504))(
            WdfDriverGlobals,
            v15,
            0LL,
            2752516LL,
            0LL,
            &v23,
            0LL,
            0LL);
  }
  if ( v14 >= 0 )
  {
    if ( *((_DWORD *)Pool2 + 1) == 1 )
    {
      *a3 = 2;
      Controller_PopulateAcpiDeviceInformation(Pool2 + 4, (char *)a4);
      *(_OWORD *)a5 = 0LL;
      *(_OWORD *)(a5 + 16) = 0LL;
      *(_OWORD *)(a5 + 32) = 0LL;
      *(_QWORD *)(a5 + 48) = 0LL;
    }
    else
    {
      v19 = Pool2[7];
      v20 = *((_DWORD *)Pool2 + 2);
      v21 = Pool2[6];
      *a3 = 1;
      Controller_PopulatePciDeviceInformation(a2, v20, v21, v19, (_QWORD *)Pool2 + 2, Pool2 + 40, a5, a6);
      *(_QWORD *)a4 = 0LL;
      *(_DWORD *)(a4 + 8) = 0;
      *(_WORD *)(a4 + 12) = 0;
      *(_BYTE *)(a4 + 14) = 0;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_d(a2, v16, 4, 141, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v14);
  }
  ExFreePoolWithTag(Pool2, 0x49434858u);
  return (unsigned int)v14;
}
