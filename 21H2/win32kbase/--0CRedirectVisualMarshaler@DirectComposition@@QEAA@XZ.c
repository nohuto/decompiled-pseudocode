/*
 * XREFs of ??0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0213D94
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRedirectVisualMarshaler *__fastcall DirectComposition::CRedirectVisualMarshaler::CRedirectVisualMarshaler(
        DirectComposition::CRedirectVisualMarshaler *this)
{
  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 139;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *(_QWORD *)this = &DirectComposition::CRedirectVisualMarshaler::`vftable';
  return this;
}
