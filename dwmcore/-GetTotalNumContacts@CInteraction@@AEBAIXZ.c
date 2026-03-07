__int64 __fastcall CInteraction::GetTotalNumContacts(CInteraction *this)
{
  __int64 result; // rax
  _DWORD *v2; // rcx
  __int64 v3; // rdx

  LODWORD(result) = 0;
  v2 = (_DWORD *)((char *)this + 248);
  v3 = 6LL;
  do
  {
    result = (unsigned int)(*v2++ + result);
    --v3;
  }
  while ( v3 );
  return result;
}
