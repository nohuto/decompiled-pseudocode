DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(
        DXGSHAREDRESOURCE *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTER *a3,
        __int64 a4)
{
  int CurrentProcessSessionId; // eax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 14) = -1;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 66;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  *((_QWORD *)this + 10) = a2;
  *((_DWORD *)this + 18) = CurrentProcessSessionId;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 51) = 0;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a2 + 2) + 24LL));
    *((_QWORD *)this + 11) = -1LL;
  }
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  return this;
}
