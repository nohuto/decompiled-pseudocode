void __fastcall CWindowNode::~CWindowNode(struct CResource **this)
{
  struct CResource *v2; // rcx

  *this = (struct CResource *)&CWindowNode::`vftable';
  CWindowNode::DiscardGdiSpriteBitmaps((CWindowNode *)this);
  CWindowNode::DiscardFlipExSurfaces((CWindowNode *)this);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[99]);
  this[99] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[109]);
  this[109] = 0LL;
  v2 = this[110];
  if ( v2 )
    (**(void (__fastcall ***)(struct CResource *, __int64))v2)(v2, 1LL);
  ReleaseInterface<CProcessAttribution>(this + 90);
  CPtrArrayBase::Clear((CPtrArrayBase *)(this + 98));
  CPtrArrayBase::Clear((CPtrArrayBase *)(this + 97));
  CVisual::~CVisual((CVisual *)this);
}
