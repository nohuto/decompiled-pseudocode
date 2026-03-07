__int64 __fastcall CSaturationEffect::SetD2DEffectProperties(CSaturationEffect *this, struct ID2D1Effect *a2)
{
  return (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           0LL,
           0LL,
           (char *)this + 176,
           4);
}
