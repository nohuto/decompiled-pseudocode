/*
 * XREFs of ?BeginFrame@CKernelTransport@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1800E7A20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKernelTransport::BeginFrame(
        CKernelTransport *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v3 = 0;
  v4 = NtDCompositionBeginFrame(*((_QWORD *)this + 1), a2, a3);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4 | 0x10000000, 0x89u, 0LL);
  }
  return v3;
}
