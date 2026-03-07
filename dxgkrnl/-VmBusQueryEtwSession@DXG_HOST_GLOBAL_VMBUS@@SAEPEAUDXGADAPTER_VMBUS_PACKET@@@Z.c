unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusQueryEtwSession(struct VMBPACKETCOMPLETION__ **a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rbx
  UUID Uuid; // [rsp+50h] [rbp-28h] BYREF

  Uuid = 0LL;
  v2 = ExUuidCreate(&Uuid);
  if ( v2 < 0 )
  {
    v6 = v2;
    WdLogSingleEntry1(2LL, v2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to generate ETW session GUID: Status=0x%.8x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0j_EtwWriteTransfer(v3, &EventVGPUHostGenerateSessionId, v4, (__int64)&Uuid);
    VmBusCompletePacket(a1[16], &Uuid, 0x10u);
    return 1;
  }
}
