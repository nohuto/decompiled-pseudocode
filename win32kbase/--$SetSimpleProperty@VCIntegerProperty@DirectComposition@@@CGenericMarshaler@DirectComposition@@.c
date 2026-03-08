/*
 * XREFs of ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C0249E6C
 * Callers:
 *     ?SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024B1E0 (-SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C024BA58 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C026F430 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CIntegerProperty>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4)
{
  unsigned __int64 v8; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  __int64 QuotaZInit; // rax
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v13, a2);
  v9 = *(NSInstrumentation::CLeakTrackingAllocator **)(a1 + 64);
  if ( v13 == (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * (_QWORD)v9) )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v9, v8, 0x10uLL, 0x70674344u);
    v11 = QuotaZInit;
    if ( !QuotaZInit )
      return 3221225495LL;
    *(_DWORD *)QuotaZInit = a2;
    *(_WORD *)(QuotaZInit + 4) = 0;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 56),
            (struct DirectComposition::CGenericProperty *)QuotaZInit) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v11);
      return 3221225495LL;
    }
  }
  else
  {
    v11 = *v13;
    if ( *(_BYTE *)(*v13 + 4) )
      v11 = 0LL;
    if ( !v11 )
      return 3221225485LL;
  }
  *(_QWORD *)(v11 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v11 + 5) = 1;
  *a4 = 1;
  return result;
}
