void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  PERESOURCE *v2; // [rsp+20h] [rbp-48h] BYREF
  char v3; // [rsp+48h] [rbp-20h]

  if ( qword_1C02D6D40 && (int)qword_1C02D6D40() >= 0 )
  {
    DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v2);
    if ( qword_1C02D6D48 )
      qword_1C02D6D48(a1);
    if ( v3 )
    {
      if ( v2 )
        ExReleaseResourceAndLeaveCriticalRegion(*v2);
    }
  }
}
