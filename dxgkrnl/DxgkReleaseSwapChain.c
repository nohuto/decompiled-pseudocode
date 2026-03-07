__int64 __fastcall DxgkReleaseSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  void *v4; // r14
  void *v5; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rbx
  const wchar_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v12; // rax
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  NTSTATUS v16; // eax
  int v17; // esi
  void *v18; // r8
  PVOID v19; // r12
  _DWORD *v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rdx
  _QWORD *v23; // rdx
  ULONG64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // [rsp+50h] [rbp-88h] BYREF
  __int64 v28; // [rsp+58h] [rbp-80h]
  char v29; // [rsp+60h] [rbp-78h]
  HANDLE Handle[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v31; // [rsp+80h] [rbp-58h]
  void *v32[2]; // [rsp+90h] [rbp-48h]
  void *Src[2]; // [rsp+A0h] [rbp-38h]
  PVOID Object; // [rsp+E8h] [rbp+10h] BYREF
  void *v35; // [rsp+F0h] [rbp+18h]

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2112);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2112);
  v4 = 0LL;
  v5 = 0LL;
  v35 = 0LL;
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v6;
  v31 = v6[1];
  *(_OWORD *)v32 = v6[2];
  *(_OWORD *)Src = v6[3];
  if ( LODWORD(Src[0]) > 0x32 )
  {
    v7 = LODWORD(Src[0]);
    WdLogSingleEntry1(2LL, LODWORD(Src[0]));
    v8 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
LABEL_12:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v27);
    }
    return 3221225485LL;
  }
  if ( LODWORD(Src[0]) )
  {
    v4 = Src[1];
    if ( !Src[1] )
    {
      v7 = 1263LL;
      WdLogSingleEntry1(2LL, 1263LL);
      v8 = L"Caller specified non-zero free list size but failed to provide buffer";
      goto LABEL_12;
    }
    v12 = 4LL * LODWORD(Src[0]);
    if ( !is_mul_ok(LODWORD(Src[0]), 4uLL) )
      v12 = -1LL;
    v13 = (void *)operator new[](v12, 0x4B677844u, 256LL);
    v5 = v13;
    v35 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry1(6LL, 1270LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate deferred list",
        1270LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v27);
      return 3221225495LL;
    }
    Src[1] = v13;
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = v32[1];
    v32[1] = 0LL;
    v19 = Object;
    v17 = SwapChainReleaseInternal(
            *(struct DXGSWAPCHAIN **)Object,
            (struct _D3DKMT_RELEASESWAPCHAIN *)Handle,
            v18,
            1,
            0);
    if ( v17 >= 0 )
    {
      v20 = (_DWORD *)(a1 + 48);
      if ( a1 + 48 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      v21 = LODWORD(Src[0]);
      *v20 = Src[0];
      if ( (_QWORD)v31 )
      {
        v22 = (_QWORD *)(a1 + 16);
        if ( a1 + 16 >= MmUserProbeAddress )
          v22 = (_QWORD *)MmUserProbeAddress;
        *v22 = v31;
        v23 = (_QWORD *)(a1 + 24);
        if ( a1 + 24 >= MmUserProbeAddress )
          v23 = (_QWORD *)MmUserProbeAddress;
        *v23 = *((_QWORD *)&v31 + 1);
      }
      if ( (_DWORD)v21 )
      {
        v24 = (ULONG64)v4 + 4 * v21;
        if ( v24 > MmUserProbeAddress || v24 <= (unsigned __int64)v4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v4, Src[1], 4 * v21);
      }
    }
    ObfDereferenceObject(v19);
  }
  else
  {
    WdLogSingleEntry2(3LL, Handle[0], v16);
  }
  if ( v5 )
    operator delete(v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v27);
  return (unsigned int)v17;
}
