/*
 * XREFs of ?GetDesc@CHolographicDisplay@@UEAAJPEAUHOLOGRAPHIC_DISPLAY_DESC@@@Z @ 0x1802A4490
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CHolographicDisplay::GetDesc(CHolographicDisplay *this, struct HOLOGRAPHIC_DISPLAY_DESC *a2)
{
  unsigned int v4; // ebx

  if ( a2 )
  {
    AcquireSRWLockShared((PSRWLOCK)this + 7);
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 20);
    *((_QWORD *)a2 + 2) = *(_QWORD *)((char *)this + 36);
    ReleaseSRWLockShared((PSRWLOCK)this + 7);
    return 0;
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0xB4u, 0LL);
  }
  return v4;
}
