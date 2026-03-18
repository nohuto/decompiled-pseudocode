/*
 * XREFs of ??0CScalarMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0213E28
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CScalarMarshaler *__fastcall DirectComposition::CScalarMarshaler::CScalarMarshaler(
        DirectComposition::CScalarMarshaler *this)
{
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 5) = 1LL;
  *((_DWORD *)this + 16) = 149;
  *(_QWORD *)this = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  return this;
}
