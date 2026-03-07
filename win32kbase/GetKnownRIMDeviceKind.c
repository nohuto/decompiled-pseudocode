__int64 __fastcall GetKnownRIMDeviceKind(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v3; // rcx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( *(_BYTE *)(a1 + 48) == 1 )
    {
      return 2;
    }
    else if ( *(_BYTE *)(a1 + 48) == 2 )
    {
      v3 = *(_QWORD *)(a1 + 32);
      if ( (*(_DWORD *)(v3 + 272) & 0x80u) != 0 )
      {
        switch ( *(_DWORD *)(*(_QWORD *)(v3 + 544) + 24LL) )
        {
          case 1:
          case 2:
          case 3:
          case 4:
            return 3;
          case 5:
          case 6:
            return 5;
          case 7:
            return 4;
        }
      }
    }
  }
  else
  {
    return 1;
  }
  return v1;
}
