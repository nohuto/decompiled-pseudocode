__int64 __fastcall ADAPTER_RENDER::GetKmdFileVersion(ADAPTER_RENDER *this, union _LARGE_INTEGER *a2)
{
  union _LARGE_INTEGER *v2; // rdi
  bool v3; // zf
  unsigned int v5; // ebx
  __int64 *v7; // rsi
  int DriverFullPath; // eax
  int FileVersion; // eax
  __int64 v10; // rdi
  const wchar_t *v11; // r9
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-18h] BYREF

  v2 = (union _LARGE_INTEGER *)((char *)this + 728);
  v3 = *((_QWORD *)this + 91) == -1LL;
  v12 = 0LL;
  if ( !v3 )
  {
    v5 = 0;
LABEL_3:
    *a2 = *v2;
    goto LABEL_4;
  }
  v7 = (__int64 *)((char *)this + 16);
  DriverFullPath = DpiGetDriverFullPath(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL), &v12);
  v5 = DriverFullPath;
  if ( DriverFullPath < 0 )
  {
    v10 = DriverFullPath;
    WdLogSingleEntry2(2LL, *v7, DriverFullPath);
    v11 = L"DpiGetDriverFullPath failed on adapter %I64d (ntStatus = %I64d).";
  }
  else
  {
    FileVersion = DxgkpGetFileVersion(&v12, v2, 0LL);
    v5 = FileVersion;
    if ( FileVersion >= 0 )
      goto LABEL_3;
    v10 = FileVersion;
    WdLogSingleEntry2(2LL, *v7, FileVersion);
    v11 = L"Failed to get kernel mode driver DLL version on adapter %I64d (ntStatus = %I64d).";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, *v7, v10, 0LL, 0LL, 0LL);
LABEL_4:
  if ( v12.Buffer )
    ExFreePoolWithTag(v12.Buffer, 0);
  return v5;
}
