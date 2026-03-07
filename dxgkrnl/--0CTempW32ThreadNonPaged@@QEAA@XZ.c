CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rax
  struct DXGGLOBAL *Global; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  memset(this, 0, 0xC8uLL);
  *((_BYTE *)this + 200) = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  v3 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    v4 = *CurrentThreadWin32Thread;
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 8) )
      {
        *(_QWORD *)this = v4;
        Global = DXGGLOBAL::GetGlobal();
        if ( (*(int (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38069) + 8LL))(*v3) <= 1 )
        {
          WdLogSingleEntry1(1LL, 85LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v8,
                v7,
                v9,
                0,
                2,
                -1,
                (__int64)L"newRefCount > 1",
                85LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
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
