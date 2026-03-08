/*
 * XREFs of CcWriteBehindInternal @ 0x140219990
 * Callers:
 *     CcWriteBehind @ 0x140219768 (CcWriteBehind.c)
 * Callees:
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     CcWriteBehindPreProcess @ 0x140219A70 (CcWriteBehindPreProcess.c)
 *     CcFlushCachePriv @ 0x140219F20 (CcFlushCachePriv.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned __int8 __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v1; // r14
  int v3; // ebx
  unsigned __int8 result; // al
  char v5; // cl
  unsigned __int8 v6; // si
  _DWORD *v7; // r9
  int v8; // r10d
  _DWORD *v9; // rcx
  _QWORD v10[34]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  while ( 1 )
  {
    memset(v10, 0, 0x108uLL);
    v10[14] = v1;
    LOWORD(v10[17]) = 0;
    v10[32] = a1;
    BYTE3(v10[17]) = 1;
    if ( (unsigned int)CcWriteBehindPreProcess(v10) == 1 )
      break;
    CcFlushCachePriv(v10[3], (unsigned int)&CcNoDelay, 1, v10[11], 0, v1, (__int64)v10);
    result = CcWriteBehindPostProcess((__int64)v10, 0);
    v5 = BYTE1(v10[17]);
    v6 = result;
    if ( !result || BYTE1(v10[17]) )
    {
      v7 = *(_DWORD **)(a1 + 144);
      if ( v7 )
        v8 = v7[6];
      else
        v8 = 0;
      result = DbgPrintEx(
                 0x7Fu,
                 3u,
                 "[%04x:%04x]CcWriteBehindInternal: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
                 LODWORD(KeGetCurrentThread()[1].CycleTime),
                 KeGetCurrentThread()[1].CurrentRunTime,
                 result,
                 BYTE1(v10[17]),
                 v7,
                 v8);
      v5 = BYTE1(v10[17]);
    }
    if ( v6 || !v5 )
      return result;
  }
  v9 = *(_DWORD **)(a1 + 144);
  if ( v9 )
    v3 = v9[6];
  return DbgPrintEx(
           0x7Fu,
           3u,
           "[%04x:%04x]CcWriteBehindInternal: WBPreProcess FAILED(%lx): PVCM:%p(vid:%2lx)\n",
           LODWORD(KeGetCurrentThread()[1].CycleTime),
           KeGetCurrentThread()[1].CurrentRunTime,
           1,
           v9,
           v3);
}
