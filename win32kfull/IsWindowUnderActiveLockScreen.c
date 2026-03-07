__int64 __fastcall IsWindowUnderActiveLockScreen(__int64 a1)
{
  PVOID v1; // rdx
  unsigned int v2; // r8d

  v1 = *(PVOID *)(a1 + 24);
  v2 = 0;
  if ( v1
    && gbLockScreenActive
    && grpdeskLogon != v1
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 2
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 3
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 14
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 17 )
  {
    return *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 18;
  }
  return v2;
}
