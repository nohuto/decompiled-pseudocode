/*
 * XREFs of ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952EC
 * Callers:
 *     ACPIDockIrpQueryCapabilities @ 0x1C007AD60 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C0087050 (ACPIInternalDeviceQueryCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _ACPIInternalError @ 0x1C0001B74 (_ACPIInternalError.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIInternalClearFlags @ 0x1C002E508 (ACPIInternalClearFlags.c)
 *     ACPIInternalSetFlags @ 0x1C002F068 (ACPIInternalSetFlags.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C003E114 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C0087F60 (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerQueryDeviceCapabilities(_QWORD *BugCheckParameter2, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rax
  char v6; // di
  __m128i *v7; // rdx
  int DeviceCapabilities; // r14d
  const char *v9; // rcx
  const char *v10; // r8
  const char *v12; // rcx
  const char *v13; // r8
  int v14; // edx
  void *v15; // rcx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  _DWORD v22[16]; // [rsp+50h] [rbp-68h] BYREF

  memset(v22, 0, sizeof(v22));
  v4 = BugCheckParameter2 + 1;
  v5 = BugCheckParameter2[1];
  if ( (v5 & 0x400000000000000LL) == 0 )
  {
    v6 = 0;
    if ( (v5 & 0x60) == 0x40 )
    {
      v7 = (__m128i *)a2;
    }
    else
    {
      DeviceCapabilities = ACPIInternalGetDeviceCapabilities(*(PDEVICE_OBJECT *)(BugCheckParameter2[99] + 768LL), v22);
      if ( DeviceCapabilities < 0 )
      {
        v9 = byte_1C00622D0;
        v10 = byte_1C00622D0;
        if ( (*v4 & 0x200000000000LL) != 0 )
        {
          v9 = (const char *)BugCheckParameter2[76];
          if ( (*v4 & 0x400000000000LL) != 0 )
            v10 = (const char *)BugCheckParameter2[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x12u,
            (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
            DeviceCapabilities,
            (char)BugCheckParameter2,
            v9,
            v10);
        return (unsigned int)DeviceCapabilities;
      }
      v7 = (__m128i *)v22;
    }
    DeviceCapabilities = ACPISystemPowerUpdateDeviceCapabilities((ULONG_PTR)BugCheckParameter2, v7, a2);
    if ( DeviceCapabilities < 0 )
    {
      v12 = byte_1C00622D0;
      v13 = byte_1C00622D0;
      if ( BugCheckParameter2 )
      {
        v6 = (char)BugCheckParameter2;
        if ( (*v4 & 0x200000000000LL) != 0 )
        {
          v12 = (const char *)BugCheckParameter2[76];
          if ( (*v4 & 0x400000000000LL) != 0 )
            v13 = (const char *)BugCheckParameter2[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0x13u,
          (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
          DeviceCapabilities,
          v6,
          v12,
          v13);
      if ( (*(_BYTE *)v4 & 0x20) != 0 )
        ACPIInternalError(0xB043DuLL);
      return (unsigned int)DeviceCapabilities;
    }
    ACPIInternalSetFlags(BugCheckParameter2 + 1, 0x400000000000000uLL);
  }
  v14 = *(_DWORD *)(a2 + 4);
  v15 = BugCheckParameter2 + 126;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)((char *)BugCheckParameter2 + 508);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)BugCheckParameter2 + 524);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)BugCheckParameter2 + 133);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)BugCheckParameter2 + 134);
  *(_DWORD *)(a2 + 48) = *((_DWORD *)BugCheckParameter2 + 135);
  v16 = *(_DWORD *)(a2 + 4) ^ (*((_DWORD *)BugCheckParameter2 + 150) ^ v14) & 1;
  *(_DWORD *)(a2 + 4) = v16;
  v17 = (*((_DWORD *)BugCheckParameter2 + 150) ^ v16) & 2 ^ v16;
  *(_DWORD *)(a2 + 4) = v17;
  v18 = ((unsigned __int16)v17 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x400 ^ v17;
  *(_DWORD *)(a2 + 4) = v18;
  v19 = ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x800 ^ v18;
  *(_DWORD *)(a2 + 4) = v19;
  v20 = ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x1000 ^ v19;
  *(_DWORD *)(a2 + 4) = v20;
  v21 = ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x2000 ^ v20;
  *(_DWORD *)(a2 + 4) = v21;
  if ( _bittest64(BugCheckParameter2 + 126, 0x20u) )
  {
    if ( (v21 & 0x80000) != 0 )
      ACPIInternalClearFlags(v15, 0x100000LL);
    else
      ACPIInternalSetFlags(v15, 0x100000uLL);
  }
  return 0LL;
}
