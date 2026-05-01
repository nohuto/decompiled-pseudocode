/*
 * XREFs of ?RemoveAll@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x1804898D8
 * Callers:
 *     ??1AppResizeAcc@@EEAA@XZ @ 0x180488FD0 (--1AppResizeAcc@@EEAA@XZ.c)
 *     ??1CDragVisualAcc@@EEAA@XZ @ 0x18049CAA4 (--1CDragVisualAcc@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(
        __int64 a1)
{
  _DWORD *v2; // rcx
  __int64 i; // rdx
  HLOCAL result; // rax

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      if ( v2[6 * i] == 1 )
      {
        v2[6 * i] = 2;
        ++*(_DWORD *)(a1 + 8);
        --*(_DWORD *)a1;
        v2 = *(_DWORD **)(a1 + 16);
      }
    }
    result = LocalFree(v2);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
