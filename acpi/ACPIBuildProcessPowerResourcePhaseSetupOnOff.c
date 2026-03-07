__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSetupOnOff(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  ULONG_PTR *v4; // rdi
  __int64 v5; // rax
  ULONG_PTR v6; // rcx
  __int64 v7; // rax
  ULONG_PTR v8; // rcx
  __int64 v9; // rax
  ULONG_PTR v10; // rcx
  __int64 v11; // rbp
  signed __int32 v12; // edx
  unsigned int v13; // edi
  __int64 v14; // rcx
  char v15; // al
  int v16; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 6;
  v4 = (ULONG_PTR *)(v1 + 32);
  if ( *(_WORD *)(a1 + 82) )
  {
    ACPIVerifyAndCopyFirmwareDependencies(*v4);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 0x1000uLL);
  }
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  v5 = AMLIGetNamedChild(*v4, 1179012959LL);
  if ( !v5 )
    KeBugCheckEx(0xA5u, 0xEuLL, *v4, 0x46464F5FuLL, 0LL);
  v6 = *v4;
  *(_QWORD *)(v1 + 80) = v5;
  v7 = AMLIGetNamedChild(v6, 1598967647LL);
  if ( !v7 )
    KeBugCheckEx(0xA5u, 0xEuLL, *v4, 0x5F4E4F5FuLL, 0LL);
  v8 = *v4;
  *(_QWORD *)(v1 + 72) = v7;
  v9 = AMLIGetNamedChild(v8, 1414746719LL);
  v10 = *v4;
  *(_QWORD *)(v1 + 88) = v9;
  v11 = AMLIGetNamedChild(v10, 1096045407LL);
  if ( !v11 )
    KeBugCheckEx(0xA5u, 0xEuLL, *v4, 0x4154535FuLL, 0LL);
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( (*(_DWORD *)(v1 + 16) & 0x1000LL) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 32);
    v13 = 0;
LABEL_18:
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v12);
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 )
    AMLIDereferenceHandleEx(v14);
  v15 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v11;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (v15 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v16 = AMLIAsyncEvalObject(v11, v2, 0, 0, (__int64)ACPIBuildCompleteGeneric, a1);
  v13 = v16;
  if ( v16 != 259 )
  {
    v12 = *(_DWORD *)(a1 + 32);
    if ( v16 < 0 )
      *(_DWORD *)(a1 + 48) = v16;
    goto LABEL_18;
  }
LABEL_19:
  AMLIDereferenceHandleEx(v11);
  return v13;
}
