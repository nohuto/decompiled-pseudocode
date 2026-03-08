/*
 * XREFs of ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140671EE0
 * Callers:
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140672160 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14067351C (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x140671CC8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140671DE4 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x14093D390 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

__int64 __fastcall SC_GPT::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // edi
  int Header; // esi
  unsigned __int8 v8; // r8
  SC_DISK *v9; // rdx
  int v10; // ecx
  unsigned int v11; // ecx
  SIZE_T v12; // rbp
  char *v13; // rax
  char *v14; // rdi
  struct GPT_ENTRY *v15; // r10
  __int64 v17; // rbp
  unsigned int v18; // r11d
  char *v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  struct GPT_ENTRY *v26; // [rsp+40h] [rbp+8h] BYREF

  v26 = 0LL;
  v4 = *((_QWORD *)*this + 33);
  *a2 = 0LL;
  v5 = 2 - ((*((_BYTE *)*this + 200) & 1) != 0);
  v6 = 0;
  do
  {
    Header = SC_GPT::ReadHeader(this, v6, (struct GPT_HEADER *)v4);
    if ( Header >= 0 )
    {
      Header = SC_GPT::ReadEntries((SC_GPT *)this, (struct GPT_HEADER *)v4, &v26);
      if ( Header >= 0 )
        goto LABEL_6;
    }
    ++v6;
  }
  while ( v6 < v5 );
  if ( Header < 0 )
  {
LABEL_13:
    v15 = v26;
    goto LABEL_14;
  }
LABEL_6:
  v9 = *this;
  v10 = *((_DWORD *)*this + 50);
  if ( (v10 & 1) != 0 || v6 || *(_QWORD *)(v4 + 32) == *((_QWORD *)v9 + 31) - 1LL )
    v11 = v10 & 0xFFFFFFFD;
  else
    v11 = v10 | 2;
  *((_DWORD *)v9 + 50) = v11;
  v12 = (unsigned int)(144 * *(_DWORD *)(v4 + 80) + 48);
  v13 = (char *)SC_ENV::Allocate(v12, (unsigned int)v9, v8);
  v14 = v13;
  if ( !v13 )
  {
    Header = -1073741670;
    goto LABEL_13;
  }
  memset(v13, 0, v12);
  v15 = v26;
  v17 = 0LL;
  *(_DWORD *)v14 = 1;
  v18 = 0;
  *(_OWORD *)(v14 + 8) = *(_OWORD *)(v4 + 56);
  *((_QWORD *)v14 + 3) = *(_QWORD *)(v4 + 40) << *((_DWORD *)*this + 60);
  *((_QWORD *)v14 + 4) = (*(_QWORD *)(v4 + 48) - *(_QWORD *)(v4 + 40) + 1LL) << *((_DWORD *)*this + 60);
  for ( *((_DWORD *)v14 + 10) = *(_DWORD *)(v4 + 80); v18 < *(_DWORD *)(v4 + 80); ++v18 )
  {
    v19 = (char *)v15 + 128 * (unsigned __int64)v18;
    v20 = *(_QWORD *)v19 - *(_QWORD *)&NullGuid.Data1;
    if ( *(_QWORD *)v19 == *(_QWORD *)&NullGuid.Data1 )
      v20 = *((_QWORD *)v19 + 1) - *(_QWORD *)NullGuid.Data4;
    if ( v20 )
    {
      v21 = *((_QWORD *)v19 + 4);
      v22 = *((_QWORD *)v19 + 5);
      if ( v21 <= v22 && v21 >= *(_QWORD *)(v4 + 40) && v22 <= *(_QWORD *)(v4 + 48) )
      {
        v23 = 18 * v17;
        *(_DWORD *)&v14[8 * v23 + 48] = 1;
        *(_QWORD *)&v14[8 * v23 + 56] = *((_QWORD *)v19 + 4) << *((_DWORD *)*this + 60);
        v24 = *((_QWORD *)v19 + 5) - *((_QWORD *)v19 + 4) + 1LL;
        v25 = *((_DWORD *)*this + 60);
        *(_DWORD *)&v14[8 * v23 + 72] = -1;
        *(_QWORD *)&v14[8 * v23 + 64] = v24 << v25;
        v17 = (unsigned int)(v17 + 1);
        *(_OWORD *)&v14[8 * v23 + 80] = *(_OWORD *)v19;
        *(_OWORD *)&v14[8 * v23 + 96] = *((_OWORD *)v19 + 1);
        *(_QWORD *)&v14[8 * v23 + 112] = *((_QWORD *)v19 + 6);
        *(_OWORD *)&v14[8 * v23 + 120] = *(_OWORD *)(v19 + 56);
        *(_OWORD *)&v14[8 * v23 + 136] = *(_OWORD *)(v19 + 72);
        *(_OWORD *)&v14[8 * v23 + 152] = *(_OWORD *)(v19 + 88);
        *(_OWORD *)&v14[8 * v23 + 168] = *(_OWORD *)(v19 + 104);
        *(_QWORD *)&v14[8 * v23 + 184] = *((_QWORD *)v19 + 15);
      }
    }
  }
  *((_DWORD *)v14 + 1) = v17;
  *a2 = (struct SC_DISK_LAYOUT *)v14;
LABEL_14:
  if ( v15 )
    SC_ENV::Free(v15);
  return (unsigned int)Header;
}
