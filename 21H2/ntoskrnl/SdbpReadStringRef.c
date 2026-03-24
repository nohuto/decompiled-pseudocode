/*
 * XREFs of SdbpReadStringRef @ 0x140756728
 * Callers:
 *     SdbGetStringTagPtr @ 0x140756580 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140759F40 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14075A3F4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v4, &v9, 4LL) )
      return v9;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v4, v6, v7);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
