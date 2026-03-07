void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, int a2)
{
  SIZE sizLogResPpi; // rdi
  __int64 *pvProducer; // [rsp+30h] [rbp+8h] BYREF
  SIZE v6; // [rsp+40h] [rbp+18h] BYREF

  sizLogResPpi = (*this)[1].sizLogResPpi;
  pvProducer = (__int64 *)(*this)[1].pvProducer;
  v6 = sizLogResPpi;
  PFEOBJ::vFreepfdg(&pvProducer);
  if ( a2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3008LL) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v6, *this);
  }
}
