__int64 __fastcall DxgkInitializeBlockList(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  const unsigned __int16 *v7; // r14
  enum _QAI_DRIVERVERSION v8; // r15d
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+38h] [rbp-30h]
  char v15; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 || *(_DWORD *)(v3 + 16) != 1953656900 || *(_DWORD *)(v3 + 20) != 2 )
    return 3221225485LL;
  if ( a3 )
    *a3 = v3 + 5704;
  if ( *(_BYTE *)(v3 + 5696) )
    return 0LL;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 8015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 8015);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 8015);
  v5 = *(_DWORD *)(v3 + 1124);
  v6 = *(_DWORD *)(v3 + 1128);
  v7 = *(const unsigned __int16 **)(v3 + 4840);
  v8 = (unsigned int)DxgkConvertWddmVersionToD3DKMTDriverVersion(a2);
  v9 = CheckKernelBlockList((struct _FDO_CONTEXT *)v3, v5, v6, v7, v8);
  if ( v9 >= 0 )
  {
    v9 = CheckRuntimeBlockList((struct _FDO_CONTEXT *)v3, v5, v6, v7, v8);
    if ( v9 >= 0 )
      *(_BYTE *)(v3 + 5696) = 1;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v13);
  }
  return (unsigned int)v9;
}
