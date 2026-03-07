void __fastcall CD3DResourceLeakChecker::~CD3DResourceLeakChecker(CD3DResourceLeakChecker *this)
{
  __int64 v1; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1) )
    {
      DebugBreak();
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
}
