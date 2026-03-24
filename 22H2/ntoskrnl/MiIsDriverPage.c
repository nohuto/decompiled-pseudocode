/*
 * XREFs of MiIsDriverPage @ 0x14029CD50
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6B0 (MiProbeLeafPteAccess.c)
 *     MiAddWorkingSetEntries @ 0x140212380 (MiAddWorkingSetEntries.c)
 *     MiRemoveWsleList @ 0x1402E4B70 (MiRemoveWsleList.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14029CDE4 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14029CF18 (MmLockLoadedModuleListShared.c)
 */

_QWORD *__fastcall MiIsDriverPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rax
  unsigned __int64 v6; // r8
  _QWORD *v7; // rbx
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 17;
  v4 = a1 << 25 >> 16;
  MmLockLoadedModuleListShared(&v9, a2, a3, a4);
  v5 = (_QWORD *)qword_140C4CD60;
  if ( qword_140C4CD60 )
  {
    do
    {
      v6 = *(v5 - 23);
      if ( v4 > v6 + (unsigned int)(*((_DWORD *)v5 - 42) - 1) )
      {
        v5 = (_QWORD *)v5[1];
      }
      else
      {
        if ( v4 >= v6 )
          break;
        v5 = (_QWORD *)*v5;
      }
    }
    while ( v5 );
  }
  v7 = v5 - 29;
  if ( !v5 )
    v7 = 0LL;
  MmUnlockLoadedModuleListShared(v9);
  return v7;
}
