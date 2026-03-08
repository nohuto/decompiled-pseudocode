/*
 * XREFs of SysMmTestCreatePhysicalObjectForExistingMdl @ 0x1C00717D0
 * Callers:
 *     <none>
 * Callees:
 *     SmmCreatePhysicalObject @ 0x1C00130BC (SmmCreatePhysicalObject.c)
 */

__int64 __fastcall SysMmTestCreatePhysicalObjectForExistingMdl(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR **a4,
        ULONG_PTR **a5)
{
  int v6; // r8d
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a2 + 40);
  v8 = a2;
  return SmmCreatePhysicalObject(a1, 2, v6, (int)&v8, 3, 1, a3, 9, a4, a5);
}
