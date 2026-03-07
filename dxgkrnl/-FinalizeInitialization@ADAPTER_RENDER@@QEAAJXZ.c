__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // edi
  __int64 result; // rax
  const wchar_t *v5; // r9

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    return 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v3 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 171), this, 1);
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, this);
    v5 = L"Adapter 0x%I64x: Failed to create KMD process handle for system process";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v3;
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 848LL))(*((_QWORD *)this + 96));
  v3 = result;
  if ( (int)result < 0 )
  {
    WdLogSingleEntry1(2LL, this);
    v5 = L"Adapter 0x%I64x: Failed to initialize paging process";
    goto LABEL_8;
  }
  return result;
}
