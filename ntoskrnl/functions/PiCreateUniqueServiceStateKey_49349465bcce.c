__int64 __fastcall PiCreateUniqueServiceStateKey(UNICODE_STRING *CreateOptions, __int64 a2, _QWORD *a3)
{
  void *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  if ( CreateOptions && CreateOptions->Buffer && CreateOptions->Length >= 2u && a3 )
  {
    v6 = PiCreateServiceKeyUnderPath(CreateOptions, (UNICODE_STRING *)&PiDriverRegKeyUniqueStateRoot, (__int64)a3, &v9);
    v5 = v9;
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a3 = v9;
      return v7;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v5 )
    ZwClose(v5);
  return v7;
}
