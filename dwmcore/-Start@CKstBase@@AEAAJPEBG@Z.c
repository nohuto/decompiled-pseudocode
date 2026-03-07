__int64 __fastcall CKstBase::Start(CKstBase *this, const unsigned __int16 *a2)
{
  char *Thread; // rax
  HANDLE *v4; // rbx
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v8; // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *ThreadId; // [rsp+48h] [rbp+10h] BYREF

  ThreadId = a2;
  Thread = (char *)CreateThread(0LL, 0LL, CKstBase::RunKernelThreadStatic, this, 4u, (LPDWORD)&ThreadId);
  v4 = (HANDLE *)((char *)this + 16);
  if ( v4 == (HANDLE *)&v8 )
  {
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(Thread);
  }
  else
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v4,
      Thread);
  }
  if ( *v4 )
  {
    SetThreadDescription(*v4, L"DWM Kernel Sensor Thread");
    SetThreadPriority(*v4, 16);
    ResumeThread(*v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)0x8007000ELL,
      dwCreationFlags);
    return 2147942414LL;
  }
}
