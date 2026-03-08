/*
 * XREFs of ?ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14067476C
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14067351C (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x140673920 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x14093D390 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

__int64 __fastcall SC_RAW::ReadPartitionTable(SC_RAW *this, struct SC_DISK_LAYOUT **a2, unsigned __int8 a3)
{
  unsigned int v4; // edi
  const __m128i *v6; // rsi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  char v10; // r8

  v4 = 0;
  v6 = *(const __m128i **)(*(_QWORD *)this + 264LL);
  *a2 = 0LL;
  v7 = SC_ENV::Allocate(0xC0uLL, (unsigned int)a2, a3);
  v8 = v7;
  if ( v7 )
  {
    memset(v7, 0, 0xC0uLL);
    if ( *(_DWORD *)(*(_QWORD *)this + 224LL) == 11 || v6[31].m128i_i16[7] == -21931 )
    {
      v8[1] = 1;
      v8[2] = 1;
      v8[3] = MBR_HEADER::CheckSum(v6);
      *((_QWORD *)v8 + 7) = 0LL;
      v9 = *(_QWORD *)(*(_QWORD *)this + 248LL) << *(_DWORD *)(*(_QWORD *)this + 240LL);
      v8[18] = -1;
      *((_QWORD *)v8 + 8) = v9;
      *((_WORD *)v8 + 40) = 4;
      *((_BYTE *)v8 + 82) = v10;
      v8[21] = 0;
      *((_QWORD *)v8 + 11) = (unsigned int)v8[2];
      *((_QWORD *)v8 + 12) = 0LL;
    }
    else
    {
      v8[3] = MBR_HEADER::CheckSum(v6);
    }
    *a2 = (struct SC_DISK_LAYOUT *)v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
