/*
 * XREFs of ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140671C38
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140672FE8 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14067250C (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 */

__int64 __fastcall SC_GPT::CreatePartitionTable(SC_GPT *this, struct _CREATE_DISK *a2)
{
  __int128 v4; // xmm0
  ULONG MaxPartitionCount; // eax
  _QWORD v7[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = *(_OWORD *)&a2->Mbr.Signature;
  MaxPartitionCount = a2->Gpt.MaxPartitionCount;
  v7[0] = 1LL;
  *(_OWORD *)&v7[1] = v4;
  LODWORD(v7[5]) = MaxPartitionCount;
  return SC_GPT::WritePartitionTable(this, (struct SC_DISK_LAYOUT *)v7, 1u);
}
