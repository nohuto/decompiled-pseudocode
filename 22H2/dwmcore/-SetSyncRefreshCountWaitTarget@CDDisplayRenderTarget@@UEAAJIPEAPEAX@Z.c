/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1801E9660
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::SetSyncRefreshCountWaitTarget(
        CDDisplayRenderTarget *this,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx

  if ( *((_QWORD *)this + 5) )
  {
    v3 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180386E68, 2u, -2147467263, 0xE8u, 0LL);
  }
  else
  {
    v3 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180386E68, 2u, -2003304442, 0xECu, 0LL);
  }
  return v3;
}
