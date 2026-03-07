__int64 __fastcall DirectComposition::CGenericMarshaler::SetReferenceProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned __int64 v9; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  __int64 QuotaZInit; // rax
  __int64 v12; // rbx
  bool *v14; // rax
  __int64 *v15; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty((__int64)this, &v15, a3);
  v10 = (NSInstrumentation::CLeakTrackingAllocator *)*((_QWORD *)this + 8);
  if ( v15 == (__int64 *)(*((_QWORD *)this + 7) + 8LL * (_QWORD)v10) )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v10, v9, 0x10uLL, 0x70674344u);
    v12 = QuotaZInit;
    if ( !QuotaZInit )
      return 3221225495LL;
    *(_DWORD *)QuotaZInit = a3;
    *(_WORD *)(QuotaZInit + 4) = 4;
    *(_QWORD *)(QuotaZInit + 8) = 0LL;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericMarshaler *)((char *)this + 56),
            (struct DirectComposition::CGenericProperty *)QuotaZInit) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v12);
      return 3221225495LL;
    }
  }
  else
  {
    v12 = *v15;
    if ( *(_BYTE *)(*v15 + 4) != 4 )
      v12 = 0LL;
    if ( !v12 )
      return 3221225485LL;
  }
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  DirectComposition::CReferenceProperty::FreeValue((DirectComposition::CReferenceProperty *)v12, a2);
  v14 = a5;
  *(_QWORD *)(v12 + 8) = a4;
  *(_BYTE *)(v12 + 5) = 1;
  *v14 = 1;
  return 0LL;
}
