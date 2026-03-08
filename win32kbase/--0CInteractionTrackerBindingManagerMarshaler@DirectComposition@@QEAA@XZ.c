/*
 * XREFs of ??0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A084
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CInteractionTrackerBindingManagerMarshaler *__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CInteractionTrackerBindingManagerMarshaler(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this)
{
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *result; // rax

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 9) = 91;
  *((_BYTE *)this + 80) = 1;
  *((_QWORD *)this + 13) = 32LL;
  return result;
}
