__int64 __fastcall EngFileIoControl(void *a1, ULONG a2, void *a3, ULONG a4, PVOID a5, ULONG a6, _DWORD *a7)
{
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+38h] [rbp-30h]
  struct _IO_STATUS_BLOCK v10; // [rsp+50h] [rbp-18h] BYREF

  v10 = 0LL;
  result = CtxDeviceIoControlFile(a1, a2, a3, a4, a5, a6, v8, v9, &v10);
  *a7 = v10.Information;
  return result;
}
