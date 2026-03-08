/*
 * XREFs of ?PostPacket@CKernelTransport@@UEAAJPEAUUCE_RDP_HEADER@@PEAX_N@Z @ 0x1800E69D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKernelTransport::PostPacket(
        CKernelTransport *this,
        struct UCE_RDP_HEADER *a2,
        void *a3,
        unsigned __int8 a4)
{
  __int64 v4; // rcx
  int v5; // ebx
  unsigned int v6; // ebx

  if ( *((_DWORD *)a2 + 1) < 0x28u )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x70u, 0LL);
  }
  else
  {
    v5 = NtDCompositionSubmitDWMBatch(*((unsigned int *)a2 + 4), *((_QWORD *)a2 + 3), a3, a4);
    if ( v5 < 0 )
    {
      v6 = v5 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v6, 0x77u, 0LL);
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
