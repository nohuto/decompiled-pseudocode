__int64 __fastcall CResourceStateUpdateSerializer::IncreaseUpdatedContentSize(
        CResourceStateUpdateSerializer *this,
        unsigned int a2,
        int a3)
{
  int v3; // eax
  unsigned int v4; // edx
  int v5; // r8d
  unsigned int v6; // eax
  __int64 result; // rax

  v3 = a2 + a3;
  if ( a2 + a3 < a2 )
    return 3221225621LL;
  v4 = *((_DWORD *)this + 18);
  v5 = -1;
  v6 = v4 + v3;
  if ( v6 >= v4 )
    v5 = v6;
  result = v6 < v4 ? 0xC0000095 : 0;
  *((_DWORD *)this + 18) = v5;
  return result;
}
