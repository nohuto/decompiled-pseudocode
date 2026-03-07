char __fastcall EtwpIsRegEntryAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, char a7)
{
  int v8; // esi
  __int64 v9; // rdi
  int v12; // edi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d

  v8 = *(_DWORD *)(a4 + 72);
  v9 = a3;
  if ( ((*(_BYTE *)(a1 + 98) & 1) == 0 || !*(_BYTE *)(a3 + 17) && !*(_BYTE *)(a3 + 18))
    && (v8 != 2 && !*(_BYTE *)(a3 + 18) || (unsigned __int8)EtwpApplyTransientFilters(a1, a5))
    && ((*(_BYTE *)(a1 + 98) & 8) == 0
     || a7 != 2 && !a6 && (v8 || *(_WORD *)(a4 + 104) == *(_WORD *)(*(_QWORD *)(a1 + 32) + 88LL))) )
  {
    if ( *(_BYTE *)(v9 + 18) )
    {
      if ( !(unsigned int)EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(a1 + 80)) )
        return 1;
    }
    else if ( a7 != 2 || (unsigned __int8)EtwpIsGuidAllowed(a2, *(_QWORD *)(a1 + 32) + 40LL) )
    {
      LOBYTE(a3) = *(_BYTE *)(v9 + 16);
      v12 = EtwpCheckProviderLoggingAccess(a1, v9, a3);
      if ( !v12 )
        return 1;
      if ( v12 < 0 )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_ACCESS_DENIED) )
          EtwpEventWriteProviderAccessCheckStatus(v15, v14, v16, a1, a2, v12);
      }
    }
  }
  return 0;
}
