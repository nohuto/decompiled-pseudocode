struct IBitmapRealization *__fastcall CWindowBackgroundTreatment::GetRealizationForEffectInput(
        CWindowBackgroundTreatment *this)
{
  __int64 v1; // rdx
  struct IBitmapRealization *result; // rax

  v1 = *((_QWORD *)this + 10);
  result = 0LL;
  if ( v1 )
    return (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v1 + 8) + 16LL) + v1 + 8);
  return result;
}
