_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  BOOL v4; // ebx
  __int64 v5; // rcx
  unsigned __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v7);
  v4 = 0;
  if ( v3 )
  {
    v5 = *((_QWORD *)v3 + 365);
    if ( v5 )
      v4 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 2820LL) >= 1105;
    DXGADAPTER::ReleaseReference(v3);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed in adapter ptr to query driver Ccd support, returnign on support (0x%I64x::0x%I64x).",
      a1->HighPart,
      a1->LowPart,
      0LL,
      0LL,
      0LL);
  }
  return v4;
}
