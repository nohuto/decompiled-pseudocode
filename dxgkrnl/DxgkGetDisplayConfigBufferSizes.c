__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // r14
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  bool v13; // cl
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // rax
  __int64 v18; // rcx
  struct _KTHREAD **v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // eax
  __int64 (__fastcall *v25)(struct DXGADAPTER *, void *); // rbx
  struct DXGGLOBAL *Global; // rax
  int PathsModality; // eax
  DXGFASTMUTEX *v28; // [rsp+50h] [rbp-30h] BYREF
  char v29; // [rsp+58h] [rbp-28h]
  int v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+68h] [rbp-18h]
  char v32; // [rsp+70h] [rbp-10h]
  unsigned __int16 v33; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+D0h] [rbp+50h] BYREF

  v30 = -1;
  v4 = (unsigned int)a1;
  v31 = 0LL;
  v5 = 1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2174;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2174);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2174);
  v34 = (unsigned int)v4;
  v6 = (unsigned int)v4 & 0xFFFFFFEF;
  v9 = (_BYTE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 187);
  if ( *v9 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v11) + 24) = 224LL;
  }
  else
  {
    v12 = *((_QWORD *)DXGPROCESS::GetCurrent(v8) + 11);
    if ( v12 )
      v13 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v12 + 224))(0LL, 0LL, 0LL) != 0;
    else
      v13 = 0;
    if ( !v13 )
    {
      v29 = 0;
      v28 = (DXGFASTMUTEX *)(v9 + 8);
      if ( v9 == (_BYTE *)-8LL )
      {
        WdLogSingleEntry1(1LL, 592LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((struct _KTHREAD **)v28 + 3) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 599LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGFASTMUTEX::Acquire(v28);
      v17 = v9 + 56;
      v29 = 1;
      v18 = 0LL;
      while ( !*v17 || *((_DWORD *)v17 + 1) != (_DWORD)v6 )
      {
        v18 = (unsigned int)(v18 + 1);
        v17 += 32;
        if ( (unsigned int)v18 >= 0x12 )
          goto LABEL_19;
      }
      if ( v17 )
      {
        v19 = (struct _KTHREAD **)v28;
        *a2 = *((_DWORD *)v17 + 2);
        v29 = 0;
        DXGFASTMUTEX::Release(v19);
        LODWORD(v20) = 0;
        goto LABEL_16;
      }
LABEL_19:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v14, v15, v16) + 24) = v6;
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v28);
    }
  }
  if ( (v4 & 0x40000000) != 0 )
    goto LABEL_33;
  v24 = v4 & 7;
  if ( v24 == 1 )
  {
    v25 = CalcAllPathDisplayConfigBufferSizeCallback;
LABEL_24:
    Global = DXGGLOBAL::GetGlobal();
    LODWORD(v20) = DXGGLOBAL::IterateAdaptersWithCallback(Global, v25, &v34, 4LL);
    if ( (int)v20 >= 0 )
    {
      v5 = HIDWORD(v34);
      goto LABEL_26;
    }
LABEL_28:
    WdLogSingleEntry3(4LL, v4, (int)v20, (unsigned int)*a2);
    goto LABEL_16;
  }
  if ( v24 == 2 )
  {
    v25 = (__int64 (__fastcall *)(struct DXGADAPTER *, void *))CalcActivePathDisplayConfigBufferSizeCallback;
    goto LABEL_24;
  }
  if ( v24 != 4 )
  {
    LODWORD(v20) = -1073741811;
    WdLogSingleEntry1(3LL, v4);
    goto LABEL_28;
  }
  v33 = 0;
  PathsModality = DxgkGetPathsModality(15LL, 0LL, &v33);
  v20 = PathsModality;
  if ( PathsModality == -1073741789 )
  {
    v5 = v33;
LABEL_33:
    HIDWORD(v34) = v5;
    LODWORD(v20) = 0;
LABEL_26:
    *a2 = v5;
    if ( !v5 )
      LODWORD(v20) = -1073741637;
    goto LABEL_28;
  }
  WdLogSingleEntry1(2LL, PathsModality);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Unexpected status returned (expected STATUS_BUFFER_TOO_SMALL, obtained Status = 0x%I64x)",
    v20,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( (int)v20 >= 0 )
    LODWORD(v20) = -1073741823;
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 )
  {
    LOBYTE(v21) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v30);
  }
  return (unsigned int)v20;
}
