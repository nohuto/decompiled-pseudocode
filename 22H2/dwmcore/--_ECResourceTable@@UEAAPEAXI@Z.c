/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x180033DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800358E8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

CResourceTable *__fastcall CResourceTable::`vector deleting destructor'(CResourceTable *this, char a2)
{
  _QWORD **v3; // rdi
  _QWORD *v5; // rcx
  void *v6; // rcx
  unsigned int v7; // r8d
  _QWORD *v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  void (*v13)(void); // rax

  *(_QWORD *)this = &CResourceTable::`vftable';
  v3 = (_QWORD **)((char *)this + 64);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v5[1] != v3 || (v9 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v9;
    v10 = v5 - 1;
    v9[1] = v3;
    v11 = *v10;
    v12 = (unsigned __int64)(v10 + 1) & -(__int64)(v10 != 0LL);
    v10[1] = v12;
    v13 = *(void (**)(void))(v11 + 8);
    v10[2] = v12;
    v13();
  }
  ReleaseInterface<CProcessAttribution>((char *)this + 56);
  v6 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  operator delete(v6);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x50, v7);
    else
      operator delete(this);
  }
  return this;
}
