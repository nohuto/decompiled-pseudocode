/*
 * XREFs of ?RemoveAll@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEAAXXZ @ 0x1801BF648
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1801B7094 (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ?_FreeBucket@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x1801C55BC (-_FreeBucket@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPP.c)
 */

HLOCAL __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdi
  HLOCAL result; // rax

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_DWORD *)(a1 + 4) )
    {
      do
      {
        CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
          a1,
          *(_QWORD *)(a1 + 16) + 24 * v3);
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *(_DWORD *)(a1 + 4) );
      v2 = *(void **)(a1 + 16);
    }
    result = LocalFree(v2);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
