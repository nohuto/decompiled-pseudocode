/*
 * XREFs of ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0079B20
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007B500 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C00742DC (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0074C60 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079C88 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079E00 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A0C8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007D644 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0086784 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BF4CC (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(
        VIDMM_RECYCLE_HEAP_MGR **this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2,
        struct VIDMM_RECYCLE_MULTIRANGE *a3,
        __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned int v11; // r14d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  struct VIDMM_RECYCLE_MULTIRANGE *v14; // r8
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  int v16; // edx
  int v17; // edx
  __int64 v18; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v20; // r13
  struct VIDMM_RECYCLE_RANGE *v21; // rsi
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v23; // rbx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rdx

  v4 = *((_QWORD *)a3 + 4);
  v6 = *((_QWORD *)a3 + 5);
  v8 = *((_QWORD *)a2 + 4);
  v9 = *((_QWORD *)a2 + 5);
  v11 = *((_DWORD *)a2 + 22);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, v11, a2, a4);
  if ( v4 > v8 )
  {
    if ( v6 >= v9 )
    {
      v13 = *((_QWORD *)a2 + 4);
      v12 = v4;
      goto LABEL_4;
    }
    v18 = *((_QWORD *)a2 + 5);
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)a3 + 9));
    v20 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 9);
    v21 = NextRange;
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)a2, *((_QWORD *)a2 + 4), v4);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v11, a2);
    Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                               this[1],
                                               *((unsigned int *)a2 + 54),
                                               *((_QWORD *)a2 + 10),
                                               v6,
                                               v18);
    v23 = Multirange;
    if ( Multirange )
    {
      *((_QWORD *)Multirange + 8) = v21;
      *((_QWORD *)Multirange + 9) = v20;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
      v14 = v23;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v24 = *((_DWORD *)v21 + 16);
      if ( v24 )
      {
        v25 = v24 - 4;
        if ( v25 )
        {
          if ( v25 != 1 )
            goto LABEL_28;
          v26 = 1LL;
        }
        else
        {
          v26 = 0LL;
        }
      }
      else
      {
        v26 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v26, v21);
LABEL_28:
      if ( v21 == v20 )
        return;
      v21 = VIDMM_RECYCLE_RANGE::GetNextRange(v21);
    }
  }
  if ( v6 < v9 )
  {
    v12 = *((_QWORD *)a2 + 5);
    v13 = v6;
LABEL_4:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)a2, v13, v12);
    v14 = a2;
LABEL_5:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v11, v14);
    return;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v16 = *((_DWORD *)a2 + 54);
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
          *((_QWORD *)i + 19) = 0LL;
      }
      else
      {
        *((_QWORD *)i + 18) = 0LL;
      }
    }
    else
    {
      *((_QWORD *)i + 17) = 0LL;
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], a2);
}
