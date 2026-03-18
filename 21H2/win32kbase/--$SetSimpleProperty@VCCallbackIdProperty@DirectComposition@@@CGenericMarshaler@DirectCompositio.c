/*
 * XREFs of ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1C02137E8
 * Callers:
 *     ?SetCallbackId@CGenericMarshaler@DirectComposition@@UEAAJIPEA_N@Z @ 0x1C0214CD0 (-SetCallbackId@CGenericMarshaler@DirectComposition@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x1C005FAB0 (DirectComposition--Memory--AllocateAndClear.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C0215290 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C021FE40 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetSimpleProperty<DirectComposition::CCallbackIdProperty>(
        __int64 a1,
        __int64 a2,
        int a3,
        _BYTE *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty(a1, &v10, 0xFFFFFFFFLL);
  if ( v10 == (__int64 *)(*(_QWORD *)(a1 + 64) + 8LL * *(_QWORD *)(a1 + 72)) )
  {
    v7 = DirectComposition::Memory::AllocateAndClear(0xCuLL, 1885815620, 1);
    v8 = v7;
    if ( !v7 )
      return 3221225495LL;
    *(_DWORD *)v7 = -1;
    *(_WORD *)(v7 + 4) = 1;
    if ( !DirectComposition::CGenericPropertyList::push_back(
            (DirectComposition::CGenericPropertyList *)(a1 + 64),
            (struct DirectComposition::CGenericProperty *)v7) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v8);
      return 3221225495LL;
    }
  }
  else
  {
    v8 = *v10;
    if ( *(_BYTE *)(*v10 + 4) != 1 )
      v8 = 0LL;
    if ( !v8 )
      return 3221225485LL;
  }
  *(_DWORD *)(v8 + 8) = a3;
  result = 0LL;
  *(_BYTE *)(v8 + 5) = 1;
  *a4 = 1;
  return result;
}
