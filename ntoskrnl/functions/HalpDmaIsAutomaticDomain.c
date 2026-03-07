bool __fastcall HalpDmaIsAutomaticDomain(ULONG_PTR BugCheckParameter3)
{
  char v2; // di
  __int64 v4; // rbx

  v2 = 0;
  if ( (int)HalpDmaReferenceDomainObject(BugCheckParameter3) >= 0 )
  {
    v4 = *(_QWORD *)(BugCheckParameter3 + 56);
    HalpDmaDereferenceDomainObject(BugCheckParameter3);
    return v4 != 0;
  }
  return v2;
}
