/*
 * XREFs of MmRemovePhysicalMemory @ 0x140A2A520
 * Callers:
 *     WheapClearPoison @ 0x140A05870 (WheapClearPoison.c)
 * Callees:
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x1403BDABC (MiFreeContiguousPages.c)
 *     MiReferenceRemovePartition @ 0x140619970 (MiReferenceRemovePartition.c)
 *     MiRemoveBadPages @ 0x140628020 (MiRemoveBadPages.c)
 *     MiReturnBadPagesToBadList @ 0x14062878C (MiReturnBadPagesToBadList.c)
 *     MiAddRangeToPartitionTree @ 0x14065654C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x140656E28 (MiDeletePartitionPageNodes.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140A44BE4 (MiSpecialPurposeMemoryRemoved.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 QuadPart; // rsi
  unsigned __int16 *v3; // rbx
  unsigned __int64 v4; // r14
  int v6; // ecx
  bool v7; // r15
  unsigned __int64 v8; // rsi
  NTSTATUS inserted; // edi
  int ContiguousPages; // eax
  bool v11; // zf
  int v12; // ecx
  unsigned __int64 *v14; // [rsp+70h] [rbp-9h] BYREF
  __int128 v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  LONGLONG v18; // [rsp+E0h] [rbp+67h]
  unsigned __int16 *v19; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int64 v20; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+7Fh] BYREF

  QuadPart = StartAddress->QuadPart;
  v3 = 0LL;
  v4 = (unsigned __int64)NumberOfBytes->QuadPart >> 12;
  v18 = StartAddress->QuadPart;
  v6 = StartAddress->QuadPart;
  v21 = 0LL;
  v17 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v7 = (v18 & 1) != 0 && (v18 & 0xFFF) != 0;
  if ( v7 )
  {
    LODWORD(v18) = v6 & 0xFFFFFFFE;
    QuadPart = v18;
  }
  v8 = QuadPart >> 12;
  if ( v8 >= v4 + v8 )
  {
    inserted = -1073741585;
    goto LABEL_26;
  }
  inserted = MiReferenceRemovePartition(v8, (__int64 *)&v19);
  if ( inserted < 0 )
  {
    v3 = v19;
    goto LABEL_26;
  }
  if ( v7 )
  {
    v3 = v19;
    if ( v19 != MiSystemPartition )
    {
      inserted = -1073741637;
      goto LABEL_26;
    }
    ContiguousPages = MiRemoveBadPages((__int64)v19, v8, v4);
  }
  else
  {
    v3 = v19;
    ContiguousPages = MiFindContiguousPagesEx(
                        (__int64)v19,
                        v8,
                        v4 + v8 - 1,
                        0LL,
                        0,
                        v4,
                        1u,
                        0x80000000,
                        0x80000000,
                        202375168,
                        1,
                        0LL,
                        &v21);
  }
  inserted = ContiguousPages;
  if ( ContiguousPages >= 0 )
  {
    if ( v3 == MiSystemPartition )
    {
      inserted = MiRemovePhysicalMemory(v8, v4, 0x20u);
      if ( inserted < 0 )
      {
LABEL_14:
        if ( v7 )
          MiReturnBadPagesToBadList(v8, v4);
        else
          MiFreeContiguousPages(v8, v4);
        goto LABEL_26;
      }
    }
    else
    {
      if ( !(unsigned int)MiAddRangeToPartitionTree(&v20, v8, v4, 2) )
      {
        inserted = -1073741670;
        goto LABEL_26;
      }
      v11 = *((_BYTE *)v3 + 4) >= 0;
      v14 = &v20;
      v12 = 2055;
      if ( !v11 )
        v12 = 3079;
      v16 = v12;
      v15 = 0LL;
      inserted = MiInsertPartitionPages((__int16 *)v3, (__int64)MiSystemPartition, (__int64)&v14, v4, 0LL);
      if ( inserted < 0 )
        goto LABEL_14;
      if ( (*((_DWORD *)v3 + 1) & 0x80u) != 0 )
        MiSpecialPurposeMemoryRemoved(v3);
    }
    NumberOfBytes->QuadPart = v4 << 12;
  }
LABEL_26:
  MiDeletePartitionPageNodes(&v20);
  if ( v3 )
    PsDereferencePartition(*((_QWORD *)v3 + 25));
  return inserted;
}
