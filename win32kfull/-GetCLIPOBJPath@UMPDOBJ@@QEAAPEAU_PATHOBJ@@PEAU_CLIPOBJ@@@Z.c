/*
 * XREFs of ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C014DC28
 * Callers:
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C0150220 (NtGdiCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     EngDeletePath @ 0x1C014D9C0 (EngDeletePath.c)
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C0267E54 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C029B2F0 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 */

struct _PATHOBJ *__fastcall UMPDOBJ::GetCLIPOBJPath(UMPDOBJ *this, struct _CLIPOBJ *a2)
{
  XCLIPOBJ *v3; // rax
  PATHOBJ *v4; // rdi
  void *Path; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 31) )
    return 0LL;
  v3 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(this, a2);
  if ( !v3 )
    return 0LL;
  Path = XCLIPOBJ::ppoGetPath(v3);
  v4 = (PATHOBJ *)Path;
  if ( !Path )
    return 0LL;
  if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 240), &Path, 8u, 0LL) )
  {
    EngDeletePath(v4);
    return 0LL;
  }
  return (struct _PATHOBJ *)Path;
}
