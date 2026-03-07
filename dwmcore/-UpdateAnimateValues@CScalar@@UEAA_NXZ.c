char __fastcall CScalar::UpdateAnimateValues(CScalar *this)
{
  char v1; // di
  unsigned int v2; // esi
  unsigned int v4; // eax

  v1 = 0;
  v2 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    v1 = 1;
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v2) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v2),
        *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v2 + 8),
        18LL,
        (char *)this + 48);
      v4 = *((_DWORD *)this + 8);
      ++v2;
    }
    while ( v2 < v4 );
    if ( v4 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 424LL) + 448LL) |= 2u;
  }
  CBaseAnimation::UnregisterAnimateResource((CScalar *)((char *)this - 64));
  return v1;
}
