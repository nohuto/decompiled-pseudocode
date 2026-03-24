/*
 * XREFs of MiScanPagefiles @ 0x14033C2FC
 * Callers:
 *     MiWorkingSetManager @ 0x14033BC70 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140277F2C (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x140303F74 (PsReferencePartitionSafe.c)
 *     MiFreePageFileHashPfns @ 0x14033C274 (MiFreePageFileHashPfns.c)
 *     MiSufficientAvailablePages @ 0x14033E480 (MiSufficientAvailablePages.c)
 */

char __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  int v4; // edx
  __int64 i; // r8
  __int64 v6; // rcx
  __int64 v7; // r10

  MiFreePageFileHashPfns(a1);
  v2 = MiSufficientAvailablePages(a1, 1056LL);
  if ( !v2 )
  {
    v3 = *(_DWORD *)(a1 + 6936);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 7600) && !*(_QWORD *)(a1 + 984) )
      {
        v2 = *(_DWORD *)(a1 + 992);
        if ( v2 >= 0x1E )
        {
          v4 = 0;
          for ( i = a1 + 6944; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v4 >= v3 )
            {
              if ( *(_BYTE *)(a1 + 675) == 1 )
              {
                v6 = *(_QWORD *)(a1 + 176);
                *(_BYTE *)(a1 + 675) = 0;
                *(_DWORD *)(a1 + 992) = 0;
                LOBYTE(v2) = PsReferencePartitionSafe(v6);
                if ( (_BYTE)v2 )
                {
                  *(_QWORD *)(a1 + 984) = a1;
                  *(_QWORD *)(a1 + 976) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 960) = v7;
                  LOBYTE(v2) = ExQueueWorkItemToPartition((_QWORD *)(a1 + 960), 2, 0xFFFFFFFF, *(_QWORD *)(a1 + 176));
                }
              }
              return v2;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 992) = ++v2;
        }
      }
    }
  }
  return v2;
}
