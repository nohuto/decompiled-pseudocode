/*
 * XREFs of ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18024DCE4
 * Callers:
 *     ??1CSceneNode@@MEAA@XZ @ 0x18024D5FC (--1CSceneNode@@MEAA@XZ.c)
 *     ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x18024DA84 (-OnChildrenChanged@CSceneNode@@QEAAXXZ.c)
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x18024DB64 (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x18024D7D8 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x18024D8A0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 */

void __fastcall CSceneNode::SetParent(CSceneNode *this, struct CSceneNode *a2)
{
  struct CSceneWorld **v4; // rsi
  __int64 v5; // rcx

  if ( *((struct CSceneNode **)this + 16) != a2 )
  {
    v4 = (struct CSceneWorld **)((char *)a2 + 120);
    if ( !a2 || *((struct CSceneWorld **)this + 15) != *v4 )
      CSceneNode::DehydrateSpectreResources(this);
    *((_QWORD *)this + 16) = a2;
    if ( a2 && *((_QWORD *)a2 + 17) )
    {
      v5 = *((_QWORD *)this + 17);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      else
        CSceneNode::HydrateSpectreResources(this, *v4);
    }
  }
}
