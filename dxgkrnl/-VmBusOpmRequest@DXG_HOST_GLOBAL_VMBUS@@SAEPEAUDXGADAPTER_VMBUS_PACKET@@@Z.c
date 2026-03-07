char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpmRequest(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  struct _LUID *v3; // rdi
  __int64 v5; // rdi
  const wchar_t *v6; // r9
  unsigned int HighPart; // eax
  __int64 v8; // rax
  _DWORD *v9; // r14
  int *v10; // rbx
  int v11; // eax
  int v12; // r8d

  v2 = 0;
  v3 = (struct _LUID *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( !v3 )
    return 0;
  Feature_VAIL_Opm_Projection__private_ReportDeviceUsage();
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL) + 336LL) )
  {
    v5 = 8031LL;
    WdLogSingleEntry1(2LL, 8031LL);
    v6 = L"OPM requests not allowed from secure VM's";
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, v5, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  if ( *((_DWORD *)a1 + 36) - 48 < v3[5].LowPart )
  {
    v5 = 8038LL;
    WdLogSingleEntry1(2LL, 8038LL);
    v6 = L"Input buffer size is too big";
    goto LABEL_5;
  }
  HighPart = v3[5].HighPart;
  if ( HighPart > 0x20000 )
  {
    WdLogSingleEntry1(2LL, HighPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"OutputBufSize (0x%I64x) too big",
      (unsigned int)v3[5].HighPart,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  v8 = operator new[](HighPart + 12, 0x4B677844u, 64LL);
  v9 = (_DWORD *)v8;
  if ( v8 )
  {
    v10 = (int *)(v8 + 4);
    *(_DWORD *)(v8 + 4) = v3[5].HighPart;
    v11 = DxgkpProcessOpmVmBusRequest(
            v3[3],
            v3[4].LowPart,
            v3[4].HighPart,
            (__int64)&v3[6],
            v3[5].LowPart,
            (void **)(v8 + 8),
            (unsigned int *)(v8 + 4));
    v12 = *v10;
    *v9 = v11;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v9, v12 + 8);
    v2 = 1;
    operator delete(v9);
  }
  else
  {
    WdLogSingleEntry1(6LL, 8069LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for output buffer",
      8069LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v2;
}
