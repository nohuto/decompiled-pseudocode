/*
 * XREFs of ACPIRegReadAMLRegistryEntry @ 0x1C008FCF0
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0002990 (ACPIMapNamedTable.c)
 *     ACPILoadProcessRSDT @ 0x1C00BE744 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessDSDT @ 0x1C00BEC08 (ACPILoadProcessDSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002B90 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002C50 (WPP_RECORDER_SF_s.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C005DB8C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C005E480 (WPP_RECORDER_SF_Ld.c)
 *     OSOpenHandle @ 0x1C008FBB8 (OSOpenHandle.c)
 *     ACPIRegLocalCopyString @ 0x1C008FEA8 (ACPIRegLocalCopyString.c)
 *     OSReadRegValue @ 0x1C0097444 (OSReadRegValue.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B24BC (ACPIRegReadEntireAcpiTable.c)
 *     OSOpenLargestSubkey @ 0x1C00B2AB4 (OSOpenLargestSubkey.c)
 */

char __fastcall ACPIRegReadAMLRegistryEntry(__int64 *a1)
{
  __int64 v1; // r15
  char v2; // r14
  char *PoolWithTag; // rax
  char *v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  int v8; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+20h] [rbp-20h]
  __int64 v15; // [rsp+28h] [rbp-18h]
  HANDLE Handle; // [rsp+98h] [rbp+58h] BYREF

  v1 = *a1;
  Handle = 0LL;
  v2 = 0;
  if ( (AcpiOverrideAttributes & 0x10000) == 0 )
    return 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x59uLL, 0x53706341u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x59uLL);
  qmemcpy(v5, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\", 68);
  v6 = (_BYTE *)ACPIRegLocalCopyString(v5 + 68, v1, 4LL);
  *v6 = 92;
  v7 = (_BYTE *)ACPIRegLocalCopyString(v6 + 1, v1 + 10, 6LL);
  *v7 = 92;
  *(_BYTE *)ACPIRegLocalCopyString(v7 + 1, v1 + 16, 8LL) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x1Eu,
      (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
      v5);
  v8 = OSOpenHandle(v5, 0LL, (__int64)&Handle);
  if ( v8 >= 0 )
  {
    v10 = OSOpenLargestSubkey(Handle);
    if ( v10 >= 0 )
    {
      if ( (int)OSReadRegValue("Action") < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Ld((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13, v14);
      }
      else if ( (int)ACPIRegReadEntireAcpiTable(0LL, a1) >= 0 )
      {
        v2 = 1;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v10;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x20u,
        (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
        v15);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x1Fu,
      (__int64)&WPP_6006670290f3383f41c779ffdcc42ff2_Traceguids,
      v15);
  }
  ExFreePoolWithTag(v5, 0);
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
