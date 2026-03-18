/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x1407ED0C8
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1407ECFCC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenCompressedDatabase @ 0x140A14498 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     SdbpReadMappedData @ 0x140797F3C (SdbpReadMappedData.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1407ED16C (SdbpValidateAndApplyCompatFlags.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, unsigned int a3)
{
  _QWORD *v6; // rax
  void *v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  v9 = 0LL;
  v10 = 0;
  v6 = AslAlloc(a1, 0x580uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 6) |= 1u;
    *v6 = 0LL;
    v6[1] = a1;
    *((_DWORD *)v6 + 5) = a2;
    if ( (unsigned int)SdbpReadMappedData((__int64)v6, 0, &v9, 0xCu) )
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
