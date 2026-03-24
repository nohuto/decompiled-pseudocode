/*
 * XREFs of ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00A54D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00668DC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C00A5510 (-ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

void __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseAllReferences(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned __int64 v3; // rdi
  DirectComposition::CDCompDynamicArrayBase *v4; // rsi
  __int64 v5; // rcx
  size_t v6; // r8
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 28) )
  {
    v3 = 0LL;
    v4 = (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 200);
    do
    {
      v5 = *(_QWORD *)(v3 * *((_QWORD *)v4 + 4) + *(_QWORD *)v4);
      if ( v5 )
      {
        Win32FreePool(v5);
        v6 = *((_QWORD *)v4 + 4);
        Src = 0LL;
        memmove((void *)(*(_QWORD *)v4 + v3 * v6), &Src, v6);
      }
      ++v3;
    }
    while ( v3 < *((_QWORD *)this + 28) );
    *((_DWORD *)this + 60) = 0;
    DirectComposition::CDCompDynamicArrayBase::SetCount(v4, 0LL, 0x6D6C4344u);
  }
  DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
}
