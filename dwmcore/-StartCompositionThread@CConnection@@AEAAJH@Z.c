__int64 __fastcall CConnection::StartCompositionThread(HANDLE *this, int nPriority)
{
  HANDLE *v2; // rdi
  HANDLE EventW; // rax
  const char *v6; // r9
  HANDLE *v7; // rbx
  HANDLE v8; // rax
  __int64 v10; // rdx
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD ThreadId; // [rsp+50h] [rbp+8h] BYREF

  ThreadId = 0;
  v2 = this + 6;
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v2,
    EventW);
  if ( (((unsigned __int64)*v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v7 = this + 5;
    v8 = CreateThread(0LL, 0LL, CConnection::CompositionThreadEntryPoint, this, 4u, &ThreadId);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 5,
      v8);
    if ( (((unsigned __int64)this[5] + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      SetThreadDescription(this[5], L"DWM Compositor Thread");
      if ( SetThreadPriority(*v7, nPriority) )
      {
        if ( ResumeThread(*v7) == -1 )
        {
          v10 = 174LL;
        }
        else
        {
          Handles[0] = *v7;
          Handles[1] = *v2;
          if ( WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) != -1 )
            return 0LL;
          v10 = 179LL;
        }
      }
      else
      {
        v10 = 170LL;
      }
    }
    else
    {
      v10 = 165LL;
    }
  }
  else
  {
    v10 = 156LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v10,
           (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
           v6);
}
