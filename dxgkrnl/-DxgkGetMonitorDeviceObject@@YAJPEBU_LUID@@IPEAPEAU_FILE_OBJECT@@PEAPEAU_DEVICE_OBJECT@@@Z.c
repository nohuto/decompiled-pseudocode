__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        unsigned int a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v6; // rdi
  int v8; // eax
  __int64 v9; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // edi
  struct DXGADAPTER *v15; // rcx
  struct DXGADAPTER *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h]
  char v24; // [rsp+78h] [rbp-88h]
  unsigned __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  char v26; // [rsp+90h] [rbp-70h] BYREF
  char v27; // [rsp+91h] [rbp-6Fh]
  _BYTE v28[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-60h]
  struct DXGADAPTER *v30; // [rsp+A8h] [rbp-58h]
  char v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  _BYTE v33[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-20h]
  struct DXGADAPTER *v35; // [rsp+E8h] [rbp-18h]
  char v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  v22 = -1;
  v6 = a2;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2166;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2166);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2166);
  v20 = 0;
  if ( a1 && a3 && a4 )
  {
    v21 = *a1;
    v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v21, (unsigned int)v6, &v21, &v20);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry4(2LL, a1->LowPart, a1->HighPart, v6, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find the real target ID from Adapter LUID (0x%I64x, 0x%I64x) target ID 0x%I64x, returning 0x%I64x",
        a1->LowPart,
        a1->HighPart,
        v6,
        v9,
        0LL);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v21, &v25);
      v12 = (__int64)v11;
      if ( v11 )
      {
        v27 = 0;
        v30 = v11;
        v31 = 0;
        v32 = 0LL;
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 3);
        v35 = v11;
        v29 = -1LL;
        v36 = 0;
        v37 = 0LL;
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 3);
        v34 = -1LL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v11 + 2), v11);
        if ( *(_QWORD *)(v12 + 2920) )
        {
          v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v26, 0LL);
          v14 = v13;
          if ( v13 < 0 )
          {
            WdLogSingleEntry2(3LL, v12, v13);
            LODWORD(v9) = v14;
          }
          else
          {
            LODWORD(v9) = MonitorGetDeviceObject(v12, v20, a3, a4);
          }
        }
        else
        {
          LODWORD(v9) = -1073741811;
          WdLogSingleEntry2(2LL, v12, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DxgkGetMonitorDeviceObject is called on the non-display adapter 0x%I64x, returning 0x%I64x.",
            v12,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v27 )
        {
          if ( v30 != v35 )
            COREACCESS::Release((COREACCESS *)v28);
          COREACCESS::Release((COREACCESS *)v33);
          v27 = 0;
        }
        v15 = v35;
        if ( v35 )
        {
          if ( v36 )
          {
            COREACCESS::Release((COREACCESS *)v33);
            v15 = v35;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v15 + 2), v15);
        }
        v16 = v30;
        if ( v30 )
        {
          if ( v31 )
          {
            COREACCESS::Release((COREACCESS *)v28);
            v16 = v30;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v16 + 2), v16);
        }
      }
      else
      {
        LODWORD(v9) = -1073741811;
        WdLogSingleEntry3(3LL, v21.LowPart, v21.HighPart, -1073741811LL);
      }
    }
  }
  else
  {
    LODWORD(v9) = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v22);
  return (unsigned int)v9;
}
