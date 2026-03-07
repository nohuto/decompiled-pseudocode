__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CCallbackIdProperty>(
        __int64 a1,
        __int64 a2,
        int a3,
        _BYTE *a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 QuotaZInit; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v12, 0xFFFFFFFFLL);
  v7 = *(NSInstrumentation::CLeakTrackingAllocator **)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 56) + 8LL * (_QWORD)v7;
  if ( v12 == (__int64 *)v8 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v7, v8, 0xCuLL, 0x70674344u);
    v10 = QuotaZInit;
    if ( !QuotaZInit )
      return 3221225495LL;
    *(_DWORD *)QuotaZInit = -1;
    *(_WORD *)(QuotaZInit + 4) = 1;
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
    if ( *(_BYTE *)(*v12 + 4) != 1 )
      v10 = 0LL;
    if ( !v10 )
      return 3221225485LL;
  }
  *(_DWORD *)(v10 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v10 + 5) = 1;
  *a4 = 1;
  return result;
}
