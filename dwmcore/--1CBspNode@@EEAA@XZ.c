/*
 * XREFs of ??1CBspNode@@EEAA@XZ @ 0x180256068
 * Callers:
 *     ??_GCBspNode@@EEAAPEAXI@Z @ 0x180256110 (--_GCBspNode@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@VCBspNode@@@@YAXAEAPEAVCBspNode@@@Z @ 0x1801D4668 (--$ReleaseInterface@VCBspNode@@@@YAXAEAPEAVCBspNode@@@Z.c)
 */

void __fastcall CBspNode::~CBspNode(CBspNode *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  void *v4; // rcx

  *(_QWORD *)this = &CBspNode::`vftable';
  ReleaseInterface<CBspNode>((__int64 *)this + 2);
  ReleaseInterface<CBspNode>((__int64 *)this + 3);
  v2 = (_QWORD *)*((_QWORD *)this + 5);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i != v2; ++i )
  {
    if ( *i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
  }
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 6) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
