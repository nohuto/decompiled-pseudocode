/*
 * XREFs of RootHub_PrepareHardware @ 0x1C00706C0
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     XilRegister_GetOperationalRegisters @ 0x1C000821C (XilRegister_GetOperationalRegisters.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     RootHub_DumpPortData @ 0x1C0017D40 (RootHub_DumpPortData.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C001A740 (WPP_RECORDER_SF_dddd.c)
 *     XilRegister_ReadBufferUlong @ 0x1C001A920 (XilRegister_ReadBufferUlong.c)
 *     Register_FindFirstExtendedCapability @ 0x1C001A95C (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C001A9C8 (Register_FindNextExtendedCapability.c)
 *     RootHub_InitializeReadModifyWriteLock @ 0x1C001AA2C (RootHub_InitializeReadModifyWriteLock.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C001F76C (Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_cccc @ 0x1C0040C30 (WPP_RECORDER_SF_cccc.c)
 *     RootHub_PopulatePortFlagsFromRegistry @ 0x1C00750D4 (RootHub_PopulatePortFlagsFromRegistry.c)
 */

__int64 __fastcall RootHub_PrepareHardware(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // r13d
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 Pool2; // rax
  unsigned int v7; // edi
  unsigned int i; // edx
  __int64 v9; // rcx
  unsigned int *FirstExtendedCapability; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  unsigned int v15; // r13d
  unsigned int v16; // eax
  unsigned int j; // edi
  int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  char IsSecureDevice; // al
  int v22; // r8d
  int v23; // ecx
  __int64 v24; // r9
  int v25; // eax
  int v26; // edx
  __int64 v27; // rcx
  char v28; // al
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // r9
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // r10d
  int v37; // ecx
  int IsEnabledDeviceUsage; // eax
  __int64 v39; // rdx
  int v40; // r8d
  unsigned int v41; // ecx
  int v42; // eax
  int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rdi
  unsigned int v47; // eax
  __int64 v48; // rcx
  int Ulong; // eax
  char v50; // dl
  int v51; // r9d
  char *v52; // rcx
  unsigned int v53; // esi
  __int64 v54; // r14
  int v56; // r9d
  int v57; // [rsp+28h] [rbp-99h]
  int v58; // [rsp+58h] [rbp-69h]
  unsigned int v59; // [rsp+58h] [rbp-69h]
  char v60; // [rsp+5Ch] [rbp-65h]
  __int64 v61; // [rsp+60h] [rbp-61h]
  int v62; // [rsp+60h] [rbp-61h]
  unsigned int v63; // [rsp+60h] [rbp-61h]
  __int128 v64; // [rsp+68h] [rbp-59h] BYREF
  __int128 v65; // [rsp+78h] [rbp-49h]
  __int64 v66; // [rsp+88h] [rbp-39h]
  int v67; // [rsp+90h] [rbp-31h]
  _OWORD v68[2]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v69; // [rsp+B8h] [rbp-9h]
  void *v70; // [rsp+C8h] [rbp+7h]
  unsigned int *v71; // [rsp+D0h] [rbp+Fh]
  __int64 v72; // [rsp+D8h] [rbp+17h]
  __int128 v73; // [rsp+E0h] [rbp+1Fh] BYREF

  LODWORD(v70) = 0;
  LODWORD(v66) = 0;
  v2 = a1[1];
  v3 = 0;
  memset(v68, 0, sizeof(v68));
  v60 = 0;
  v69 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v4 = *(_QWORD *)(v2 + 88);
  v73 = 0LL;
  v72 = v4;
  *((_DWORD *)a1 + 4) = *(unsigned __int8 *)(v4 + 87);
  *((_DWORD *)a1 + 5) = 0;
  *((_WORD *)a1 + 12) = (unsigned __int8)*(_WORD *)(v4 + 100);
  *((_WORD *)a1 + 13) = *(_WORD *)(v4 + 102);
  a1[4] = XilRegister_GetOperationalRegisters(v4);
  a1[5] = *(_QWORD *)(v4 + 32) + 1024LL;
  if ( Register_FindFirstExtendedCapability(v5, 0xAu) )
    *((_BYTE *)a1 + 56) = 1;
  Pool2 = ExAllocatePool2(64LL, 120LL * *((unsigned int *)a1 + 4), 1229146200LL);
  a1[6] = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72), 2, 11, 20, (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
    v7 = -1073741670;
LABEL_7:
    v58 = v7;
    goto LABEL_62;
  }
  for ( i = 0; i < *((_DWORD *)a1 + 4); *(_DWORD *)(v9 + 8) = i )
  {
    v9 = a1[6] + 120LL * i++;
    *(_QWORD *)v9 = a1;
  }
  FirstExtendedCapability = Register_FindFirstExtendedCapability(v4, 2u);
  v71 = FirstExtendedCapability;
  if ( !FirstExtendedCapability )
  {
LABEL_83:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72), v11, 11, 26, (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
    }
    v7 = -1073741811;
    goto LABEL_7;
  }
  do
  {
    XilRegister_ReadBufferUlong(v4, FirstExtendedCapability, &v73, 4u);
    if ( DWORD1(v73) != 541217621 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_cccc(
          *(_QWORD *)(a1[1] + 72),
          DWORD1(v73),
          v12,
          v13,
          v57,
          SBYTE4(v73),
          SBYTE5(v73),
          SBYTE6(v73),
          SBYTE7(v73));
      goto LABEL_16;
    }
    v14 = 1;
    v67 = v73;
    v15 = BYTE3(v73);
    if ( BYTE3(v73) - 2 <= 1u )
    {
      v59 = BYTE9(v73);
      IsEnabledDeviceUsage = Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage();
      v40 = BYTE8(v73);
      if ( IsEnabledDeviceUsage && v15 == 3 )
        *(_DWORD *)(v4 + 140) = BYTE8(v73);
      v41 = v59;
      v42 = v40 + v59;
      v62 = v40 + v59;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = v42 - 1;
        LOBYTE(v43) = 4;
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(a1[1] + 72),
          v43,
          11,
          21,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v15,
          SBYTE2(v67),
          v40,
          v42 - 1);
        v40 = BYTE8(v73);
        v41 = v59;
        v42 = v62;
      }
      if ( v40 && v41 && (unsigned int)(v42 - 1) <= *((_DWORD *)a1 + 4) )
      {
        v44 = 0;
        v60 = 1;
        v63 = 0;
        v45 = DWORD2(v73);
        while ( 1 )
        {
          v39 = v40 + v44 - 1;
          v46 = a1[6] + 120 * v39;
          if ( *(_BYTE *)(v46 + 13) )
            break;
          if ( v15 == 2 )
            ++*((_WORD *)a1 + 10);
          else
            ++*((_WORD *)a1 + 11);
          *(_BYTE *)(v46 + 12) = BYTE2(v67);
          *(_BYTE *)(v46 + 15) = (v45 & 0x20000) != 0;
          v47 = v45;
          v48 = v72;
          *(_BYTE *)(v46 + 13) = v15;
          *(_BYTE *)(v46 + 16) = (v47 & 0x40000) != 0;
          Ulong = XilRegister_ReadUlong(v48, (unsigned int *)(a1[5] + 16 * v39));
          v45 = DWORD2(v73);
          v50 = 0;
          *(_BYTE *)(v46 + 19) = 0;
          if ( (v45 & 0x80000) != 0 )
          {
            *(_BYTE *)(v46 + 19) = 1;
            v50 = 1;
          }
          if ( (v45 & 0x100000) != 0 )
            *(_BYTE *)(v46 + 19) = v50 | 2;
          if ( (Ulong & 0x40000000) == 0 )
            *(_BYTE *)(v46 + 17) = 1;
          v40 = BYTE8(v73);
          *(_BYTE *)(v46 + 14) = (v45 >> 25) & 7;
          *(_WORD *)(v46 + 54) = v45 >> 28;
          *(_QWORD *)(v46 + 56) = v71 + 4;
          v44 = v63 + 1;
          v63 = v44;
          if ( v44 >= v59 )
          {
            v4 = v72;
            goto LABEL_15;
          }
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v51 = 23;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v51 = 22;
      }
      LOBYTE(v39) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72), v39, 11, v51, (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
LABEL_61:
      v7 = -1073741811;
      v58 = -1073741811;
      goto LABEL_62;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72),
        v14,
        11,
        24,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        SBYTE3(v73),
        SBYTE2(v73));
    }
