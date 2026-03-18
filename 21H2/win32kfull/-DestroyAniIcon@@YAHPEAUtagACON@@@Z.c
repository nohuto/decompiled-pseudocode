/*
 * XREFs of ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0110F74
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0026524 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

__int64 __fastcall DestroyAniIcon(struct tagACON *a1)
{
  __int64 v2; // rcx
  int v3; // edi
  struct tagCURSOR *v4; // rax

  v2 = *((_QWORD *)a1 + 12);
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)a1 + 22) > 0 )
    {
      do
      {
        v4 = (struct tagCURSOR *)HMAssignmentUnlock(*((_QWORD *)a1 + 12) + 8LL * v3);
        if ( v4 )
          _DestroyCursor(v4, 0);
        ++v3;
      }
      while ( v3 < *((_DWORD *)a1 + 22) );
      v2 = *((_QWORD *)a1 + 12);
    }
    Win32FreePool(v2);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  return 1LL;
}
