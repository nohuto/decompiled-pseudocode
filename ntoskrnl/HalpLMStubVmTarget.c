/*
 * XREFs of HalpLMStubVmTarget @ 0x140411D46
 * Callers:
 *     HalpLMStubForVM @ 0x140411C80 (HalpLMStubForVM.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall HalpLMStubVmTarget()
{
  __int64 v0; // rdi
  __int64 result; // rax

  if ( (*(_DWORD *)(v0 + 8) & 4) == 0 && HalpInterruptProcessorRestarting )
  {
    __writecr8(*(_QWORD *)(v0 + 304));
    __writecr4(*(_QWORD *)(v0 + 168));
    __writemsr(0xC0000101, *(_QWORD *)(v0 + 312));
    __writemsr(0xC0000102, *(_QWORD *)(v0 + 320));
    __writemsr(0xC0000081, *(_QWORD *)(v0 + 328));
    __writemsr(0xC0000082, *(_QWORD *)(v0 + 336));
    __writemsr(0xC0000083, *(_QWORD *)(v0 + 344));
    __writemsr(0xC0000084, *(_QWORD *)(v0 + 352));
    __writemsr(0xC0000100, *(_QWORD *)(v0 + 368));
  }
  __writedr(7u, 0LL);
  __writedr(0, *(_QWORD *)(v0 + 176));
  __writedr(1u, *(_QWORD *)(v0 + 184));
  __writedr(2u, *(_QWORD *)(v0 + 192));
  __writedr(3u, *(_QWORD *)(v0 + 200));
  __writedr(6u, *(_QWORD *)(v0 + 208));
  __writedr(7u, *(_QWORD *)(v0 + 216));
  __writeeflags(*(_QWORD *)(v0 + 452));
  result = *(_QWORD *)(v0 + 504);
  _fxrstor((void *)(v0 + 640));
  ++*(_DWORD *)(v0 + 4);
  return result;
}
