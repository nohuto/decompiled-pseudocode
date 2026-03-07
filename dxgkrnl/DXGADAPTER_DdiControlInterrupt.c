__int64 __fastcall DXGADAPTER_DdiControlInterrupt(
        DXGADAPTER *a1,
        enum _DXGK_INTERRUPT_TYPE a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  return DXGADAPTER::DdiControlInterrupt(a1, a2, a3, a4);
}
