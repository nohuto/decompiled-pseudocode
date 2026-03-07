__int64 __fastcall CGenericInk::GetDirectInkWetStroke(
        CGenericInk *this,
        struct CD3DDevice *a2,
        struct IDCompositionDirectInkWetStrokePartner **a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct IDCompositionDirectInkWetStrokePartner *v7; // rcx
  struct CD2DGenericInk *v9; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v4 = CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef((_QWORD *)this + 19, a2, &v9);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1EAu, 0LL);
  }
  else
  {
    v7 = (struct IDCompositionDirectInkWetStrokePartner *)*((_QWORD *)v9 + 10);
    *a3 = v7;
    if ( v7 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return v6;
}
