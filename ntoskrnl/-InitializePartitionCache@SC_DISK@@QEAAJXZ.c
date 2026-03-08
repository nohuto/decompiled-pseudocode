/*
 * XREFs of ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x140673424
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14093D4C8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1406735F0 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x14093D390 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

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
