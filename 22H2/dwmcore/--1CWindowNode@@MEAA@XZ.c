/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x180035494
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180035450 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800358E8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x1800359A4 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800450D0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowNode::~CWindowNode(struct CResource **this)
{
  struct CResource *v2; // rcx
  __int64 i; // rbp
  struct CResource *v4; // rdx
  __int64 j; // rbp
  struct CResource *v6; // rcx
  struct CResource *v7; // rbx
  __int64 (__fastcall ***v8)(_QWORD); // rcx
  struct CResource *v9; // rbx
  __int64 v10; // rcx
  struct CResource *v11; // rbx

  *this = (struct CResource *)&CWindowNode::`vftable';
  CWindowNode::Detach((CWindowNode *)this);
  v2 = this[90];
  if ( v2 )
  {
    v7 = (struct CResource *)(**(__int64 (__fastcall ***)(struct CResource *))v2)(v2);
    (*(void (__fastcall **)(struct CResource *, struct CResource **))(*(_QWORD *)this[90] + 16LL))(this[90], this);
    CResource::UnRegisterNotifierInternal((CResource *)this, v7);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 188); i = (unsigned int)(i + 1) )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this[91] + i);
    v9 = (struct CResource *)(**v8)(v8);
    v10 = *((_QWORD *)this[91] + i);
    (*(void (__fastcall **)(__int64, struct CResource **))(*(_QWORD *)v10 + 16LL))(v10, this);
    CResource::UnRegisterNotifierInternal((CResource *)this, v9);
  }
  *((_DWORD *)this + 188) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 91, 8LL);
  v4 = this[108];
  if ( v4 )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, v4);
    this[108] = 0LL;
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 224); j = (unsigned int)(j + 1) )
  {
    v11 = this[109];
    CResource::UnRegisterNotifierInternal((CResource *)this, *((struct CResource **)v11 + j));
    *((_QWORD *)v11 + j) = 0LL;
  }
  *((_DWORD *)this + 224) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 109, 8LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[97]);
  this[97] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[107]);
  this[107] = 0LL;
  v6 = this[113];
  if ( v6 )
    (**(void (__fastcall ***)(struct CResource *, __int64))v6)(v6, 1LL);
  ReleaseInterface<CProcessAttribution>(this + 79);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 109);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 91);
  CVisual::~CVisual((CVisual *)this);
}
