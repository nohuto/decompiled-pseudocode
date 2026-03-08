/*
 * XREFs of MiIsDriverPage @ 0x1402D38C0
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140269620 (MiProbeLeafPteAccess.c)
 *     MiRemoveWsleList @ 0x1402824E0 (MiRemoveWsleList.c)
 *     MiRemoveWsle @ 0x140325790 (MiRemoveWsle.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x1402280EC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402824A4 (MmUnlockLoadedModuleListShared.c)
 */

__int64 __fastcall MiIsDriverPage(__int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v3 = a1 << 25 >> 16;
  MmLockLoadedModuleListShared(&v9);
  v4 = (_QWORD *)BugCheckParameter3;
  if ( BugCheckParameter3 )
  {
    do
    {
      v5 = *(v4 - 23);
      if ( v3 > v5 + (unsigned int)(*((_DWORD *)v4 - 42) - 1) )
      {
        v4 = (_QWORD *)v4[1];
      }
      else
      {
        if ( v3 >= v5 )
          break;
        v4 = (_QWORD *)*v4;
      }
    }
    while ( v4 );
  }
  v6 = (__int64)(v4 - 29);
  if ( !v4 )
    v6 = 0LL;
  if ( a2 )
  {
    if ( !v6 )
    {
      v6 = qword_140C655F0;
      if ( qword_140C655F0 )
      {
        v8 = *(_QWORD *)(qword_140C655F0 + 48);
        if ( v3 < v8 || v3 > v8 + (unsigned int)(*(_DWORD *)(qword_140C655F0 + 64) - 1) )
          v6 = 0LL;
      }
    }
  }
  MmUnlockLoadedModuleListShared(v9);
  return v6;
}
