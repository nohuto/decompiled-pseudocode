/*
 * XREFs of ?EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00094B0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_434c84ae9a7352fc4a510698a96592e3___ @ 0x1C00095B4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_434c84ae9a7352fc4a510698a96592e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed7920f4a40b0df6f785514a67d58840___ @ 0x1C0009628 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ed7920f4a40b0df6f785514a67d5884.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e1217759f9287144a6f85d771fd13d15___ @ 0x1C000969C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e1217759f9287144a6f85d771fd13d1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_83f238ede26de4eb77976c06b83c797f___ @ 0x1C0009714 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_83f238ede26de4eb77976c06b83c797.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0061EBC (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_776a7ee29f7d89c28c468aa6576cc161___ @ 0x1C0269314 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_776a7ee29f7d89c28c468aa6576cc16.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_962f5f364e9edce011b8f57dda910571___ @ 0x1C0269388 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_962f5f364e9edce011b8f57dda91057.c)
 */

char __fastcall DirectComposition::CDropShadowMarshaler::EmitUpdateCommands(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CDropShadowMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed7920f4a40b0df6f785514a67d58840___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e1217759f9287144a6f85d771fd13d15___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_962f5f364e9edce011b8f57dda910571___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_83f238ede26de4eb77976c06b83c797f___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_776a7ee29f7d89c28c468aa6576cc161___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) == 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_434c84ae9a7352fc4a510698a96592e3___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v4;
}
