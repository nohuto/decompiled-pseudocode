/*
 * XREFs of ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C0250050
 * Callers:
 *     ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C024FE80 (-SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@.c)
 * Callees:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C005C3EC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetSegments(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        const struct D2D1_INK_BEZIER_SEGMENT *a3,
        unsigned int a4,
        bool *a5)
{
  unsigned __int64 v5; // r12
  unsigned int v7; // edi
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rsi
  int v13; // ebp
  const struct D2D1_INK_BEZIER_SEGMENT *v14; // rdi

  v5 = *((_QWORD *)this + 17);
  v7 = a2;
  v8 = a4;
  v9 = a2;
  v10 = a4 + (unsigned __int64)a2;
  if ( v10 < a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = *((_QWORD *)this + 17);
    if ( v5 <= v10 )
      v11 = a4 + (unsigned __int64)a2;
    v12 = 0LL;
    v13 = DirectComposition::CDCompDynamicArrayBase::SetCount(
            (DirectComposition::CInkMarshaler *)((char *)this + 112),
            v11,
            0x6B694344u);
    if ( v13 >= 0 )
    {
      if ( v8 )
      {
        v14 = a3;
        do
        {
          memmove((void *)(*((_QWORD *)this + 14) + *((_QWORD *)this + 18) * (v9 + v12++)), v14, *((_QWORD *)this + 18));
          v14 = (const struct D2D1_INK_BEZIER_SEGMENT *)((char *)v14 + 36);
        }
        while ( v12 < v8 );
        v7 = a2;
      }
      if ( v11 != v5 )
        *((_DWORD *)this + 4) &= ~0x80u;
      if ( *((_DWORD *)this + 38) < v7 )
        v7 = *((_DWORD *)this + 38);
      *((_DWORD *)this + 38) = v7;
      *a5 = 1;
    }
  }
  return (unsigned int)v13;
}
