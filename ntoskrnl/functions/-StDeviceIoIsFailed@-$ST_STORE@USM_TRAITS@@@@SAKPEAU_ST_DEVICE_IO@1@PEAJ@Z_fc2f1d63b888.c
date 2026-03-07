__int64 __fastcall ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
    return 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      a1 = v3 + 4;
    *a2 = *(_DWORD *)a1;
  }
  return 1LL;
}
