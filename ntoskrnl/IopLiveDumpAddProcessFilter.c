/*
 * XREFs of IopLiveDumpAddProcessFilter @ 0x1409494EC
 * Callers:
 *     IopLiveDumpExcludeProtectedProcesses @ 0x14094B038 (IopLiveDumpExcludeProtectedProcesses.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094AFA4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpLookupProcessFilter @ 0x140A988E4 (IopLiveDumpLookupProcessFilter.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLiveDumpAddProcessFilter(__int64 a1, void *a2, int a3)
{
  PEPROCESS v3; // rsi
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  __int64 v9; // rax
  __int64 *v10; // rdx
  PEPROCESS Process; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  Process = 0LL;
  if ( a2 )
  {
    v7 = PsLookupProcessByProcessId(a2, &Process);
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    v3 = Process;
    ObfDereferenceObject(Process);
    v9 = IopLiveDumpLookupProcessFilter(a1, a2);
    if ( v9 )
    {
      if ( *(PEPROCESS *)(v9 + 24) == v3 )
      {
        if ( a3 <= *(_DWORD *)(v9 + 32) )
          return v7;
      }
      else
      {
        *(_QWORD *)(v9 + 24) = v3;
      }
      *(_DWORD *)(v9 + 32) = a3;
      return v7;
    }
  }
  else
  {
    if ( a3 )
      return (unsigned int)-1073741811;
    v7 = 0;
  }
  Pool2 = ExAllocatePool2(64LL, 40LL, 1886217292LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_QWORD *)(Pool2 + 24) = v3;
    *(_DWORD *)(Pool2 + 32) = a3;
    v10 = *(__int64 **)(a1 + 1208);
    if ( *v10 != a1 + 1200 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = a1 + 1200;
    *(_QWORD *)(Pool2 + 8) = v10;
    *v10 = Pool2;
    *(_QWORD *)(a1 + 1208) = Pool2;
    IopLiveDumpDiscardVirtualAddressRange(a1, Pool2, 40LL);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
