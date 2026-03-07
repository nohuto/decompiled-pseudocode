struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  struct VIDMM_RECYCLE_MULTIRANGE *result; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v5; // rbx

  result = (struct VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                *((_QWORD *)this + 1),
                                                0,
                                                *((_QWORD *)a2 + 9),
                                                *((_QWORD *)a2 + 4),
                                                *((_QWORD *)a2 + 5));
  v5 = result;
  if ( result )
  {
    *((_QWORD *)result + 8) = a2;
    *((_QWORD *)result + 9) = a2;
    *((_QWORD *)a2 + 17) = result;
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2, (__int64)result);
    return v5;
  }
  return result;
}
