/*
 * XREFs of HideMouseTrails @ 0x1C0145300
 * Callers:
 *     <none>
 * Callees:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 */

void __fastcall HideMouseTrails(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx
  signed __int32 v4; // edx

  if ( *(int *)(SGDGetUserSessionState(a1) + 15940) > 0 )
  {
    v2 = SGDGetUserSessionState(v1);
    v4 = *(_DWORD *)(SGDGetUserSessionState(v3) + 15936);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v2 + 15940)) < v4 )
      CursorApiRouter::MovePointer(
        gpsi,
        *(HDEV *)(gpDispInfo + 40LL),
        *(_DWORD *)(gpsi + 4960LL),
        *(_DWORD *)(gpsi + 4964LL),
        1u);
  }
}
