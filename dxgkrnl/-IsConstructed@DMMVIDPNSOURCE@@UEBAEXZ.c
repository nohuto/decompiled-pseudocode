bool __fastcall DMMVIDPNSOURCE::IsConstructed(DMMVIDPNSOURCE *this)
{
  return *((_DWORD *)this + 6) == 2;
}
