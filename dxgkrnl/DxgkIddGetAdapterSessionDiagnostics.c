__int64 __fastcall DxgkIddGetAdapterSessionDiagnostics(
        unsigned int a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  struct _LUID *v7; // rdx
  DXGADAPTER *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // r9d
  const wchar_t *v12; // r9
  DXGDIAGNOSTICS *v13; // rcx
  int v14; // eax
  unsigned int v16; // [rsp+50h] [rbp-38h] BYREF
  DXGADAPTER *v17[3]; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+10h] BYREF

  v18 = a2;
  v17[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v17, a1);
  v8 = v17[0];
  if ( !v17[0] )
  {
    v9 = a1;
    LODWORD(v10) = -1073741811;
    WdLogSingleEntry2(3LL, v9, -1073741811LL);
    goto LABEL_15;
  }
  v16 = 0;
  if ( !DXGADAPTER::IsAdapterSessionized(v17[0], v7, &v16, 0LL) )
  {
    LODWORD(v10) = -1073741811;
    WdLogSingleEntry2((unsigned int)(v11 + 2), v8, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x is not a sessionized adapter, returning 0x%I64x.",
      (__int64)v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  if ( !DXGGLOBAL::GetGlobal() )
  {
    v10 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v12 = L"Unable to obtain DXGGLOBAL, returning 0x%I64x.";
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v10, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  v13 = (DXGDIAGNOSTICS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 116);
  if ( !v13 )
  {
    v10 = -1073741436LL;
    WdLogSingleEntry1(2LL, -1073741436LL);
    v12 = L"Unable to obtain DXGGLOBAL Diagnosibility buffer, returning 0x%I64x.";
    goto LABEL_9;
  }
  v14 = DXGDIAGNOSTICS::ReadDiagnostics(v13, a3, &v18, v16);
  if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
    *a4 = v18;
  LODWORD(v10) = v14;
LABEL_15:
  DXGADAPTER_REFERENCE::Assign(v17, 0LL);
  return (unsigned int)v10;
}
