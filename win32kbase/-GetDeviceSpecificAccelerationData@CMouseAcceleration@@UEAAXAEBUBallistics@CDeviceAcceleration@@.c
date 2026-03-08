/*
 * XREFs of ?GetDeviceSpecificAccelerationData@CMouseAcceleration@@UEAAXAEBUBallistics@CDeviceAcceleration@@PEAKPEAPEB_J22@Z @ 0x1C00D6180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseAcceleration::GetDeviceSpecificAccelerationData(
        CMouseAcceleration *this,
        const struct CDeviceAcceleration::Ballistics *a2,
        unsigned int *a3,
        const __int64 **a4,
        const __int64 **a5,
        const __int64 **a6)
{
  *a3 = 5;
  *a4 = (const __int64 *)a2;
  *a5 = (const __int64 *)((char *)a2 + 80);
  *a6 = (const __int64 *)((char *)a2 + 112);
}
