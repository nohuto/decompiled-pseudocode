__int64 __fastcall EPATHOBJ::bCloseFigure(EPATHOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // r8d

  v1 = *((_QWORD *)this + 1);
  if ( !v1 )
    return 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  result = 1LL;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 16);
    if ( (v4 & 8) == 0 )
    {
      *(_DWORD *)(v3 + 16) = v4 | 8;
      ++*((_DWORD *)this + 1);
    }
  }
  *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) |= 1u;
  return result;
}
