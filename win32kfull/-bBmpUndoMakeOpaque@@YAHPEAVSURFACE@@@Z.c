/*
 * XREFs of ?bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A56DC
 * Callers:
 *     ??0BMPDEVDCOPEN@@QEAA@PEAVXDCOBJ@@@Z @ 0x1C02A3914 (--0BMPDEVDCOPEN@@QEAA@PEAVXDCOBJ@@@Z.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3984 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A5A50 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bBmpUndoMakeOpaque(HDEV *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  HDEV v4; // rdx
  unsigned int v5; // eax
  int v6; // eax

  v2 = 0;
  v3 = SGDGetSessionState(a1);
  if ( *((_WORD *)a1 + 50) == 3 && a1[6] == *(HDEV *)(*(_QWORD *)(v3 + 32) + 8608LL) )
  {
    v4 = a1[68];
    *((_WORD *)a1 + 50) = *((_WORD *)a1 + 276);
    v5 = (_DWORD)a1[14] & 0xFFFC7A10;
    *((_DWORD *)a1 + 138) = -1;
    v6 = *((_DWORD *)a1 + 139) | v5;
    *((_DWORD *)a1 + 139) = -1;
    *((_DWORD *)a1 + 28) = v6;
    SURFACE::hdev((SURFACE *)a1, v4);
    a1[68] = (HDEV)-1LL;
    return 1;
  }
  return v2;
}
