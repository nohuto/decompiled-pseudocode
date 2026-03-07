__int64 __fastcall SC_DISK::InitializePartitionCache(SC_DISK *this, unsigned int a2, unsigned __int8 a3)
{
  void *v4; // rax

  v4 = SC_ENV::Allocate(1 << *((_DWORD *)this + 60), a2, a3);
  *((_QWORD *)this + 33) = v4;
  if ( v4 )
    return SC_DISK::ResetPartitionCache(this);
  else
    return 3221225626LL;
}
