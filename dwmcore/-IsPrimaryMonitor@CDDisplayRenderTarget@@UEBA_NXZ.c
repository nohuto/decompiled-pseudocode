/*
 * XREFs of ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801C2730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::IsPrimaryMonitor(CDDisplayRenderTarget *this)
{
  return *((float *)this + 4505) == 0.0 && *((float *)this + 4506) == 0.0;
}
