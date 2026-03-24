/*
 * XREFs of ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BF7B4
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007B500 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079C88 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079E00 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007D644 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  PSLIST_ENTRY Multirange; // rbp
  PSLIST_ENTRY v5; // rdi
  struct VIDMM_RECYCLE_MULTIRANGE *v6; // rdx
  PSLIST_ENTRY v7; // rax
  __int64 v8; // r14

  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                 *((_QWORD *)this + 1),
                 2u,
                 *((_QWORD *)a2 + 9),
                 *((_QWORD *)a2 + 4),
                 *((_QWORD *)a2 + 5));
  if ( !Multirange )
    return 0LL;
  v5 = 0LL;
  if ( (unsigned int)(*(_DWORD *)this - 3) > 3 && (unsigned int)(*(_DWORD *)this - 9) > 1 )
  {
    v5 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
           *((_QWORD *)this + 1),
           1u,
           *((_QWORD *)a2 + 9),
           *((_QWORD *)a2 + 4),
           *((_QWORD *)a2 + 5));
    if ( !v5 )
    {
      v6 = (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
      goto LABEL_14;
    }
  }
  v7 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
         *((_QWORD *)this + 1),
         0,
         *((_QWORD *)a2 + 9),
         *((_QWORD *)a2 + 4),
         *((_QWORD *)a2 + 5));
  v8 = (__int64)v7;
  if ( !v7 )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
      *((VIDMM_RECYCLE_HEAP_MGR **)this + 1),
      (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange);
    if ( !v5 )
      return 0LL;
    v6 = (struct VIDMM_RECYCLE_MULTIRANGE *)v5;
LABEL_14:
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v6);
    return 0LL;
  }
  Multirange[4].Next = (struct _SLIST_ENTRY *)a2;
  *((_QWORD *)&Multirange[4].Next + 1) = a2;
  if ( v5 )
  {
    v5[4].Next = (struct _SLIST_ENTRY *)a2;
    *((_QWORD *)&v5[4].Next + 1) = a2;
  }
  v7[4].Next = (struct _SLIST_ENTRY *)a2;
  *((_QWORD *)&v7[4].Next + 1) = a2;
  *((_QWORD *)a2 + 19) = Multirange;
  *((_QWORD *)a2 + 18) = v5;
  *((_QWORD *)a2 + 17) = v7;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 0LL, (__int64)Multirange);
  if ( v5 )
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 1LL, (__int64)v5);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, v8);
  return (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
}
