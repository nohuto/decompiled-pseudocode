__int64 __fastcall HalpEnableSecondaryInterrupt(_DWORD *a1)
{
  unsigned int v2; // ebp
  __int64 SecondaryIcEntry; // rax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, _QWORD, __int64); // r10
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // edi

  if ( SecondaryIcServicesEnabled )
  {
    if ( HalpCheckInterruptType(a1) )
    {
      v2 = a1[16];
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v2);
      v4 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(SecondaryIcEntry + 56);
        v6 = 2 * (v2 - *(_DWORD *)(SecondaryIcEntry + 16) + 10LL);
        v7 = 2LL * (v2 - *(_DWORD *)(SecondaryIcEntry + 16));
        *(_DWORD *)(SecondaryIcEntry + 8 * v7 + 164) = a1[6];
        *(_DWORD *)(SecondaryIcEntry + 8 * v6) = a1[5];
        *(_DWORD *)(SecondaryIcEntry + 8 * v7 + 168) = a1[3];
        *(_BYTE *)(SecondaryIcEntry + 8 * v7 + 172) = 1;
        v9 = v5(*(_QWORD *)(SecondaryIcEntry + 32), v2, (unsigned int)a1[6], (unsigned int)a1[5], SecondaryIcEntry);
        if ( v9 < 0 )
        {
          *(_DWORD *)(v4 + 8 * v7 + 168) |= 0x80000000;
          *(_BYTE *)(v4 + 8 * v7 + 172) = 0;
        }
        LOBYTE(v8) = 1;
        HalpReleaseSecondaryIcEntryShared(v4, v8);
      }
      else
      {
        return (unsigned int)-1073700575;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v9;
}
