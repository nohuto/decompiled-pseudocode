/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0148170
 * Callers:
 *     <none>
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C00D0380 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  v1 = 3LL * (unsigned int)((a1 - qword_1C0294B68) >> 5);
  v2 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((a1 - qword_1C0294B68) >> 5));
  if ( *(_DWORD *)(v2 + 8) )
    *(_DWORD *)(v2 + 8) = 0;
  HMDestroyUnlockedObject(a1, v1, v2);
}
