/*
 * XREFs of ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C0213A5C
 * Callers:
 *     ?SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0214D30 (-SetIntegerProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x1C005FAB0 (DirectComposition--Memory--AllocateAndClear.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C0215290 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C021FE40 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CIntegerProperty>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 *v11; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v11, a2);
  if ( v11 == (__int64 *)(*(_QWORD *)(a1 + 64) + 8LL * *(_QWORD *)(a1 + 72)) )
  {
    v8 = DirectComposition::Memory::AllocateAndClear(0x10uLL, 1885815620, 1);
    v9 = v8;
    if ( !v8 )
      return 3221225495LL;
    *(_DWORD *)v8 = a2;
    *(_WORD *)(v8 + 4) = 0;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 64),
            (struct DirectComposition::CGenericProperty *)v8) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v9);
      return 3221225495LL;
    }
  }
  else
  {
    v9 = *v11;
    if ( *(_BYTE *)(*v11 + 4) )
      v9 = 0LL;
    if ( !v9 )
      return 3221225485LL;
  }
  *(_QWORD *)(v9 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v9 + 5) = 1;
  *a4 = 1;
  return result;
}
