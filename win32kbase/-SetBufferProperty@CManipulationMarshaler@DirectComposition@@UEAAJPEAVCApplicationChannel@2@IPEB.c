/*
 * XREFs of ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0251E40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C02516D4 (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0252128 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBufferProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _WORD *a4,
        size_t Size,
        bool *a6)
{
  int v8; // ebx
  int v9; // r8d
  int v10; // r8d
  int v11; // ecx
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int *v14; // r10
  __int64 v15; // r11

  v8 = 0;
  *a6 = 0;
  v9 = a3 - 7;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      if ( Size - 3 <= 0x7C && *a4 )
      {
        memmove((char *)this + 152, a4, Size);
        *((_DWORD *)this + 37) = Size;
        *((_WORD *)this + (Size >> 1) + 76) = 0;
        *a6 = 1;
        *((_DWORD *)this + 4) |= 0x100u;
        return (unsigned int)v8;
      }
      return (unsigned int)-1073741811;
    }
    if ( v10 != 1 || Size != 8 )
      return (unsigned int)-1073741811;
    v11 = *((_DWORD *)a4 + 1);
    v12 = (unsigned int)(v11 - 1);
    if ( v11 )
    {
      if ( v12 < *((_QWORD *)a2 + 10) )
      {
        _mm_lfence();
        v13 = *(_QWORD *)(*((_QWORD *)a2 + 11) * v12 + *((_QWORD *)a2 + 7));
        if ( v13 )
        {
          if ( DirectComposition::CResourceMarshaler::IsDerivedResourceType(*(_DWORD *)(v13 + 36), 45) )
            return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(this, v15, *v14);
        }
      }
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( !a4 || Size != 128 )
      return (unsigned int)-1073741811;
    v8 = CStructDynamicArray<InjectManipulationArgs>::Add((__int64)this + 128, a4);
    if ( v8 >= 0 )
      *a6 = 1;
  }
  return (unsigned int)v8;
}
