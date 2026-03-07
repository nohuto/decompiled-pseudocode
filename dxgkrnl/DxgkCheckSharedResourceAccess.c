__int64 __fastcall DxgkCheckSharedResourceAccess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rbx
  __int64 *v11; // rsi
  __int64 *i; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE v18[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v19[16]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]
  char v22; // [rsp+50h] [rbp-18h]
  unsigned int v23; // [rsp+7Ch] [rbp+14h]

  v3 = (__int64 *)a1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2059);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2059);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v4 = *v3;
  v23 = HIDWORD(v4);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v18);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v4, 2);
  if ( ObjectA )
  {
    v10 = *(_QWORD *)(ObjectA + 152);
    if ( v10 )
    {
      DXGPROCESSACCESSLISTMUTEX::DXGPROCESSACCESSLISTMUTEX(
        (DXGPROCESSACCESSLISTMUTEX *)v19,
        *(struct DXGSHAREDRESOURCEACCESS **)(ObjectA + 152));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      v11 = (__int64 *)(v10 + 56);
      for ( i = *(__int64 **)(v10 + 56); i != v11; i = (__int64 *)*i )
      {
        if ( *((_BYTE *)i + 16) )
          CurrentProcessId = PsGetCurrentProcessId();
        else
          CurrentProcessId = PsGetProcessId((PEPROCESS)i[3]);
        if ( CurrentProcessId == (HANDLE)v23 )
        {
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
          goto LABEL_25;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v20);
      return 3221225506LL;
    }
    else
    {
LABEL_25:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v20);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, (unsigned int)v4, -1073741811LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v20);
    }
    return 3221225485LL;
  }
}
