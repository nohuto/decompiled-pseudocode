/*
 * XREFs of ?Remove@?$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@QEAA_NAEBQEAUtagHPD_ACTIVE_DEVICE@@@Z @ 0x1C018EE14
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C0194D44 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     <none>
 */

char __fastcall CDynamicArray<tagHPD_ACTIVE_DEVICE *,2003858261>::Remove(__int64 a1, _QWORD *a2)
{
  char v2; // r11
  unsigned int v4; // ecx
  unsigned int v5; // r10d
  __int64 v6; // rdx

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  if ( v4 )
  {
    while ( *a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * v5) )
    {
      if ( ++v5 >= v4 )
        return v2;
    }
    v2 = 1;
    for ( *(_DWORD *)(a1 + 8) = v4 - 1;
          v5 < *(_DWORD *)(a1 + 8);
          *(_QWORD *)(*(_QWORD *)a1 + 8 * v6) = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v5) )
    {
      v6 = v5++;
    }
  }
  return v2;
}
