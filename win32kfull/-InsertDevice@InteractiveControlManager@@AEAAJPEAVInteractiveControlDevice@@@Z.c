__int64 __fastcall InteractiveControlManager::InsertDevice(InteractiveControlManager *this, void **a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *i; // rdx

  if ( *((_DWORD *)this + 20) >= 5u )
    return 3221225626LL;
  result = InteractiveControlManager::FindDevice(this, 0, *a2, 0LL, 0LL);
  if ( (_DWORD)result != -1073741275 )
    return 3221225485LL;
  v6 = 0LL;
  for ( i = (_QWORD *)((char *)this + 40); *i != v5; ++i )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 5 )
      return result;
  }
  *((_QWORD *)this + v6 + 5) = a2;
  ++*((_DWORD *)this + 20);
  return 0LL;
}
