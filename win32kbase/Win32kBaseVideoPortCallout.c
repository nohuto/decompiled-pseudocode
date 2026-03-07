__int64 __fastcall Win32kBaseVideoPortCallout(__int64 a1)
{
  _BYTE v3[208]; // [rsp+20h] [rbp-E8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  VideoPortCallout(a1);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v3);
  return 0LL;
}
