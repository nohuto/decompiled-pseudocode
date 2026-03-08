/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x1800ABDE0
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180096FCC (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1800AB260 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  bool v1; // zf
  CPtrArrayBase *v3; // rcx
  unsigned __int64 Count; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned int v8; // edx

  v1 = *((_BYTE *)this + 890) == 0;
  v3 = (CWindowNode *)((char *)this + 776);
  if ( v1 )
  {
    Count = CPtrArrayBase::GetCount(v3);
    do
      v6 = Count--;
    while ( v6 && !*(_BYTE *)(CPtrArrayBase::operator[](v5, Count) + 140) );
  }
  else
  {
    Count = CPtrArrayBase::GetCount(v3) - 1;
  }
  if ( Count == -1LL || !Count && *((_BYTE *)this + 895) )
    return 0;
  *((_BYTE *)this + 895) = 1;
  CWindowNode::DiscardOldestGdiSpriteBitmaps(this, Count);
  if ( *((_BYTE *)this + 890) )
  {
    v8 = 8;
  }
  else if ( *((_BYTE *)this + 889) )
  {
    *((_BYTE *)this + 888) = 0;
    v8 = 5;
  }
  else
  {
    v8 = 4;
  }
  CVisual::PropagateFlags((__int64)this, v8);
  return 1;
}
