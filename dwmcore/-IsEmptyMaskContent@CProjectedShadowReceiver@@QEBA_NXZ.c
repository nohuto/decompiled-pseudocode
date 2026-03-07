bool __fastcall CProjectedShadowReceiver::IsEmptyMaskContent(CProjectedShadowReceiver *this)
{
  struct CBrush *EffectiveMaskBrush; // rax
  bool result; // al
  char v3; // [rsp+30h] [rbp+8h] BYREF

  result = !*((_QWORD *)this + 8)
        || (EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush(this),
            v3 = 1,
            !(*(unsigned __int8 (__fastcall **)(struct CBrush *, _QWORD, char *))(*(_QWORD *)EffectiveMaskBrush + 288LL))(
               EffectiveMaskBrush,
               0LL,
               &v3))
        || v3 != 0;
  return result;
}
