/*
 * XREFs of ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C00ABF60
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0186E60 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C00ABFFC (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall SURFREFVIEW::bUnMap(SURFREFVIEW *this)
{
  unsigned int v1; // esi
  __int64 v3; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  v1 = 0;
  if ( *(_QWORD *)this )
  {
    if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6496LL) )
    {
      v5 = *(unsigned int *)(*(_QWORD *)this + 64LL);
      if ( (_DWORD)v5 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)this + 72LL);
        if ( v6 )
        {
          v7 = v6 + v5;
          while ( v6 < v7 )
            v6 += 4096LL;
        }
      }
    }
    v3 = *(_QWORD *)this;
    v1 = 1;
    if ( *(_QWORD *)(*(_QWORD *)this + 248LL) || (*(_DWORD *)(v3 + 116) & 1) != 0 )
    {
      if ( _bittest16((const signed __int16 *)(v3 + 102), 0xBu) )
      {
        KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v3 + 312) + 64LL), 0);
        W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(v3 + 272));
      }
    }
  }
  *(_QWORD *)this = 0LL;
  return v1;
}
