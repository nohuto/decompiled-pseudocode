CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rax

  memset_0(this, 0, 0xC8uLL);
  *((_BYTE *)this + 200) = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(128LL);
  v3 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    v4 = *CurrentThreadWin32Thread;
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 8) )
      {
        *(_QWORD *)this = v4;
        if ( (int)ReferenceW32Thread(*v3) <= 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 85);
      }
    }
  }
  else
  {
    ExInitializeFastOwnerEntry((char *)this + 56);
    ExInitializeFastOwnerEntry((char *)this + 128);
    *((_DWORD *)this + 11) |= 4u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), this, 0LL);
    *((_BYTE *)this + 200) = 1;
  }
  return this;
}
