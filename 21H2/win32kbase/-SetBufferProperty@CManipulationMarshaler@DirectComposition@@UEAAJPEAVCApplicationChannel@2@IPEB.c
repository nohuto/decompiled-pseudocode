/*
 * XREFs of ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01E4550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C01E3F58 (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C01E4888 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBufferProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _WORD *a4,
        size_t Size,
        bool *a6)
{
  int v9; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi

  v9 = 0;
  *a6 = 0;
  v10 = a3 - 7;
  if ( v10 )
  {
    v11 = v10 - 2;
    if ( !v11 )
    {
      if ( Size - 3 <= 0x7C && *a4 )
      {
        memmove((char *)this + 152, a4, Size);
        *((_DWORD *)this + 37) = Size;
        *((_WORD *)this + (Size >> 1) + 76) = 0;
        *a6 = 1;
        *((_DWORD *)this + 4) |= 0x100u;
        return (unsigned int)v9;
      }
      return (unsigned int)-1073741811;
    }
    if ( v11 != 1 || Size != 8 )
      return (unsigned int)-1073741811;
    v12 = *((_DWORD *)a4 + 1);
    v13 = (unsigned int)(v12 - 1);
    if ( v12 && v13 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v14 = *(_QWORD *)(v13 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 96LL))(v14, 43LL) )
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(
                               this,
                               a2,
                               *(unsigned int *)a4,
                               v14,
                               a6);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( !a4 || Size != 128 )
      return (unsigned int)-1073741811;
    v9 = CStructDynamicArray<InjectManipulationArgs>::Add((__int64)this + 128, a4);
    if ( v9 >= 0 )
      *a6 = 1;
  }
  return (unsigned int)v9;
}
