/*
 * XREFs of SdbQueryDataEx @ 0x140A4C284
 * Callers:
 *     PiIsDriverBlocked @ 0x14079DF64 (PiIsDriverBlocked.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbTagRefToTagID @ 0x140800B74 (SdbTagRefToTagID.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 */

__int64 __fastcall SdbQueryDataEx(__int64 a1, unsigned int a2, __int64 a3, int a4, void *a5, __int64 a6, __int64 a7)
{
  int v8; // r8d
  int v10[6]; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+74h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  *(_QWORD *)v10 = 0LL;
  v11 = 0;
  LODWORD(a7) = 0;
  if ( (unsigned int)SdbTagRefToTagID(a1, a2, v10, &v11) )
    return SdbQueryDataExTagID(v10[0], v11, v8, a4, a5, a6, (__int64)&a7);
  AslLogCallPrintf(1LL);
  return 87LL;
}
