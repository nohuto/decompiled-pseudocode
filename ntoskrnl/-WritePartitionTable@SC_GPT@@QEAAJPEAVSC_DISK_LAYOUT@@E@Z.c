/*
 * XREFs of ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14067250C
 * Callers:
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140671C38 (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140672160 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1406737F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1402B8B70 (RtlComputeCrc32.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140671DE4 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1406738DC (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x140673964 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x14093D390 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14093D4B0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_GPT::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2, char a3)
{
  __int64 v4; // rdx
  __int64 v6; // rbp
  unsigned int v7; // ecx
  int Header; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // r15d
  unsigned int v11; // r11d
  unsigned __int64 v12; // r10
  unsigned int v13; // r15d
  int v14; // r14d
  int v15; // edx
  int v16; // r8d
  unsigned int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rbx
  SIZE_T v23; // r13
  char *v24; // rax
  char *v25; // r14
  __int64 v26; // r9
  __int64 v27; // rcx
  char *v28; // r13
  __int64 v29; // r12
  __int64 v30; // rbx
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int128 v34; // xmm0
  int v35; // eax
  char *v36; // r9
  SC_DISK *v37; // rcx
  unsigned int v38; // edi
  unsigned __int64 v39; // r8
  struct _GUID *v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rbx
  int v51; // [rsp+20h] [rbp-68h]
  int v52; // [rsp+24h] [rbp-64h]
  unsigned __int64 v53; // [rsp+28h] [rbp-60h]
  unsigned __int64 v54; // [rsp+30h] [rbp-58h]
  char *v55; // [rsp+40h] [rbp-48h]
  int v56; // [rsp+90h] [rbp+8h]
  __int64 v57; // [rsp+90h] [rbp+8h]
  unsigned int v59; // [rsp+A8h] [rbp+20h]

  v52 = 0;
  v4 = (__int64)*this;
  v6 = *((_QWORD *)*this + 33);
  if ( !a3 )
  {
    v13 = 2 - ((*(_BYTE *)(v4 + 200) & 1) != 0);
    v14 = 0;
    while ( 1 )
    {
      Header = SC_GPT::ReadHeader(this, v14, (struct GPT_HEADER *)v6);
      if ( Header >= 0 )
        break;
      if ( ++v14 >= v13 )
        return (unsigned int)Header;
    }
    v11 = *(_DWORD *)(v6 + 80);
    v12 = *(_QWORD *)(v6 + 40);
    v15 = *((_DWORD *)*this + 59);
    v51 = *(_DWORD *)(v6 + 84);
    v16 = v15 - 1;
    LODWORD(v4) = -v15;
    v9 = v4 & (v51 * v11 + v16);
    v10 = v9 >> *((_DWORD *)*this + 60);
LABEL_14:
    v17 = *((_DWORD *)a2 + 1);
    v59 = v11;
    v53 = v12;
    if ( v17 > v11 )
      return (unsigned int)-1073741811;
    v18 = 0LL;
    if ( v17 )
    {
      while ( 1 )
      {
        LODWORD(v4) = 18 * v18;
        v19 = *((_QWORD *)a2 + 18 * v18 + 10) - PARTITION_LEGACY_BL_GUID;
        if ( !v19 )
          v19 = *((_QWORD *)a2 + 18 * v18 + 11) - *((_QWORD *)&PARTITION_LEGACY_BL_GUID + 1);
        if ( !v19 )
          break;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v17 )
          goto LABEL_27;
      }
      if ( (_DWORD)v18 != -1 )
      {
        v4 = *((_QWORD *)a2 + 18 * v18 + 8);
        v20 = *((_DWORD *)*this + 59);
        if ( v20 )
          v4 /= (__int64)v20;
        if ( v12 < (unsigned __int64)v10 + v4 + 2 )
          v12 = v10 + v4 + 2;
        v53 = v12;
      }
    }
LABEL_27:
    v21 = *((_QWORD *)*this + 31);
    if ( (*((_DWORD *)*this + 50) & 1) != 0 )
      v22 = v21 - 1;
    else
      v22 = v21 - v10 - 2;
    v54 = v22;
    v23 = v9 + (2 << *((_DWORD *)*this + 60));
    v24 = (char *)SC_ENV::Allocate(v23, v4, v9);
    v25 = v24;
    if ( !v24 )
      return (unsigned int)-1073741670;
    memset(v24, 0, v23);
    v26 = 0LL;
    v56 = 0;
    v27 = 1 << *((_DWORD *)*this + 60);
    v28 = &v25[v23 - v27];
    v55 = &v25[v27];
    if ( *((_DWORD *)a2 + 1) )
    {
      v29 = (__int64)&v25[v27 + 32];
      do
      {
        v30 = 144 * v26;
        v31 = *((_DWORD *)a2 + 36 * v26 + 12);
        if ( v31 )
        {
          if ( v31 == 1 )
          {
            v32 = *(_QWORD *)((char *)a2 + v30 + 80) - *(_QWORD *)&PARTITION_ENTRY_UNUSED_GUID.Data1;
            if ( !v32 )
              v32 = *(_QWORD *)((char *)a2 + v30 + 88) - *(_QWORD *)PARTITION_ENTRY_UNUSED_GUID.Data4;
            if ( !v32 )
            {
LABEL_39:
              v22 = v54;
              goto LABEL_40;
            }
          }
        }
        else if ( !*((_BYTE *)a2 + v30 + 80) )
        {
          goto LABEL_39;
        }
        v40 = (struct _GUID *)((char *)a2 + v30 + 96);
        v41 = *(_QWORD *)&v40->Data1 - *(_QWORD *)&NullGuid.Data1;
        if ( *(_QWORD *)&v40->Data1 == *(_QWORD *)&NullGuid.Data1 )
          v41 = *(_QWORD *)v40->Data4 - *(_QWORD *)NullGuid.Data4;
        if ( !v41 )
        {
          SC_ENV::CreateGuid(v40);
          LODWORD(v26) = v56;
          v40 = (struct _GUID *)((char *)a2 + v30 + 96);
        }
        *(_OWORD *)(v29 - 32) = *(_OWORD *)((char *)a2 + v30 + 80);
        *(struct _GUID *)(v29 - 16) = *v40;
        v42 = *(_QWORD *)((char *)a2 + v30 + 56);
        v43 = *((_DWORD *)*this + 59);
        if ( v43 )
          v42 = (__int64)v42 / v43;
        *(_QWORD *)v29 = v42;
        v44 = *(_QWORD *)((char *)a2 + v30 + 64) - 1LL + *(_QWORD *)((char *)a2 + v30 + 56);
        v45 = *((_DWORD *)*this + 59);
        if ( v45 )
          v44 /= (__int64)v45;
        *(_QWORD *)(v29 + 8) = v44;
        *(_QWORD *)(v29 + 16) = *(_QWORD *)((char *)a2 + v30 + 112);
        *(_OWORD *)(v29 + 24) = *(_OWORD *)((char *)a2 + v30 + 120);
        *(_OWORD *)(v29 + 40) = *(_OWORD *)((char *)a2 + v30 + 136);
        *(_OWORD *)(v29 + 56) = *(_OWORD *)((char *)a2 + v30 + 152);
        *(_OWORD *)(v29 + 72) = *(_OWORD *)((char *)a2 + v30 + 168);
        *(_QWORD *)(v29 + 88) = *(_QWORD *)((char *)a2 + v30 + 184);
        if ( v42 < v53 || (v22 = v54, v44 > v54) )
        {
          Header = -1073741811;
          goto LABEL_67;
        }
        v29 += 128LL;
LABEL_40:
        v26 = (unsigned int)(v26 + 1);
        v56 = v26;
      }
      while ( (unsigned int)v26 < *((_DWORD *)a2 + 1) );
    }
    v33 = *((_QWORD *)a2 + 1) - *(_QWORD *)&NullGuid.Data1;
    if ( !v33 )
      v33 = *((_QWORD *)a2 + 2) - *(_QWORD *)NullGuid.Data4;
    if ( !v33 )
      SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + 8));
    *((_QWORD *)a2 + 4) = (v22 - v53 + 1) << *((_DWORD *)*this + 60);
    *((_DWORD *)a2 + 10) = v59;
    *(_QWORD *)v25 = 0x5452415020494645LL;
    *((_QWORD *)v25 + 5) = v53;
    *((_DWORD *)v25 + 2) = 0x10000;
    *((_DWORD *)v25 + 3) = 92;
    *((_QWORD *)v25 + 4) = v10 + v22 + 1;
    *((_QWORD *)v25 + 3) = 1LL;
    *((_QWORD *)v25 + 6) = v22;
    v34 = *(_OWORD *)((char *)a2 + 8);
    *((_QWORD *)v25 + 9) = v53 - v10;
    *((_DWORD *)v25 + 20) = v59;
    *(_OWORD *)(v25 + 56) = v34;
    *((_DWORD *)v25 + 21) = v51;
    v57 = v10;
    *((_DWORD *)v25 + 22) = RtlComputeCrc32(0, v55, v10 << *((_DWORD *)*this + 60));
    v35 = RtlComputeCrc32(0, v25, 92LL);
    v36 = v25;
    *((_DWORD *)v25 + 4) = v35;
    v37 = *this;
    if ( v53 - v10 == 2 )
    {
      v38 = v10 + 1;
      v39 = 1LL;
      ++v10;
    }
    else
    {
      Header = SC_DISK::WriteSectors(v37, 1u, 1uLL, v25);
      if ( Header < 0 )
      {
LABEL_67:
        SC_ENV::Free(v25);
        return (unsigned int)Header;
      }
      v37 = *this;
      v38 = v10 + 1;
      v39 = *((_QWORD *)v25 + 9);
      v36 = v55;
    }
    Header = SC_DISK::WriteSectors(v37, v10, v39, v36);
    if ( Header >= 0 )
    {
      if ( (*((_DWORD *)*this + 50) & 1) != 0 )
        goto LABEL_65;
      *(_OWORD *)v28 = *(_OWORD *)v25;
      *((_OWORD *)v28 + 1) = *((_OWORD *)v25 + 1);
      *((_OWORD *)v28 + 2) = *((_OWORD *)v25 + 2);
      *((_OWORD *)v28 + 3) = *((_OWORD *)v25 + 3);
      *((_OWORD *)v28 + 4) = *((_OWORD *)v25 + 4);
      *((_QWORD *)v28 + 10) = *((_QWORD *)v25 + 10);
      *((_DWORD *)v28 + 22) = *((_DWORD *)v25 + 22);
      v46 = *((_QWORD *)v28 + 4);
      v47 = *((_QWORD *)v28 + 3);
      v48 = *((unsigned int *)v28 + 3);
      *((_DWORD *)v28 + 4) = 0;
      *((_QWORD *)v28 + 3) = v46;
      v49 = v46 - v57;
      *((_QWORD *)v28 + 9) = v49;
      *((_QWORD *)v28 + 4) = v47;
      *((_DWORD *)v28 + 4) = RtlComputeCrc32(0, v28, v48);
      Header = SC_DISK::WriteSectors(*this, v38, v49, v55);
      if ( Header >= 0 )
      {
LABEL_65:
        *((_DWORD *)*this + 50) &= ~2u;
        if ( a3 )
        {
          memset((void *)v6, 0, 0x200uLL);
          *(_DWORD *)(v6 + 458) = -1;
          *(_DWORD *)(v6 + 440) = v52;
          *(_BYTE *)(v6 + 450) = -18;
          *(_DWORD *)(v6 + 454) = 1;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)*this + 9);
          *(_WORD *)(v6 + 510) = -21931;
          Header = SC_DISK::WriteSectors(*this, 1u, 0LL, 0LL);
        }
      }
    }
    goto LABEL_67;
  }
  if ( *(_WORD *)(v6 + 510) == 0xAA55 )
    v52 = *(_DWORD *)(v6 + 440);
  v7 = *((_DWORD *)a2 + 10);
  if ( v7 <= 0x80 )
  {
    v7 = 128;
    goto LABEL_8;
  }
  if ( v7 <= 0x400 )
  {
LABEL_8:
    v51 = 128;
    v9 = -*(_DWORD *)(v4 + 236) & ((v7 << 7) + *(_DWORD *)(v4 + 236) - 1);
    v10 = v9 >> *(_DWORD *)(v4 + 240);
    v11 = v9 >> 7;
    v12 = v10 + 2;
    goto LABEL_14;
  }
  return (unsigned int)-1073741811;
}
