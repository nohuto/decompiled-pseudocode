/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x1C0050550
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00305C8 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x1C0050440 (HMRemoveHandleForObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(__int64 a1)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 v5; // rdx

  --giheCount;
  v2 = gpKernelHandleTable;
  v3 = 3LL * (unsigned int)((a1 - (__int64)qword_1C0294B68) >> 5);
  v4 = (*(_WORD *)(a1 + 26) + 1) & 0x7FFF;
  if ( v4 == 0x7FFF )
    v4 = 1;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)&v2[v3] = 0LL;
  v2[v3 + 2] = 0LL;
  *(_WORD *)(a1 + 26) = v4;
  v5 = (a1 - (__int64)qword_1C0294B68) >> 5;
  if ( (v5 & 1) != 0 )
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v5) = qword_1C0294A90;
    qword_1C0294A90 = v5;
  }
  else
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v5) = qword_1C0294A88;
    qword_1C0294A88 = v5;
  }
  return 1LL;
}
