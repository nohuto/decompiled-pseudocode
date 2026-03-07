bool __fastcall DMMVIDPNTOPOLOGY::IsConstructed(DMMVIDPNTOPOLOGY *this)
{
  char v2; // al
  char v3; // dl

  v2 = (**((__int64 (__fastcall ***)(char *))this + 1))((char *)this + 8);
  v3 = 0;
  if ( v2 )
    return *((_DWORD *)this + 18) == 2;
  return v3;
}
