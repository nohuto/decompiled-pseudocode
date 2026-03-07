__int64 __fastcall DirectComposition::CGenericMarshaler::SetBufferProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  char **v10; // rbx
  size_t v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 QuotaZInit; // rax
  bool *v16; // rax
  char **v17; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty((__int64)this, &v17, a3);
  v9 = (NSInstrumentation::CLeakTrackingAllocator *)*((_QWORD *)this + 8);
  v10 = v17;
  v11 = Size;
  v12 = *((_QWORD *)this + 7) + 8LL * (_QWORD)v9;
  if ( v17 != (char **)v12 )
  {
    v13 = (__int64)*v17;
    if ( (*v17)[4] != 5 )
      v13 = 0LL;
    if ( !v13 )
      return 3221225485LL;
    if ( *(_QWORD *)(v13 + 8) >= Size )
      goto LABEL_14;
  }
  if ( Size + 24 < Size )
    return 3221225506LL;
  QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v9, v12, Size + 24, 0x70674344u);
  v13 = QuotaZInit;
  if ( QuotaZInit )
  {
    *(_DWORD *)QuotaZInit = a3;
    *(_WORD *)(QuotaZInit + 4) = 5;
    *(_QWORD *)(QuotaZInit + 8) = v11;
    *(_QWORD *)(QuotaZInit + 16) = 0LL;
    if ( v10 != (char **)(*((_QWORD *)this + 7) + 8LL * *((_QWORD *)this + 8)) )
    {
      if ( *v10 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v10);
      *v10 = (char *)v13;
      goto LABEL_14;
    }
    if ( DirectComposition::CGenericPropertyList::push_back(
           (DirectComposition::CGenericMarshaler *)((char *)this + 56),
           (struct DirectComposition::CGenericProperty *)QuotaZInit) )
    {
LABEL_14:
      memmove((void *)(v13 + 24), a4, v11);
      v16 = a6;
      *(_QWORD *)(v13 + 16) = v11;
      *(_BYTE *)(v13 + 5) = 1;
      *v16 = 1;
      return 0LL;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v13);
  }
  return 3221225495LL;
}
