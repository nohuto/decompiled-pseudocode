struct VIDMM_RECYCLE_RANGE *__fastcall VIDMM_RECYCLE_HEAP_MGR::CreateRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_BLOCK *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_RECYCLE_RANGE *v7; // rax
  VIDMM_RECYCLE_RANGE *v8; // rbx

  v7 = (VIDMM_RECYCLE_RANGE *)VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
                                this,
                                *((struct _LOOKASIDE_LIST_EX **)this + 164),
                                (void **)this + 203,
                                (unsigned int *)this + 404);
  v8 = v7;
  if ( v7 )
    VIDMM_RECYCLE_RANGE::Init(v7, a2, a3, a4);
  return v8;
}
