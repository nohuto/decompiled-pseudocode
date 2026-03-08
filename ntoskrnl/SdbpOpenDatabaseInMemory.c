/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x14079D050
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x14079CFC8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenCompressedDatabase @ 0x140A505A8 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x14079D0F4 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpReadMappedData @ 0x1407A22CC (SdbpReadMappedData.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // rax
  void *v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  v9 = 0LL;
  v10 = 0;
  v6 = AslAlloc(a1, 2688LL);
  v7 = (void *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 24) |= 1u;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = a1;
    *(_DWORD *)(v6 + 20) = a2;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64))SdbpReadMappedData)(
                         v6,
                         0LL,
                         &v9,
                         12LL) )
    {
      if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v7, &v9, a3) )
        return v7;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    ExFreePoolWithTag(v7, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
