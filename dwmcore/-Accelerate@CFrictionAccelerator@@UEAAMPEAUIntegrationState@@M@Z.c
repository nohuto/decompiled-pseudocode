float __fastcall CFrictionAccelerator::Accelerate(CFrictionAccelerator *this, struct IntegrationState *a2, float a3)
{
  return *((float *)a2 + 2) * *((float *)this + 4);
}
