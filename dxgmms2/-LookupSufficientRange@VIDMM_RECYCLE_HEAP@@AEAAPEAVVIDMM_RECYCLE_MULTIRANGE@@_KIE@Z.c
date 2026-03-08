/*
 * XREFs of ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00971B8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0096EB4 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0AD0 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5734 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F58C0 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5994 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5A08 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F6618 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::LookupSufficientRange(
        VIDMM_RECYCLE_HEAP *this,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  struct _RTL_BALANCED_NODE *v4; // rbx
  int AlignedRange; // eax
  int v7; // eax
  int v8; // eax
  struct VIDMM_RECYCLE_MULTIRANGE *result; // rax
  __int64 v10; // rdx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+30h] [rbp-18h]

  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v11[1] = a3;
  v11[0] = a2;
  v12 = a4;
  while ( v4 )
  {
    AlignedRange = VidMmFindAlignedRange(v11, v4);
    if ( AlignedRange < 0 )
    {
      v4 = v4->Children[0];
    }
    else
    {
      if ( AlignedRange <= 0 )
        break;
      v4 = v4->Children[1];
    }
  }
  if ( v4 )
  {
    if ( LODWORD(v4[1].Children[0]) )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4);
    result = VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
    if ( result )
      return result;
    v10 = 0LL;
LABEL_30:
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v10, v4);
    return 0LL;
  }
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  while ( v4 )
  {
    v7 = VidMmFindAlignedRange(v11, v4);
    if ( v7 < 0 )
    {
      v4 = v4->Children[0];
    }
    else
    {
      if ( v7 <= 0 )
        break;
      v4 = v4->Children[1];
    }
  }
  if ( v4 )
  {
    if ( LODWORD(v4[1].Children[0]) )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4);
    result = VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
    if ( result )
      return result;
    v10 = 1LL;
    goto LABEL_30;
  }
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  while ( v4 )
  {
    v8 = VidMmFindAlignedRange(v11, v4);
    if ( v8 < 0 )
    {
      v4 = v4->Children[0];
    }
    else
    {
      if ( v8 <= 0 )
        break;
      v4 = v4->Children[1];
    }
  }
  if ( !v4 )
    return 0LL;
  if ( LODWORD(v4[1].Children[0]) )
    return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
  VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4);
  result = VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
  if ( !result )
  {
    v10 = 2LL;
    goto LABEL_30;
  }
  return result;
}
