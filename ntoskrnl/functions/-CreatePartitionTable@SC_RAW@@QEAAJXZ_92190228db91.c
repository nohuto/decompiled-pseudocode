__int64 __fastcall SC_RAW::CreatePartitionTable(SC_DISK **this)
{
  __int64 v2; // rbx
  int v3; // edx

  v2 = *((_QWORD *)*this + 33);
  memset((void *)(v2 + 446), 0, 0x40uLL);
  *(_DWORD *)(v2 + 440) = 0;
  *(_WORD *)(v2 + 510) = 0;
  v3 = SC_DISK::WriteSectors(*this, 1, 0LL, 0LL);
  if ( v3 >= 0 && *((_DWORD *)*this + 64) == 1 )
  {
    memset(*((void **)*this + 33), 0, 1 << *((_DWORD *)*this + 60));
    v3 = SC_DISK::WriteSectors(*this, 1, 1LL, 0LL);
    if ( v3 >= 0 && (*((_DWORD *)*this + 50) & 1) == 0 )
      return (unsigned int)SC_DISK::WriteSectors(*this, 1, *((_QWORD *)*this + 31) - 1LL, 0LL);
  }
  return (unsigned int)v3;
}
