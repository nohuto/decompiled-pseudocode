/*
 * XREFs of PspAssignSiloSystemRootPath @ 0x1409A99E0
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x1402FEB00 (PsDereferenceSiloContext.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PsInsertSiloContext @ 0x140738510 (PsInsertSiloContext.c)
 *     PsCreateSiloContext @ 0x140738810 (PsCreateSiloContext.c)
 */

__int64 __fastcall PspAssignSiloSystemRootPath(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rdx
  _WORD *v5; // rcx
  __int64 result; // rax
  _WORD *v7; // rdi
  void *v8; // rcx
  unsigned int inserted; // ebx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v3 = *a2;
  if ( (unsigned int)v3 < 8 )
    return 3221225485LL;
  if ( (unsigned __int64)(v3 - 2) > 0x208 )
    return 3221225485LL;
  v5 = (_WORD *)*((_QWORD *)a2 + 1);
  if ( (unsigned __int16)(*v5 - 65) > 0x19u
    || v5[1] != 58
    || v5[2] != 92
    || v5[((unsigned __int64)(unsigned int)v3 >> 1) - 1] == 92 )
  {
    return 3221225485LL;
  }
  result = PsCreateSiloContext(a1, (unsigned int)(v3 + 16), 1, 0LL, &v10);
  if ( (int)result >= 0 )
  {
    v7 = (_WORD *)v10;
    v8 = (void *)(v10 + 16);
    *(_QWORD *)(v10 + 8) = v10 + 16;
    *v7 = *a2;
    v7[1] = *a2;
    memmove(v8, *((const void **)a2 + 1), *a2);
    inserted = PsInsertSiloContext(a1, PsSystemRootSiloContextSlot, (__int64)v7);
    PsDereferenceSiloContext(v7);
    return inserted;
  }
  return result;
}
