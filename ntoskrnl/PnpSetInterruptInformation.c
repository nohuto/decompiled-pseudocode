/*
 * XREFs of PnpSetInterruptInformation @ 0x140855984
 * Callers:
 *     PnpSetDevicePropertyData @ 0x140863B28 (PnpSetDevicePropertyData.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpSetInterruptInformation(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int *Pool2; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rax
  void *v9; // rcx

  Pool2 = (unsigned int *)ExAllocatePool2(256LL, a3 + 4, 1198550608LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = a3;
  memmove(Pool2 + 1, a2, a3);
  v8 = *(_QWORD *)(a1 + 312);
  v9 = *(void **)(v8 + 88);
  *(_QWORD *)(v8 + 88) = v7;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x47706E50u);
  return 0LL;
}
