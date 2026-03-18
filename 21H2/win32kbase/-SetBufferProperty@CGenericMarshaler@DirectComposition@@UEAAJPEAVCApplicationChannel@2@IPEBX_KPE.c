/*
 * XREFs of ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C021FF00
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear @ 0x1C005FAB0 (DirectComposition--Memory--AllocateAndClear.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C0215290 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 *     ?FindProperty@CGenericMarshaler@DirectComposition@@IEAA?AVCPropertyIterator@2@I@Z @ 0x1C021FE40 (-FindProperty@CGenericMarshaler@DirectComposition@@IEAA-AVCPropertyIterator@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericMarshaler::SetBufferProperty(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  char **v9; // rbx
  size_t v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rax
  bool *v14; // rax
  char **v15; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CGenericMarshaler::FindProperty((__int64)this, &v15, a3);
  v9 = v15;
  v10 = Size;
  if ( v15 != (char **)(*((_QWORD *)this + 8) + 8LL * *((_QWORD *)this + 9)) )
  {
    v11 = (__int64)*v15;
    if ( (*v15)[4] != 5 )
      v11 = 0LL;
    if ( !v11 )
      return 3221225485LL;
    if ( *(_QWORD *)(v11 + 8) >= Size )
      goto LABEL_14;
  }
  if ( Size + 24 < Size )
    return 3221225506LL;
  v13 = DirectComposition::Memory::AllocateAndClear(Size + 24, 1885815620, 1);
  v11 = v13;
  if ( v13 )
  {
    *(_DWORD *)v13 = a3;
    *(_WORD *)(v13 + 4) = 5;
    *(_QWORD *)(v13 + 8) = v10;
    *(_QWORD *)(v13 + 16) = 0LL;
    if ( v9 != (char **)(*((_QWORD *)this + 8) + 8LL * *((_QWORD *)this + 9)) )
    {
      if ( *v9 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          *v9);
      *v9 = (char *)v11;
      goto LABEL_14;
    }
    if ( DirectComposition::CGenericPropertyList::push_back(
           (DirectComposition::CGenericMarshaler *)((char *)this + 64),
           (struct DirectComposition::CGenericProperty *)v13) )
    {
LABEL_14:
      memmove((void *)(v11 + 24), a4, v10);
      v14 = a6;
      *(_QWORD *)(v11 + 16) = v10;
      *(_BYTE *)(v11 + 5) = 1;
      *v14 = 1;
      return 0LL;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v11);
  }
  return 3221225495LL;
}
