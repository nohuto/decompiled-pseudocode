__int64 __fastcall DxgkSetMemoryBudgetTarget(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]
  char v19; // [rsp+30h] [rbp-38h]
  unsigned int v20; // [rsp+38h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-28h] BYREF

  v3 = (unsigned int *)a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2141;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2141);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2141);
  if ( CheckTokenForResourceManagerAccess() )
  {
    v21 = 0LL;
    v9 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v20 = *v9;
    v10 = v20;
    if ( v20 >= 0x10 )
    {
      if ( v20 > 0x10 )
        v10 = 16;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      memmove(&v21, v3, v10);
      if ( DWORD2(v21)
        && HIDWORD(v21)
        && DWORD2(v21) < 0x64
        && HIDWORD(v21) < 0x64
        && (unsigned int)(HIDWORD(v21) + DWORD2(v21)) < 0x64
        && !DWORD1(v21) )
      {
        ApplyResourceManagerPolicyToRenderAdapters(1, (__int64)&v21);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
        if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v17);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
        if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v17);
        return 3221225485LL;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, 4754LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v17);
      return 3221225485LL;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v4);
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v17);
    }
    return 3221225506LL;
  }
}
