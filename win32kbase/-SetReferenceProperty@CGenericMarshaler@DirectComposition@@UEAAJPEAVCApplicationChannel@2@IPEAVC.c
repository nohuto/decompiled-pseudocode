/*
 * XREFs of ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026F620
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C024BA58 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C026F430 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 *     ?FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026F460 (-FreeValue@CReferenceProperty@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

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
