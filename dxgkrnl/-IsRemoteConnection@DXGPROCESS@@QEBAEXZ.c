bool __fastcall DXGPROCESS::IsRemoteConnection(DXGPROCESS *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( v1 )
    return (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v1 + 224))(0LL, 0LL, 0LL) != 0;
  return v2;
}
