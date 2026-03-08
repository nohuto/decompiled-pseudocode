/*
 * XREFs of ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x140673AF4
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140672FE8 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14067351C (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140673750 (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1406737F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SC_MBR::Initialize(SC_MBR *this, struct SC_DISK *a2)
{
  __int64 v2; // rax

  *(_QWORD *)this = a2;
  v2 = *((_QWORD *)a2 + 27);
  if ( !v2 || v2 > 1024 )
    *((_QWORD *)a2 + 27) = 1024LL;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 228LL) - 1) > 0xFE )
    *(_DWORD *)(*(_QWORD *)this + 228LL) = 255;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 232LL) - 1) > 0x3E )
    *(_DWORD *)(*(_QWORD *)this + 232LL) = 63;
}
