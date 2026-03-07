void __fastcall CTokenManager::SetTokenThreadProcess(CTokenManager *this)
{
  __int64 CurrentProcess; // rdi
  struct DXGGLOBAL *Global; // rax

  CurrentProcess = PsGetCurrentProcess();
  if ( !*((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 96LL))(this);
    Global = DXGGLOBAL::GetGlobal();
    (*(void (**)(void))(*((_QWORD *)Global + 38069) + 416LL))();
    *((_QWORD *)this + 3) = CurrentProcess;
  }
}
