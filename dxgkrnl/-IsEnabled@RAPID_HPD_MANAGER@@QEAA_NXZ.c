bool __fastcall RAPID_HPD_MANAGER::IsEnabled(RAPID_HPD_MANAGER *this)
{
  return *((_BYTE *)this + 32);
}
