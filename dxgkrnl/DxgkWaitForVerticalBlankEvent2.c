__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdi
  int v6; // ecx
  unsigned int v7; // esi
  __int64 v8; // r14
  HANDLE v9; // r15
  NTSTATUS v10; // eax
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  PVOID *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // sf
  PVOID *v21; // rdi
  int v22; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-E0h]
  char v24; // [rsp+60h] [rbp-D8h]
  PVOID Object; // [rsp+68h] [rbp-D0h] BYREF
  union _LARGE_INTEGER v26[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+80h] [rbp-B8h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-A8h]
  __int128 v29; // [rsp+A0h] [rbp-98h]
  __int128 v30; // [rsp+B0h] [rbp-88h]
  __int128 v31; // [rsp+C0h] [rbp-78h]
  _QWORD v32[8]; // [rsp+D0h] [rbp-68h] BYREF

  v3 = (__int128 *)a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2083;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2083);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2083);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int128 *)MmUserProbeAddress;
  v27 = *v3;
  *(_OWORD *)Handle = v3[1];
  v29 = v3[2];
  v30 = v3[3];
  v31 = v3[4];
  if ( HIDWORD(v27) > 8 )
  {
    v17 = -1073741811;
    WdLogSingleEntry3(3LL, HIDWORD(*((_QWORD *)&v27 + 1)), 32LL, -1073741811LL);
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return v17;
    v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_28:
    if ( v20 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
    return v17;
  }
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress);
  if ( !Current )
  {
    v17 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  v5 = HIDWORD(v27);
  if ( HIDWORD(v27) )
  {
    v6 = *((_DWORD *)Current + 106);
    if ( (v6 & 4) == 0 && (!g_OSTestSigningEnabled || (v6 & 0x2000) == 0) )
    {
      v17 = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
      goto LABEL_26;
    }
  }
  memset(v32, 0, sizeof(v32));
  v7 = 0;
  if ( HIDWORD(v27) )
  {
    while ( 1 )
    {
      Object = 0LL;
      v8 = v7;
      v9 = Handle[v7];
      v10 = ObReferenceObjectByHandle(v9, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v32[v7] = Object;
      if ( v10 < 0 )
        break;
      if ( ++v7 >= (unsigned int)v5 )
        goto LABEL_12;
    }
    if ( v7 )
    {
      v21 = (PVOID *)v32;
      do
      {
        ObfDereferenceObject(*v21++);
        --v8;
      }
      while ( v8 );
    }
    v17 = -1073741811;
    WdLogSingleEntry2(3LL, v9, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return v17;
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_28;
  }
LABEL_12:
  v26[0].QuadPart = -800000LL;
  v11 = v32;
  if ( !(_DWORD)v5 )
    v11 = 0LL;
  v12 = DxgkWaitForVerticalBlankEventInternal((unsigned int)v27, DWORD1(v27), DWORD2(v27), v5, v11, v26, 0);
  if ( (_DWORD)v5 )
  {
    v13 = (PVOID *)v32;
    do
    {
      ObfDereferenceObject(*v13++);
      --v5;
    }
    while ( v5 );
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v22);
  }
  return v12;
}
