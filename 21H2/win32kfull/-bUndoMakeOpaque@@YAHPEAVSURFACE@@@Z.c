/*
 * XREFs of ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029DDE0
 * Callers:
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C027B674 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029B748 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029DC68 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bUndoMakeOpaque(struct SURFACE *a1)
{
  unsigned int v2; // ecx
  int v3; // ecx
  __int64 v4; // rax

  v2 = 0;
  if ( *((_WORD *)a1 + 50) == 3 && *((void **)a1 + 6) == gpRedirDev )
  {
    v3 = *((_DWORD *)a1 + 139);
    *((_WORD *)a1 + 50) = *((_WORD *)a1 + 276);
    *((_DWORD *)a1 + 138) = -1;
    *((_DWORD *)a1 + 139) = -1;
    v4 = *((_QWORD *)a1 + 68);
    *((_QWORD *)a1 + 68) = -1LL;
    *((_QWORD *)a1 + 6) = v4;
    *((_DWORD *)a1 + 28) = v3 & 0xFFDFFFFF;
    return 1;
  }
  return v2;
}
