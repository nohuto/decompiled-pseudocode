__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v5; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  DXGADAPTER *v8; // r15
  int v9; // eax
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  char v18; // [rsp+68h] [rbp-98h]
  _BYTE v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v16 = -1;
  v17 = 0LL;
  v5 = a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2175;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2175);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2175);
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)v15);
  v8 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v7, 0LL);
    v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v9);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)",
        a1->HighPart,
        a1->LowPart,
        v10,
        0LL,
        0LL);
    }
    else
    {
      v15[0] = 0;
      v11 = DmmEnumClientVidPnPathTargetsFromSource(v8, v5, 1LL, v15);
      v10 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry4(2LL, a1->HighPart, a1->LowPart, v5, v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed in calling DmmEnumClientVidPnPathTargetsFromSource for adapter luid (0x%I64x::0x%I64x) and sou"
                    "rce (0x%I64x) with status (0x%I64x)",
          a1->HighPart,
          a1->LowPart,
          v5,
          v10,
          0LL);
      }
      else
      {
        *a3 = v15[0] != -1;
      }
    }
    DXGADAPTER::ReleaseReference(v8);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Can't reference adapter by luid (0x%I64x::0x%I64x).",
      a1->HighPart,
      a1->LowPart,
      0LL,
      0LL,
      0LL);
    LODWORD(v10) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
  }
  return (unsigned int)v10;
}
