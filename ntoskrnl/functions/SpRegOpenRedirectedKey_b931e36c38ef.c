__int64 __fastcall SpRegOpenRedirectedKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *Pool2; // rdi
  int PersistedStateLocation; // eax
  int v6; // ebx
  UNICODE_STRING *p_DestinationString; // rcx
  void *v8; // rcx
  unsigned int v10; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  void *v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+7Ch] [rbp+2Ch]

  v14 = HIDWORD(a2);
  v12 = 0LL;
  Pool2 = 0LL;
  v13 = 0;
  DestinationString = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(off_140D53670, L"TargetNtPath", 0LL, 0, 0LL, 0, &v13);
  v6 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    v10 = v13;
    Pool2 = (void *)ExAllocatePool2(256LL, v13, 542329939LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v6 = RtlGetPersistedStateLocation(off_140D53670, L"TargetNtPath", 0LL, 0, Pool2, v10, &v13);
    if ( v6 < 0 )
    {
LABEL_17:
      ExFreePoolWithTag(Pool2, 0x20534C53u);
      return (unsigned int)v6;
    }
    RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
    p_DestinationString = &DestinationString;
  }
  else
  {
    if ( PersistedStateLocation != -1073741772 )
    {
      if ( PersistedStateLocation < 0 )
        return (unsigned int)v6;
      goto LABEL_5;
    }
    p_DestinationString = (UNICODE_STRING *)&unk_140D53658;
  }
  v6 = SpRegOpenKey(p_DestinationString, &v12);
  if ( v6 >= 0 )
  {
LABEL_5:
    v8 = 0LL;
    *a3 = v12;
    goto LABEL_6;
  }
  v8 = v12;
LABEL_6:
  if ( v8 )
    ZwClose(v8);
  if ( Pool2 )
    goto LABEL_17;
  return (unsigned int)v6;
}
