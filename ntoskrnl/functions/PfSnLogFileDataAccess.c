void __fastcall PfSnLogFileDataAccess(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rsi
  __int64 v11; // rbx
  unsigned int i; // edi

  v9 = PfSnReferenceProcessTrace(*(_QWORD *)(a3 + 544));
  v10 = (struct _EX_RUNDOWN_REF *)v9;
  if ( v9 )
  {
    if ( (unsigned int)PfSnCheckLoggingForThread(a3, v9, 0LL) )
    {
      v11 = a5;
      for ( i = a4 & 0xFFFFF000; v11; --v11 )
      {
        if ( (int)PfSnLogPageFaultCommon((_DWORD)v10, a1, a2, i, 0) < 0 )
          break;
        i += 4096;
      }
    }
    ExReleaseRundownProtection_0(v10 + 45);
  }
}