LABEL_15:
    v3 = 0;
LABEL_16:
    FirstExtendedCapability = Register_FindNextExtendedCapability(v4, v71);
    v71 = FirstExtendedCapability;
  }
  while ( FirstExtendedCapability );
  if ( !v60 )
    goto LABEL_83;
  v16 = *((_DWORD *)a1 + 4);
  for ( j = 0; j < v16; ++j )
  {
    RootHub_DumpPortData(a1[5] + 16LL * j, a1[1]);
    v16 = *((_DWORD *)a1 + 4);
  }
  v7 = 0;
  if ( !v16 )
  {
LABEL_34:
    RootHub_PopulatePortFlagsFromRegistry(a1);
    return v7;
  }
  while ( 1 )
  {
    v18 = RootHub_InitializeReadModifyWriteLock(a1, v3);
    v19 = 0;
    v58 = v18;
    v7 = v18;
    if ( v18 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(a1[1] + 72),
          v19,
          11,
          27,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v18,
          v3);
      }
      goto LABEL_62;
    }
    v20 = a1[1];
    *(_QWORD *)((char *)&v68[1] + 4) = 0x100000000LL;
    v66 = 0LL;
    v65 = 0LL;
    LODWORD(v65) = 0;
    *(_QWORD *)&v64 = 0LL;
    *((_QWORD *)&v64 + 1) = RootHub_WdfEvtTimerPortOperationPendingTimerDpc;
    v70 = off_1C0063400;
    v69 = *a1;
    LODWORD(v64) = 40;
    BYTE4(v65) = 1;
    DWORD2(v65) = 0;
    v66 = 1LL;
    *(_OWORD *)((char *)v68 + 4) = 0LL;
    LODWORD(v68[0]) = 56;
    HIDWORD(v68[1]) = 1;
    IsSecureDevice = Controller_IsSecureDevice(v20);
    v23 = v22;
    if ( IsSecureDevice )
      v23 = 2;
    v24 = a1[6] + 72;
    DWORD2(v68[1]) = v23;
    v61 = 120LL * v3;
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01023 + 2544))(
            WdfDriverGlobals,
            &v64,
            v68,
            v61 + v24);
    v58 = v25;
    v7 = v25;
    if ( v25 < 0 )
      break;
    *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v61 + a1[6] + 72),
                 off_1C0063400) = v61 + a1[6];
    v27 = a1[1];
    v66 = 0LL;
    v65 = 0LL;
    LODWORD(v65) = 0;
    DWORD2(v65) = 0;
    *(_QWORD *)&v64 = 0LL;
    *((_QWORD *)&v64 + 1) = RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc;
    v70 = off_1C0063400;
    v69 = *a1;
    LODWORD(v64) = 40;
    BYTE4(v65) = 1;
    LOBYTE(v66) = 1;
    *(_OWORD *)((char *)v68 + 4) = 0LL;
    *(_QWORD *)((char *)&v68[1] + 4) = 0x100000000LL;
    LODWORD(v68[0]) = 56;
    HIDWORD(v68[1]) = 1;
    v28 = Controller_IsSecureDevice(v27);
    v30 = v29;
    if ( v28 )
      v30 = 2;
    v31 = a1[6] + 80;
    DWORD2(v68[1]) = v30;
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01023 + 2544))(
            WdfDriverGlobals,
            &v64,
            v68,
            v61 + v31);
    v58 = v25;
    v7 = v25;
    if ( v25 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v56 = 29;
LABEL_76:
        LOBYTE(v26) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 72),
          v26,
          11,
          v56,
          (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
          v25);
        goto LABEL_62;
      }
      goto LABEL_62;
    }
    *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v61 + a1[6] + 80),
                 off_1C0063400) = v61 + a1[6];
    if ( *(_BYTE *)(v61 + a1[6] + 13) == 2 )
    {
      v32 = a1[1];
      v66 = 0LL;
      *(_QWORD *)((char *)&v68[1] + 4) = 0x100000000LL;
      v65 = 0LL;
      LODWORD(v65) = 0;
      DWORD2(v65) = 0;
      *(_QWORD *)&v64 = 0LL;
      *((_QWORD *)&v64 + 1) = RootHub_WdfEvtTimer20PortResumeCompleteDpc;
      v70 = off_1C0063400;
      v69 = *a1;
      LODWORD(v64) = 40;
      BYTE4(v65) = 1;
      LOBYTE(v66) = 1;
      *(_OWORD *)((char *)v68 + 4) = 0LL;
      LODWORD(v68[0]) = 56;
      HIDWORD(v68[1]) = 1;
      v33 = Controller_IsSecureDevice(v32);
      v37 = v36;
      if ( v33 )
        v37 = 2;
      DWORD2(v68[1]) = v37;
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01023 + 2544))(
              WdfDriverGlobals,
              &v64,
              v68,
              v34 + v35 + 40);
      v58 = v25;
      v7 = v25;
      if ( v25 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_62;
        v56 = 30;
        goto LABEL_76;
      }
      *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v61 + a1[6] + 40),
                   off_1C0063400) = a1[6] + v61;
    }
    if ( ++v3 >= *((_DWORD *)a1 + 4) )
      goto LABEL_34;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v56 = 28;
    goto LABEL_76;
  }
LABEL_62:
  v52 = (char *)a1[6];
  if ( v52 )
  {
    v53 = 0;
    if ( *((_DWORD *)a1 + 4) )
    {
      do
      {
        v54 = 120LL * v53;
        if ( *(_QWORD *)&v52[v54 + 72] )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
          *(_QWORD *)(v54 + a1[6] + 72) = 0LL;
        }
        v52 = (char *)a1[6];
        if ( *(_QWORD *)&v52[v54 + 80] )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
          *(_QWORD *)(v54 + a1[6] + 80) = 0LL;
          v52 = (char *)a1[6];
        }
        ++v53;
      }
      while ( v53 < *((_DWORD *)a1 + 4) );
      v7 = v58;
    }
    ExFreePoolWithTag(v52, 0x49434858u);
    a1[6] = 0LL;
  }
  return v7;
}
