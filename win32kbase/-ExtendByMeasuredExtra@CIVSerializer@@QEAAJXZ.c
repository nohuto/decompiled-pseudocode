__int64 __fastcall CIVSerializer::ExtendByMeasuredExtra(CIVSerializer *this)
{
  int v1; // eax
  unsigned int v3; // ecx
  _DWORD *v4; // rax
  int v5; // edx

  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    return 0LL;
  v3 = *((_DWORD *)this + 8);
  if ( v1 + v3 >= v3 )
  {
    v4 = (_DWORD *)UserReAllocPool(*((void **)this + 3), v3, v1 + v3, 0x65735649u);
    *((_QWORD *)this + 3) = v4;
    if ( v4 )
    {
      v5 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 8) += v5;
      *((_DWORD *)this + 9) += v5;
      *((_QWORD *)this + 2) = v4 + 4;
      *v4 = *((_DWORD *)this + 8) - 16;
      return 0LL;
    }
  }
  return 3221225495LL;
}
