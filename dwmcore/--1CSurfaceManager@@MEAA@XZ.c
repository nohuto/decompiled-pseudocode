void __fastcall CSurfaceManager::~CSurfaceManager(CSurfaceManager *this)
{
  HANDLE *v1; // rdi
  const void *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  struct _RTL_GENERIC_TABLE *v7; // rbx
  PVOID v8; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HANDLE *)((char *)this + 120);
  *((_BYTE *)this + 144) = 1;
  if ( (unsigned __int64)(*((_QWORD *)this + 15) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    SetEvent(*((HANDLE *)this + 16));
    WaitForSingleObject(*v1, 0xFFFFFFFF);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      0LL);
  }
  v3 = (const void *)*((_QWORD *)this + 13);
  if ( v3 )
    UnmapViewOfFile(v3);
  v4 = (char *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  if ( (char *)*v1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(*v1);
  v6 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  v7 = (struct _RTL_GENERIC_TABLE *)((char *)this + 24);
  while ( 1 )
  {
    RestartKey = 0LL;
    v8 = RtlEnumerateGenericTableWithoutSplaying(v7, &RestartKey);
    if ( !v8 )
      break;
    if ( !RtlDeleteElementGenericTable(v7, v8) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
}
