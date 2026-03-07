__int64 __fastcall IrqArbAllocateEntry(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10

  v2 = 0;
  v3 = a2 + 32;
  v4 = 0LL;
  while ( *(_QWORD *)v3 )
  {
    if ( *(_QWORD *)(*(_QWORD *)v3 + 32LL) == v4 )
    {
      ++v2;
    }
    else
    {
      if ( v2 > (unsigned __int16)IrqArbInterruptLimit )
        break;
      v4 = *(_QWORD *)(*(_QWORD *)v3 + 32LL);
      v2 = 1;
    }
    v3 += 80LL;
  }
  if ( v2 <= (unsigned __int16)IrqArbInterruptLimit )
    return ArbAllocateEntry(a1);
  else
    return 3221225626LL;
}
