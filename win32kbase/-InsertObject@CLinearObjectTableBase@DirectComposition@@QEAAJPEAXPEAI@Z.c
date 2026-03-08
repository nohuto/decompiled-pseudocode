/*
 * XREFs of ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C0069E6C
 * Callers:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0069E1C (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?InsertChannel@CChannelGroup@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C00BB858 (-InsertChannel@CChannelGroup@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0069F28 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CLinearObjectTableBase::InsertObject(
        DirectComposition::CLinearObjectTableBase *this,
        void *a2,
        unsigned int *a3)
{
  int v4; // esi
  unsigned __int64 v5; // rcx
  unsigned __int64 v8; // rdi
  size_t v9; // r8
  unsigned __int64 i; // rax
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 3);
  if ( *((_QWORD *)this + 5) < v5 )
  {
    v8 = *((_QWORD *)this + 6);
    for ( i = v8 * *((_QWORD *)this + 4); *(_QWORD *)(i + *(_QWORD *)this); i = v8 * *((_QWORD *)this + 4) )
      v8 = (v8 + 1) % v5;
    *((_QWORD *)this + 6) = (v8 + 1) % v5;
    goto LABEL_3;
  }
  v8 = v5;
  v4 = DirectComposition::CDCompDynamicArrayBase::Grow(this, 1uLL, 0x746C4344u);
  if ( v4 >= 0 )
  {
LABEL_3:
    v9 = *((_QWORD *)this + 4);
    Src = a2;
    memmove((void *)(*(_QWORD *)this + v8 * v9), &Src, v9);
    *a3 = v8 + 1;
    ++*((_QWORD *)this + 5);
  }
  return (unsigned int)v4;
}
