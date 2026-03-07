void __fastcall CEnergyReporter::~CEnergyReporter(PTP_WORK *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx

  WaitForThreadpoolWorkCallbacks(this[9], 1);
  CloseThreadpoolWork(this[9]);
  v2 = (void (__fastcall ***)(_QWORD, _QWORD))this[6];
  if ( v2 )
    (**v2)(v2, 1LL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 11));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 2));
}
