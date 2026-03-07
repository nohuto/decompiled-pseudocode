__int64 __fastcall HUBMISC_CheckIfDeviceProgrammingWasLost(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 i; // rcx
  __int64 v8; // rcx

  if ( (*(_DWORD *)(a1 + 1636) & 0x20) != 0 )
  {
    v1 = 4089;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFDF);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFEFFFFF);
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      _InterlockedOr((volatile signed __int32 *)(v2 + 32), 0x80u);
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
    {
      v4 = v3 + 16;
      v5 = *(_QWORD *)(v3 + 16);
      v6 = v5 - 8;
      if ( v4 != v5 )
      {
        do
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
          {
            if ( *(_DWORD *)(v6 + 72 * i + 48) == 4 )
              *(_DWORD *)(v6 + 72 * i + 48) = 6;
          }
          v8 = *(_QWORD *)(v6 + 8);
          v6 = v8 - 8;
        }
        while ( v4 != v8 );
      }
    }
  }
  else
  {
    return 4061;
  }
  return v1;
}
