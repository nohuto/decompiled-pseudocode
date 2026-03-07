__int64 __fastcall ReleaseDeviceFirmwareLock(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r8

  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( !*(_DWORD *)(a1 + 24) )
      *(_DWORD *)(a1 + 24) = 1;
    do
    {
      if ( *(_DWORD *)(a1 + 24) == 1 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          v5 = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 24) = 2;
          *(_QWORD *)(a1 + 56) = a2;
          v4 = PerformHandlerInvocation(3, a1, v5, a2, 0LL, 0, 0);
        }
        else
        {
          v4 = 0;
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      else if ( *(_DWORD *)(a1 + 24) == 2 )
      {
        if ( *(_DWORD *)(a1 + 40) == -1073741267 )
        {
          *(_DWORD *)(a1 + 24) = 1;
          v4 = -1073741802;
        }
        else
        {
          DereferenceDeviceFirmwareLockHandlerEntry(*(PVOID ***)(a1 + 16), 0);
          v4 = *(_DWORD *)(a1 + 40);
          *(_DWORD *)(a1 + 24) = 0;
          *(_BYTE *)(a1 + 48) = 0;
        }
      }
      else
      {
        v4 = -1073741823;
      }
    }
    while ( *(_DWORD *)(a1 + 24) && v4 == -1073741802 );
  }
  else
  {
    return 0;
  }
  return v4;
}
