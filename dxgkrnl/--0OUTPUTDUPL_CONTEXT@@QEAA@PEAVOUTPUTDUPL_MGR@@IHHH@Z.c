OUTPUTDUPL_CONTEXT *__fastcall OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
        OUTPUTDUPL_CONTEXT *this,
        struct OUTPUTDUPL_MGR *a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  HANDLE CurrentProcessId; // rax

  *((_DWORD *)this + 4) = -1;
  *((_QWORD *)this + 3) = PsGetCurrentProcess(this);
  CurrentProcessId = PsGetCurrentProcessId();
  *((_QWORD *)this + 35) = 1LL;
  *((_QWORD *)this + 4) = CurrentProcessId;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 34) = (char *)this + 168;
  *((_DWORD *)this + 80) = a5;
  *((_DWORD *)this + 82) = a6;
  *((_QWORD *)this + 33) = (char *)this + 72;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = a3;
  *((_QWORD *)this + 37) = a2;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 81) = a4;
  memset((char *)this + 72, 0, 0xC0uLL);
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  _InterlockedIncrement(&g_DbgGlobalContextCount);
  return this;
}
