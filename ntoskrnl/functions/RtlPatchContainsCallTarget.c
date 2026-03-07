__int64 __fastcall RtlPatchContainsCallTarget(_DWORD *a1)
{
  _DWORD *v1; // rdx
  int i; // r9d

  for ( i = RtlGetHotPatchSize(a1); ; v1 += i * (*v1 & 0xFFFu) + 1 )
  {
    if ( !*v1 )
      return 0LL;
    if ( (*v1 & 0xFC000) == 0x44000 )
      break;
  }
  return 1LL;
}
