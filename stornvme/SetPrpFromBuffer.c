__int64 __fastcall SetPrpFromBuffer(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rbx
  unsigned int v5; // r10d
  unsigned int v7; // edi
  __int64 PhysicalAddress; // rax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  if ( (a3 & 0xFFF) != 0 )
    return 0LL;
  v5 = 0;
  if ( !a4 )
    return 0LL;
  a2[515] = a3;
  if ( a4 > 0x1000 )
  {
    v7 = (a4 + 4095) >> 12;
    if ( v7 == 2 )
    {
      PhysicalAddress = a3 + 4096;
    }
    else
    {
      v9 = 0;
      if ( v7 != 1 )
      {
        do
          *a2++ = a3 + (++v5 << 12);
        while ( v5 < v7 - 1 );
      }
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v4, &v9);
    }
    v4[516] = PhysicalAddress;
    return v7;
  }
  else
  {
    a2[516] = 0LL;
    return 1LL;
  }
}
