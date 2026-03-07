CSuperWetInkScribble *__fastcall CSuperWetInkScribble::CSuperWetInkScribble(
        CSuperWetInkScribble *this,
        struct IDCompositionDirectInkSuperWetStrokePartner *a2,
        struct CGenericInkTipPointSource *a3,
        int a4,
        const struct CSuperWetInkScribbleBase::TelemetryInfo *a5)
{
  __int64 v8; // xmm1_8

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CSuperWetInkScribbleBase::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkSuperWetStrokePartner *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_DWORD *)this + 6) = a4;
  *((_OWORD *)this + 2) = *(_OWORD *)a5;
  v8 = *((_QWORD *)a5 + 2);
  *(_QWORD *)this = &CSuperWetInkScribble::`vftable';
  *((_QWORD *)this + 6) = v8;
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CGenericInkTipPointSource *)((char *)a3 + 8));
  return this;
}
