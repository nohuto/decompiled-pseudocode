/*
 * XREFs of ?Accelerate@CSpringAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x180107210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CSpringAccelerator::Accelerate(CSpringAccelerator *this, struct IntegrationState *a2, float a3)
{
  return (float)(COERCE_FLOAT(*((_DWORD *)this + 6) ^ _xmm) * *((float *)a2 + 2))
       - (float)((float)(*((float *)a2 + 1) - *((float *)this + 9)) * *((float *)this + 5));
}
