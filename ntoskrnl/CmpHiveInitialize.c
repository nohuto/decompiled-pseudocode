/*
 * XREFs of CmpHiveInitialize @ 0x14072CBCC
 * Callers:
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140A19E20 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpInitSecurityCache @ 0x14072CC90 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x14072CCCC (HvHiveInitialize.c)
 */

__int64 (__fastcall *__fastcall CmpHiveInitialize(__int64 a1, _QWORD *a2))(PVOID P)
{
  __int64 v4; // rdx
  __int64 (__fastcall *result)(PVOID); // rax

  memset((void *)a1, 0, 0x12D8uLL);
  HvHiveInitialize(a1);
  *(_DWORD *)(a1 + 4232) = 1;
  *(_QWORD *)(a1 + 4776) = 0LL;
  *(_QWORD *)(a1 + 1616) = a1 + 1608;
  *(_QWORD *)(a1 + 1608) = a1 + 1608;
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_DWORD *)(a1 + 2956) = 16;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 4128) = a1 + 4120;
  *(_QWORD *)(a1 + 4120) = a1 + 4120;
  *(_QWORD *)(a1 + 1632) = a1 + 1624;
  *(_QWORD *)(a1 + 1624) = a1 + 1624;
  CmpInitSecurityCache(a1);
  *(_DWORD *)(a1 + 4800) = v4;
  result = CmpLateUnloadHiveWorker;
  *(_QWORD *)(a1 + 4808) = v4;
  a2[3] = a1;
  a2[2] = CmpLateUnloadHiveWorker;
  *a2 = v4;
  *(_QWORD *)(a1 + 4816) = a2;
  return result;
}
