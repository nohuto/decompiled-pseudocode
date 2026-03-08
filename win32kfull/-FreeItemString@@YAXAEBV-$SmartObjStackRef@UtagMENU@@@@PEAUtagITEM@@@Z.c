/*
 * XREFs of ?FreeItemString@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A0FC8
 * Callers:
 *     MNFreeItem @ 0x1C00A25D0 (MNFreeItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeItemString(__int64 a1, _QWORD *a2)
{
  void *v2; // r8
  __int64 result; // rax

  v2 = (void *)a2[3];
  if ( v2 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)(**(_QWORD **)a1 + 24LL) + 128LL), 0, v2);
  result = *a2;
  *(_QWORD *)(*a2 + 40LL) = 0LL;
  a2[3] = 0LL;
  return result;
}
