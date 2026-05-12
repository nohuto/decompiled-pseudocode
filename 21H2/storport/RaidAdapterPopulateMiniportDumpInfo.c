/*
 * XREFs of RaidAdapterPopulateMiniportDumpInfo @ 0x1C0078C34
 * Callers:
 *     RaUnitStorageDumpControl @ 0x1C007B500 (RaUnitStorageDumpControl.c)
 * Callees:
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078750 (RaidAdapterGetMiniportDumpInfo.c)
 */

__int64 __fastcall RaidAdapterPopulateMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int MiniportDumpInfo; // eax
  _QWORD *v6; // rcx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = 0;
  P = 0LL;
  if ( !*(_QWORD *)(v3 + 56) )
  {
    if ( !*(_BYTE *)(a1 + 4514) || (*(_DWORD *)(*(_QWORD *)(a1 + 552) + 184LL) & 0x1000) != 0 )
    {
      MiniportDumpInfo = RaidAdapterGetMiniportDumpInfo(a1, a3, a2, &P);
      v6 = P;
      v4 = MiniportDumpInfo;
      if ( MiniportDumpInfo >= 0 )
      {
        if ( !P )
          return v4;
        *(_QWORD *)(v3 + 56) = *((_QWORD *)P + 2);
        *(_QWORD *)(v3 + 128) = v6[2];
      }
      if ( v6 )
        ExFreePoolWithTag(v6, 0x44436152u);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v4;
}
