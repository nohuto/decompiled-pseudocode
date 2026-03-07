char __fastcall CChannel::IsValidHandle(CChannel *this, unsigned int a2)
{
  __int64 v2; // r10
  char v3; // r8

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  if ( a2 && a2 <= (unsigned __int64)((*((_QWORD *)this + 3) - v2) >> 4) && *(_DWORD *)(v2 + 16LL * (a2 - 1)) )
    return *(_DWORD *)(v2 + 16LL * (a2 - 1) + 4) != 0;
  return v3;
}
