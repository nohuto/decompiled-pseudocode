__int64 __fastcall CTokenManager::AddRef(CTokenManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
