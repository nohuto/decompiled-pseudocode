bool __fastcall CProjectedShadowCaster::IsEmptyMaskContent(CProjectedShadowCaster *this)
{
  CProjectedShadowCaster *v1; // r8
  struct CBrush *EffectiveMaskBrush; // rax
  bool result; // al
  _D3DCOLORVALUE v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+40h] [rbp+8h] BYREF

  result = !*((_QWORD *)this + 8)
        || COERCE_FLOAT(LODWORD(CProjectedShadowCaster::GetColor(this, &v4)->a) & _xmm) < 0.0000011920929
        || (EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(v1),
            v5 = 1,
            !(*(unsigned __int8 (__fastcall **)(struct CBrush *, _QWORD, char *))(*(_QWORD *)EffectiveMaskBrush + 288LL))(
               EffectiveMaskBrush,
               0LL,
               &v5))
        || v5 != 0;
  return result;
}
