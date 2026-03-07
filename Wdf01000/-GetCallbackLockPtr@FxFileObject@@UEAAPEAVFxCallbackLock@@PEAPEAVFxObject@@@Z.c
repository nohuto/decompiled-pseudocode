FxCallbackLock *__fastcall FxFileObject::GetCallbackLockPtr(FxFileObject *this, FxObject **LockObject)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this[-1].m_PkgContext + 82);
  if ( LockObject )
    *LockObject = *(FxObject **)(v2 + 184);
  return *(FxCallbackLock **)(v2 + 176);
}
