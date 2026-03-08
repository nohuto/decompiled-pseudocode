/*
 * XREFs of Name @ 0x1C00553B0
 * Callers:
 *     <none>
 * Callees:
 *     MoveObjData @ 0x1C004C164 (MoveObjData.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 */

__int64 __fastcall Name(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  unsigned int NameSpaceObject; // r8d

  v2 = (_QWORD *)(a2 + 64);
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (__int64 *)(a2 + 64),
                      0);
  if ( NameSpaceObject )
  {
    if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
      return 0;
  }
  else
  {
    MoveObjData(*v2 + 64LL, *(_QWORD *)(a2 + 80) + 40LL);
  }
  return NameSpaceObject;
}
