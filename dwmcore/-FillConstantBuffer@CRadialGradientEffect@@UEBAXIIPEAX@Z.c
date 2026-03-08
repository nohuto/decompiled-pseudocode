/*
 * XREFs of ?FillConstantBuffer@CRadialGradientEffect@@UEBAXIIPEAX@Z @ 0x1802B60E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRadialGradientEffect::FillConstantBuffer(
        CRadialGradientEffect *this,
        __int64 a2,
        __int64 a3,
        void *a4)
{
  memcpy_0(a4, (char *)this + 28, (-(__int64)(*((_BYTE *)this + 60) != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32);
}
