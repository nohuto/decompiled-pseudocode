/*
 * XREFs of KiSetSpecCtrlNmi @ 0x140423CD0
 * Callers:
 *     KiNmiInterruptStart @ 0x14042BF80 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140430280 (KiMcheckAbort.c)
 * Callees:
 *     sub_140423E32 @ 0x140423E32 (sub_140423E32.c)
 */

__int64 __fastcall KiSetSpecCtrlNmi()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( !KeGetPcr()->Prcb.BpbKernelSpecCtrl
    || (v1 = __readmsr(0x48u),
        *(_DWORD *)(v0 + 192) = v1,
        LOWORD(v1) = KeGetPcr()->Prcb.BpbKernelSpecCtrl,
        v2 = 72LL,
        __writemsr(0x48u, (unsigned __int16)v1),
        (v1 & 1) == 0) )
  {
    if ( (KeGetPcr()->Prcb.BpbFeatures & 2) == 0 )
      JUMPOUT(0x140423E56LL);
    v2 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  sub_140423E32(v2, 0LL);
  return sub_140423D24();
}
