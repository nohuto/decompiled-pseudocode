void __fastcall FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<221184,864>>(PVOID Entry)
{
  __int64 v2; // rdi

  v2 = **(_QWORD **)(*(_QWORD *)(SGDGetSessionState(Entry) + 24) + 6504LL);
  if ( v2 )
  {
    memset(Entry, 0, 0x360uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v2 + 48), Entry);
  }
}
