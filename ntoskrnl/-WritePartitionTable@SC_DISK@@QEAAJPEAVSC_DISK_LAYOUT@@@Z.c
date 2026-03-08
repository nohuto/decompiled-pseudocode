/*
 * XREFs of ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1406737F8
 * Callers:
 *     IoWritePartitionTable @ 0x14093DCD0 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x14093DE40 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14067250C (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140672FE8 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1406735F0 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x140673AF4 (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140673F9C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 */

__int64 __fastcall SC_DISK::WritePartitionTable(SC_DISK *this, struct SC_DISK_LAYOUT *a2)
{
  int v3; // edx
  bool v4; // zf
  _CREATE_DISK v8; // [rsp+20h] [rbp-28h] BYREF
  SC_DISK *v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)this + 64) == 2;
  memset(&v8.Mbr, 0, 20);
  if ( !v4
    || (v8.PartitionStyle = *(_DWORD *)a2, v3 = SC_DISK::CreatePartitionTable(this, &v8), v3 >= 0)
    && (v3 = SC_DISK::ResetPartitionCache(this), v3 >= 0) )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v4 = *((_DWORD *)this + 64) == 1;
        v9 = this;
        return (unsigned int)SC_GPT::WritePartitionTable(&v9, a2, !v4);
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 64)
        || *((_DWORD *)a2 + 1) == 4
        && *((_BYTE *)a2 + 80) == 0xEE
        && !*((_BYTE *)a2 + 224)
        && !*((_BYTE *)a2 + 368)
        && !*((_BYTE *)a2 + 512) )
      {
        SC_MBR::Initialize((SC_MBR *)&v9, this);
        return (unsigned int)SC_MBR::WritePartitionTable((SC_MBR *)&v9, a2);
      }
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v3;
}
