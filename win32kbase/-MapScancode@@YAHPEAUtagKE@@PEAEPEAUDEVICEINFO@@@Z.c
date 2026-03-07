__int64 __fastcall MapScancode(struct tagKE *a1, unsigned __int8 *a2, struct DEVICEINFO *a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // si
  __int16 *i; // rcx
  __int16 v14; // ax

  if ( qword_1C02D7438 && (unsigned int)qword_1C02D7438(a1) )
    return 1LL;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12640) )
  {
    v12 = *(unsigned __int8 *)a1 | (*a2 << 8);
    for ( i = (__int16 *)(*(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 12640) + 12LL); *(_DWORD *)i; i += 2 )
    {
      if ( HIWORD(*(_DWORD *)i) == v12 )
      {
        v14 = *i;
        *(_BYTE *)a1 = *i;
        *a2 = HIBYTE(v14);
        break;
      }
    }
  }
  LOBYTE(v8) = *a2;
  return MapFlexibleKeys(a1, v8, a3, v11);
}
