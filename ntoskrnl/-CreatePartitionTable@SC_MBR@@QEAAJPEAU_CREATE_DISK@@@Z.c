/*
 * XREFs of ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140673A40
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140672FE8 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140673F9C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 */

__int64 __fastcall SC_MBR::CreatePartitionTable(SC_MBR *this, struct _CREATE_DISK *a2)
{
  __int64 v4; // rbx
  ULONG Signature; // eax
  __int64 v7; // [rsp+20h] [rbp-D8h] BYREF
  ULONG v8; // [rsp+28h] [rbp-D0h]
  _BYTE v9[180]; // [rsp+2Ch] [rbp-CCh] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = *(_QWORD *)(*(_QWORD *)this + 264LL);
  memset((void *)(v4 + 446), 0, 0x40uLL);
  *(_DWORD *)(v4 + 440) = 0;
  *(_WORD *)(v4 + 510) = -21931;
  Signature = a2->Mbr.Signature;
  v7 = 0LL;
  v8 = Signature;
  return SC_MBR::WritePartitionTable(this, (struct SC_DISK_LAYOUT *)&v7);
}
