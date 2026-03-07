__int64 __fastcall SC_DEVICE::ExtractFaultDomainIds(SC_DEVICE *this)
{
  __int64 v2; // r9
  unsigned int v3; // eax

  memset((char *)this + 88, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 22);
  if ( v2 )
  {
    v3 = 4;
    if ( *(_DWORD *)(v2 + 8) < 4u )
      v3 = *(_DWORD *)(v2 + 8);
    memmove((char *)this + 88, (const void *)(v2 + 12), 16LL * v3);
  }
  return 0LL;
}
