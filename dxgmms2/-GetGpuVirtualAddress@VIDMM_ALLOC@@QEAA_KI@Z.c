__int64 __fastcall VIDMM_ALLOC::GetGpuVirtualAddress(VIDMM_ALLOC *this, int a2)
{
  char *v2; // r8
  char *i; // rcx

  v2 = (char *)this + 128;
  for ( i = (char *)*((_QWORD *)this + 16); ; i = *(char **)i )
  {
    if ( i == v2 )
      return 0LL;
    if ( ((*((_DWORD *)i + 10) >> 4) & 0x3F) == a2 )
      break;
  }
  return *((_QWORD *)i + 9);
}
