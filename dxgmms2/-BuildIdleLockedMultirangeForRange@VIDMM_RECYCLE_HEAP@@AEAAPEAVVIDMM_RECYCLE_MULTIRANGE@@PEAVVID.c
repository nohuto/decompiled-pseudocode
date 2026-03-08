/*
 * XREFs of ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5A08
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00971B8 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0097470 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0099D0C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0099DF0 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  struct VIDMM_RECYCLE_MULTIRANGE *Multirange; // rbp
  struct VIDMM_RECYCLE_MULTIRANGE *v5; // rdi
  struct VIDMM_RECYCLE_MULTIRANGE *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // r14

  Multirange = (struct VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
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
    v5 = (struct VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                              *((_QWORD *)this + 1),
                                              1u,
                                              *((_QWORD *)a2 + 9),
                                              *((_QWORD *)a2 + 4),
                                              *((_QWORD *)a2 + 5));
    if ( !v5 )
    {
      v6 = Multirange;
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
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), Multirange);
    if ( !v5 )
      return 0LL;
    v6 = v5;
LABEL_14:
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v6);
    return 0LL;
  }
  *((_QWORD *)Multirange + 8) = a2;
  *((_QWORD *)Multirange + 9) = a2;
  if ( v5 )
  {
    *((_QWORD *)v5 + 8) = a2;
    *((_QWORD *)v5 + 9) = a2;
  }
  v7[8] = a2;
  v7[9] = a2;
  *((_QWORD *)a2 + 19) = Multirange;
  *((_QWORD *)a2 + 18) = v5;
  *((_QWORD *)a2 + 17) = v7;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 0, (__int64)Multirange);
  if ( v5 )
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 1, (__int64)v5);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2, v8);
  return Multirange;
}
