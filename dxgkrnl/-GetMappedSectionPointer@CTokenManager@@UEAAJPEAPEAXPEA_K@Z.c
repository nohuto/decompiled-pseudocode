__int64 __fastcall CTokenManager::GetMappedSectionPointer(CTokenManager *this, void **a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  void *v4; // r9

  result = 0LL;
  *a2 = 0LL;
  *a3 = 0LL;
  v4 = (void *)*((_QWORD *)this + 6);
  if ( !v4 )
    return 3221225473LL;
  *a2 = v4;
  *a3 = *((_QWORD *)this + 7);
  return result;
}
