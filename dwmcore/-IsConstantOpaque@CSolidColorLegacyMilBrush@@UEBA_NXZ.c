/*
 * XREFs of ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x1800EEF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSolidColorLegacyMilBrush::IsConstantOpaque(CSolidColorLegacyMilBrush *this)
{
  return !*((_QWORD *)this + 9) && *((float *)this + 16) == 1.0 && *((float *)this + 27) == 1.0;
}
