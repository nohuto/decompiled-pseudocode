/*
 * XREFs of DpiAddTriageAdapterData @ 0x1C00653B8
 * Callers:
 *     DxgkpAddTriageAdapterData @ 0x1C0059878 (DxgkpAddTriageAdapterData.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiAddTriageAdapterData(__int64 a1, __int64 a2, struct _KTRIAGE_DUMP_DATA_ARRAY *a3)
{
  __int64 v3; // rbx
  SIZE_T v5; // r9
  void *v6; // rcx
  SIZE_T v7; // r9
  __int64 v8; // rdx

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    if ( MmIsAddressValid(*(PVOID *)(a1 + 64)) )
    {
      KeAddTriageDumpDataBlock(a3, v3, (PVOID)0x1678, v5);
      v6 = *(void **)(v3 + 5688);
      if ( v6 )
      {
        if ( MmIsAddressValid(v6) )
        {
          v8 = *(_QWORD *)(v3 + 5688);
          if ( (*(_DWORD *)(v8 + 20) & 1) == 0 )
            KeAddTriageDumpDataBlock(a3, v8, (PVOID)0x190, v7);
        }
      }
    }
  }
}
