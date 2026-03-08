/*
 * XREFs of ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C014CA9A
 * Callers:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C0267E54 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C028711C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C028756C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C02876B8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     EngCreatePath @ 0x1C0289A20 (EngCreatePath.c)
 *     XEPATHOBJ_vConstructHPATHWrap @ 0x1C0289AB0 (XEPATHOBJ_vConstructHPATHWrap.c)
 * Callees:
 *     <none>
 */

void __fastcall EPATHOBJ::vLock(EPATHOBJ *this, struct HPATH__ *a2)
{
  struct HPATH__ *v3; // rcx
  __int64 v4; // rax

  v3 = a2;
  LOBYTE(a2) = 7;
  v4 = HmgShareLock(v3, a2);
  *((_QWORD *)this + 1) = v4;
  if ( v4 )
  {
    *((_DWORD *)this + 1) = *(_DWORD *)(v4 + 92);
    *(_DWORD *)this = *(_DWORD *)(v4 + 88);
  }
}
