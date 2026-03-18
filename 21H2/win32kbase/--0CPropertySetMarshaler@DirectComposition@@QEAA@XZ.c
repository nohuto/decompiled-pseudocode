/*
 * XREFs of ??0CPropertySetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0016194
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CPropertySetMarshaler *__fastcall DirectComposition::CPropertySetMarshaler::CPropertySetMarshaler(
        DirectComposition::CPropertySetMarshaler *this)
{
  DirectComposition::CPropertySetMarshaler *result; // rax

  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &DirectComposition::CPropertySetMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 132;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
