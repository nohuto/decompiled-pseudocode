__int64 __fastcall ACPIBuildProcessDeviceGenericEval(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edi
  _QWORD *v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // rcx
  signed __int32 v7; // edx
  int v8; // r8d
  __int64 v9; // rax
  void *v10; // rdx

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x10125CuLL, 0LL, 0LL);
  v5 = AMLIGetNamedChild(v3[95], AcpiBuildDevicePowerNameLookup[v1]);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
    AMLIDereferenceHandleEx(v6);
  *(_QWORD *)(a1 + 56) = v5;
  if ( v5 )
  {
    dword_1C006F938 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v2 = AMLIAsyncEvalObject(v5, (int)a1 + 80, 0, 0, (__int64)ACPIBuildCompleteGeneric, a1);
    if ( v2 == 259 )
      goto LABEL_12;
  }
  v7 = *(_DWORD *)(a1 + 32);
  if ( v2 < 0 )
    *(_DWORD *)(a1 + 48) = v2;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v7);
  if ( v5 )
LABEL_12:
    AMLIDereferenceHandleEx(v5);
  v9 = v3[1];
  v10 = &unk_1C00622D0;
  if ( (v9 & 0x200000000000LL) != 0 && (v9 & 0x400000000000LL) != 0 )
    v10 = (void *)v3[77];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_LLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v10, v8, 27);
  }
  return 0LL;
}
