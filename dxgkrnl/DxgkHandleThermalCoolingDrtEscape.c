__int64 __fastcall DxgkHandleThermalCoolingDrtEscape(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int v3; // r8d
  __int64 v4; // r9
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( !g_OSTestSigningEnabled )
    return 3221225659LL;
  v4 = *(_QWORD *)(v2 + 4880);
  if ( !v4 )
    return 3221225659LL;
  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( *(_QWORD *)(v4 + 48) )
        DpiFdoThermalActiveCooling(a1, *(_BYTE *)(a2 + 16));
    }
    else if ( v5 == 2 && *(_QWORD *)(v4 + 56) )
    {
      DpiFdoThermalPassiveCooling(a1, *(_DWORD *)(a2 + 16));
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = 0;
    LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)(v2 + 4880) + 48LL) != 0LL;
    *(_DWORD *)(a2 + 16) = v3;
    *(_DWORD *)(a2 + 16) = v3 | (*(_QWORD *)(*(_QWORD *)(v2 + 4880) + 56LL) != 0LL ? 2 : 0);
  }
  return 0LL;
}
