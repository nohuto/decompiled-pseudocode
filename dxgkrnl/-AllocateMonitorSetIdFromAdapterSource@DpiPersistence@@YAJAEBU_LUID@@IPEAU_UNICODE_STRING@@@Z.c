__int64 __fastcall DpiPersistence::AllocateMonitorSetIdFromAdapterSource(
        struct _LUID *this,
        const struct _LUID *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  int v8; // eax
  struct _UNICODE_STRING *v9; // rdx
  __int64 v10; // rdi
  int appended; // eax
  struct _UNICODE_STRING v13; // [rsp+80h] [rbp+18h] BYREF

  v5 = (unsigned int)a2;
  a3->Length = 0;
  v7 = operator new[](0x8002uLL, 0x63644356u, 256LL);
  a3->Buffer = (wchar_t *)v7;
  if ( v7 )
  {
    a3->MaximumLength = -32766;
    LOBYTE(v13.Length) = 0;
    v8 = DpiPersistence::CreateMonitorSetId(this, (const struct _LUID *)v5, (__int64)a3, &v13);
    v10 = v8;
    if ( LOBYTE(v13.Length) )
    {
      return 3221225659LL;
    }
    else
    {
      if ( v8 < 0 || (appended = DpiPersistence::SortMonitorSetIdAndAppendHash(a3, v9), v10 = appended, appended < 0) )
      {
        WdLogSingleEntry1(2LL, v10);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to get Monitor ID String to write to registry (Status = 0x%I64x)",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return (unsigned int)v10;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 32770LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create o_pMonitorSetId->Buffer of size 0x%I64x",
      32770LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
