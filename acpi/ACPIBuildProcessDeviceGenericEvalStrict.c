__int64 __fastcall ACPIBuildProcessDeviceGenericEvalStrict(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  _QWORD *v3; // rbp
  int v4; // esi
  ULONG_PTR v6; // rbx
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rdx

  v1 = *(unsigned int *)(a1 + 28);
  v2 = a1 + 80;
  v3 = *(_QWORD **)(a1 + 40);
  v4 = 0;
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x1012D6uLL, 0LL, 0LL);
  v6 = AMLIGetNamedChild(v3[95], AcpiBuildDevicePowerNameLookup[v1]);
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  v8 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  if ( v8 )
    AMLIDereferenceHandleEx(v8);
  *(_QWORD *)(a1 + 56) = v6;
  if ( v6 )
  {
    dword_1C006F938 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v4 = AMLIAsyncEvalObject(v6, v2, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1);
  }
  v9 = v3[1];
  v10 = &unk_1C00622D0;
  if ( (v9 & 0x200000000000LL) != 0 && (v9 & 0x400000000000LL) != 0 )
    v10 = (void *)v3[77];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_LLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v10, v7, 28);
  }
  if ( v4 != 259 )
    ACPIBuildCompleteMustSucceed(v6, v4, v2, a1);
  if ( v6 )
    AMLIDereferenceHandleEx(v6);
  return 0LL;
}
