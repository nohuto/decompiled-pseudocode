void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(CDrawListEntryBuilder *this)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  void **v4; // rdi
  __int64 v5; // r8
  void *v6; // rsi
  bool v7; // zf
  void **v8; // rdi
  void *v9; // rsi
  void **v10; // rdi
  void *v11; // rsi
  __int64 v12; // rcx
  void **v13; // rdi
  void *v14; // rsi
  __int64 v15; // rcx
  HANDLE v16; // rax
  HANDLE v17; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v19; // rax

  CDrawListEntryBuilder::Reset(this);
  v3 = *((_QWORD *)this + 558);
  if ( v3 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v3);
  v4 = (void **)((char *)this + 4072);
  v5 = (__int64)(*((_QWORD *)this + 510) - *((_QWORD *)this + 509)) >> 1;
  if ( v5 )
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 4072,
      0LL,
      v5,
      v2);
  v6 = *v4;
  v7 = *((_QWORD *)this + 509) == (_QWORD)this + 4096;
  *v4 = 0LL;
  if ( v7 )
    v6 = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  v8 = (void **)((char *)this + 2112);
  if ( (__int64)(*((_QWORD *)this + 265) - *((_QWORD *)this + 264)) >> 4 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 2112,
      0LL);
  v9 = *v8;
  v7 = *((_QWORD *)this + 264) == (_QWORD)this + 2144;
  *v8 = 0LL;
  if ( v7 )
    v9 = 0LL;
  if ( v9 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v9);
  }
  v10 = (void **)((char *)this + 160);
  if ( (__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) >> 4 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 160,
      0LL);
  v11 = *v10;
  v7 = *((_QWORD *)this + 20) == (_QWORD)this + 192;
  *v10 = 0LL;
  if ( v7 )
    v11 = 0LL;
  if ( v11 )
  {
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v11);
  }
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (void **)((char *)this + 88);
  if ( (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3 )
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region((char *)this + 88);
  v14 = *v13;
  v7 = *((_QWORD *)this + 11) == (_QWORD)this + 112;
  *v13 = 0LL;
  if ( v7 )
    v14 = 0LL;
  if ( v14 )
  {
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v14);
  }
  v15 = *((_QWORD *)this + 10);
  if ( v15 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  }
}
