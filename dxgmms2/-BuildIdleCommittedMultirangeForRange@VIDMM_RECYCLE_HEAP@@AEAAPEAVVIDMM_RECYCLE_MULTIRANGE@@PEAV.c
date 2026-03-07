struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  struct VIDMM_RECYCLE_MULTIRANGE *Multirange; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rsi

  Multirange = (struct VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                    *((_QWORD *)this + 1),
                                                    1u,
                                                    *((_QWORD *)a2 + 9),
                                                    *((_QWORD *)a2 + 4),
                                                    *((_QWORD *)a2 + 5));
  if ( !Multirange )
    return 0LL;
  v6 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
         *((_QWORD *)this + 1),
         0,
         *((_QWORD *)a2 + 9),
         *((_QWORD *)a2 + 4),
         *((_QWORD *)a2 + 5));
  v7 = (__int64)v6;
  if ( !v6 )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), Multirange);
    return 0LL;
  }
  *((_QWORD *)Multirange + 8) = a2;
  v6[8] = a2;
  *((_QWORD *)Multirange + 9) = a2;
  v6[9] = a2;
  *((_QWORD *)a2 + 18) = Multirange;
  *((_QWORD *)a2 + 17) = v6;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 1, (__int64)Multirange);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2, v7);
  return Multirange;
}
