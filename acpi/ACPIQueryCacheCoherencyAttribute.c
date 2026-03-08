/*
 * XREFs of ACPIQueryCacheCoherencyAttribute @ 0x1C0081C08
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C007E480 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C002F068 (ACPIInternalSetFlags.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIQueryCacheCoherencyAttribute(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  signed __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( _bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u) )
    return 0;
  v4 = ACPIInternalSetFlags((void *)(BugCheckParameter2 + 1008), 0x1000000uLL);
  if ( (v4 & v5) != 0 )
    return 0;
  v6 = AMLIGetNamedChild(*(_QWORD **)(BugCheckParameter2 + 760), 1094927199);
  if ( !v6 )
  {
    *(_DWORD *)(BugCheckParameter2 + 940) = 1;
    return 0;
  }
  v2 = AMLIEvalNameSpaceObject(v6, (__int64)&v7, 0, 0LL);
  if ( v2 >= 0 )
  {
    if ( WORD1(v7) != 1 )
      KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 760), WORD1(v7));
    if ( (v8 & 1) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 940) = 2;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 940) = 3;
      KeReportCacheIncoherentDevice();
    }
    AMLIFreeDataBuffs((__int64)&v7);
  }
  return (unsigned int)v2;
}
