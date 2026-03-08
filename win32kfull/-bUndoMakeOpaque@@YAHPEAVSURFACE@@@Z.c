/*
 * XREFs of ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8F5C
 * Callers:
 *     ??0REDIRDEVDCOPEN@@QEAA@PEAVXDCOBJ@@@Z @ 0x1C02A67B4 (--0REDIRDEVDCOPEN@@QEAA@PEAVXDCOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A6824 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A8DD8 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bUndoMakeOpaque(HDEV *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  Gre::Base *v4; // rcx
  HDEV v5; // rdx
  int v6; // eax

  v2 = 0;
  v3 = SGDGetSessionState(a1);
  if ( *((_WORD *)a1 + 50) == 3 && a1[6] == *(HDEV *)(*(_QWORD *)(v3 + 32) + 23376LL) )
  {
    Gre::Base::Globals(v4);
    v5 = a1[68];
    *((_WORD *)a1 + 50) = *((_WORD *)a1 + 276);
    v6 = *((_DWORD *)a1 + 139);
    *((_DWORD *)a1 + 139) = -1;
    *((_DWORD *)a1 + 138) = -1;
    *((_DWORD *)a1 + 28) = v6;
    SURFACE::hdev((SURFACE *)a1, v5);
    a1[68] = (HDEV)-1LL;
    v2 = 1;
    *((_DWORD *)a1 + 28) &= ~0x200000u;
  }
  return v2;
}
