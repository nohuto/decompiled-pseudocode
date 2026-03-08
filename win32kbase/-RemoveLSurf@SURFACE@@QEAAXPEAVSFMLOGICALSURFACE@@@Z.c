/*
 * XREFs of ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C00A6350
 * Callers:
 *     <none>
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00A6424 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00A6464 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __fastcall SURFACE::RemoveLSurf(SURFACE *this, struct SFMLOGICALSURFACE *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v6, (SURFACE *)((char *)this + 624));
  v3 = (_QWORD *)((char *)a2 + 48);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
}
