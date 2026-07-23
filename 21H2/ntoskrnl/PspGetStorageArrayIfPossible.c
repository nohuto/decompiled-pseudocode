/*
 * XREFs of PspGetStorageArrayIfPossible @ 0x1402A5448
 * Callers:
 *     PspGetStorageArray @ 0x1406C4594 (PspGetStorageArray.c)
 *     PspStorageRemoveObject @ 0x14090F13C (PspStorageRemoveObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetStorageArrayIfPossible(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 v5; // rax

  if ( a2 < 0x20 )
  {
    *a4 = a1;
LABEL_3:
    *a3 = a2;
    return 0LL;
  }
  a2 -= 32;
  if ( a2 >= 0x100 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 512);
  if ( v5 )
  {
    *a4 = v5;
    goto LABEL_3;
  }
  return 3221226021LL;
}
