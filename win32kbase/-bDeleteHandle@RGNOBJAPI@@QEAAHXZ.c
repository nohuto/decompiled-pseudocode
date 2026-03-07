__int64 __fastcall RGNOBJAPI::bDeleteHandle(struct HOBJ__ **this)
{
  __int64 v2; // rax
  struct HOBJ__ *v3; // rcx

  v2 = SGDGetSessionState(this);
  v3 = this[1];
  if ( v3 == *(struct HOBJ__ **)(*(_QWORD *)(v2 + 24) + 6392LL) || HmgRemoveObjectImpl(v3, 1, 0, 0, 4, 0LL) != *this )
    return 0LL;
  this[1] = 0LL;
  return 1LL;
}
