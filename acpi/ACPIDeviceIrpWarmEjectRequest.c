/*
 * XREFs of ACPIDeviceIrpWarmEjectRequest @ 0x1C001E474
 * Callers:
 *     ACPIDockIrpSetSystemPower @ 0x1C00097F4 (ACPIDockIrpSetSystemPower.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C0016FF4 (ACPIBusIrpSetSystemPower.c)
 *     ACPIFilterIrpSetPower @ 0x1C0028B10 (ACPIFilterIrpSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0009EDC (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001CF98 (ACPIDeviceInitializePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceIrpWarmEjectRequest(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, __int64),
        char a4)
{
  __int64 v4; // rax
  char v6; // r10
  const char *v7; // rcx
  const char *v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // eax
  int v15; // esi

  v4 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  v7 = (const char *)&unk_1C00622D0;
  v11 = (const char *)&unk_1C00622D0;
  v12 = (*(_DWORD *)(v4 + 8) >> 8) & 0xF;
  if ( a1 )
  {
    v13 = a1[1];
    v6 = (char)a1;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)a1[76];
      if ( (v13 & 0x400000000000LL) != 0 )
        v11 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( (unsigned int)v12 < 7 )
      v14 = AcpiSystemStateTranslation[v12];
    else
      LOBYTE(v14) = -1;
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v11,
      0xAu,
      0x24u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a2,
      v14,
      v6,
      v7,
      v11);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v15 = *(_DWORD *)(a2 + 48);
  if ( v15 >= 0 )
    return ACPIDeviceInitializePowerRequest((__int64)a1, v12, 0LL, a3, a2, 0, 3, a4 != 0 ? 0x80 : 0);
  a3((__int64)a1, a2, (unsigned int)v15);
  return (unsigned int)v15;
}
