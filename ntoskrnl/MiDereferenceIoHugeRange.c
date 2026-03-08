/*
 * XREFs of MiDereferenceIoHugeRange @ 0x14061D540
 * Callers:
 *     MiDeleteStaleCacheMaps @ 0x14062B5C0 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiIsPageInIoHugeRangeTransition @ 0x14029BA30 (MiIsPageInIoHugeRangeTransition.c)
 *     MiHugePfnPartition @ 0x14061E808 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 *     MiLockHugePfnInternal @ 0x14061F020 (MiLockHugePfnInternal.c)
 */

__int64 __fastcall MiDereferenceIoHugeRange(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rbp
  int v7; // r8d
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  result = MiIsPageInIoHugeRangeTransition(a1, a2);
  if ( (_DWORD)result )
  {
    v4 = (a1 >> 18) & 0x3FFFFF;
    v5 = (__int64 *)(qword_140C67A70 + 8LL * (unsigned int)v4);
    v8 = *v5;
    v6 = MiHugePfnPartition(&v8);
    MiLockHugePfnInternal(v5, 0LL);
    v7 = (((unsigned __int64)*v5 >> 15) & 0x1FF) - 1;
    v8 = *v5 ^ ((unsigned int)*v5 ^ (v7 << 15)) & 0xFF8000;
    *v5 = v8;
    if ( !v7 )
      MiInsertHugeRangeInList(v6, (unsigned int)v4, 36LL);
    result = qword_140C67A78;
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67A78 + 4 * (((((__int64)v5 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v5 - qword_140C67A70) >> 3) & 0x1F)));
  }
  return result;
}
