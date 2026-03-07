__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CFloatProperty>(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  unsigned __int64 v7; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  __int64 QuotaZInit; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 *v12; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v12, a2);
  v8 = *(NSInstrumentation::CLeakTrackingAllocator **)(a1 + 64);
  if ( v12 == (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * (_QWORD)v8) )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v8, v7, 0xCuLL, 0x70674344u);
    v10 = QuotaZInit;
    if ( !QuotaZInit )
      return 3221225495LL;
    *(_DWORD *)QuotaZInit = a2;
    *(_WORD *)(QuotaZInit + 4) = 2;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 56),
            (struct DirectComposition::CGenericProperty *)QuotaZInit) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v10);
      return 3221225495LL;
    }
  }
  else
  {
    v10 = *v12;
    if ( *(_BYTE *)(*v12 + 4) != 2 )
      v10 = 0LL;
    if ( !v10 )
      return 3221225485LL;
  }
  *(float *)(v10 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v10 + 5) = 1;
  *a4 = 1;
  return result;
}
