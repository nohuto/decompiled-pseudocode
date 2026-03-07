void __fastcall PDEVOBJ::vDisableSurface(PDEVOBJ *this, char a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  void (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)this;
  v8 = v2;
  if ( (*(_DWORD *)(v2 + 40) & 0x80000) == 0 && qword_1C02D5C70 )
    qword_1C02D5C70(v2);
  if ( qword_1C02D5D28 && (int)qword_1C02D5D28() >= 0 && qword_1C02D5D30 )
    qword_1C02D5D30(*(_QWORD *)this);
  v5 = *(_QWORD *)(*(_QWORD *)this + 2528LL);
  if ( v5 && a2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)this + 2528LL);
    HmgIncrementShareReferenceCount(v7);
    HmgDecrementShareReferenceCountEx(*(_QWORD *)(*(_QWORD *)this + 2528LL), 0LL);
    *(_QWORD *)(*(_QWORD *)this + 2528LL) = 0LL;
    if ( (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v8) )
    {
      HmgDecrementShareReferenceCountEx(v5, 0LL);
      v6 = *(void (__fastcall **)(_QWORD))(v2 + 2696);
      if ( v6 )
        v6(*(_QWORD *)(*(_QWORD *)this + 1768LL));
    }
    else
    {
      SURFREF::bDeleteSurface((SURFREF *)&v7);
      if ( v7 )
        HmgDecrementShareReferenceCountEx(v7, 0LL);
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 2528LL) = 0LL;
  }
}
