/*
 * XREFs of ??0CAnimationLoggingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C009EB44
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0029A24 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CAnimationLoggingManagerMarshaler *__fastcall DirectComposition::CAnimationLoggingManagerMarshaler::CAnimationLoggingManagerMarshaler(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  DirectComposition::CAnimationLoggingManagerMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CAnimationLoggingManagerMarshaler::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 2;
  *((_BYTE *)this + 64) = 1;
  *((_QWORD *)this + 11) = 12LL;
  *((_QWORD *)this + 17) = 12LL;
  result = this;
  *((_BYTE *)this + 112) = 1;
  *((_BYTE *)this + 160) = 1;
  *((_QWORD *)this + 23) = 16LL;
  *((_BYTE *)this + 208) = 1;
  *((_QWORD *)this + 29) = 8LL;
  *((_BYTE *)this + 256) &= 0xFCu;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 65) = 1065353216;
  return result;
}
