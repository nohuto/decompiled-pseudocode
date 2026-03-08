/*
 * XREFs of ??0CRedirectVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A128
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRedirectVisualMarshaler *__fastcall DirectComposition::CRedirectVisualMarshaler::CRedirectVisualMarshaler(
        DirectComposition::CRedirectVisualMarshaler *this)
{
  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 9) = 141;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *(_QWORD *)this = &DirectComposition::CRedirectVisualMarshaler::`vftable';
  return this;
}
