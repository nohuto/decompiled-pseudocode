/*
 * XREFs of ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140673F3C
 * Callers:
 *     ?IsVbr@SC_DISK@@QEAAEXZ @ 0x14067346C (-IsVbr@SC_DISK@@QEAAEXZ.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140673B58 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MBR_ENTRY::Validate(MBR_ENTRY *this, int a2, unsigned __int64 a3)
{
  int v3; // r11d
  char v4; // al
  char v5; // r9
  unsigned __int64 v6; // r10

  v3 = *((_DWORD *)this + 2);
  v4 = *((_BYTE *)this + 4);
  v5 = 1;
  v6 = (unsigned int)(v3 + a2);
  if ( v4 && v4 != -18 )
  {
    if ( (v5 = 0, v4 != 5) && v4 != 15 || v3 )
    {
      if ( v6 < a3 )
        return *((unsigned int *)this + 3) <= ((3 * a3) >> 1) - v6;
    }
  }
  return v5;
}
