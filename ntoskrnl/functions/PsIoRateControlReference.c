__int64 __fastcall PsIoRateControlReference(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 v10; // rax
  __int64 result; // rax

  v5 = a1 + 1616;
  v10 = PspIoRateEntryIoControlReference(a1 + 1616);
  *a3 = v10;
  if ( v10 )
    *a4 = *(_QWORD *)(a1 + 1568);
  else
    v5 = 0LL;
  *a5 = v5;
  a3[1] = 0LL;
  a5[1] = 0LL;
  result = *(_QWORD *)(a1 + 1680);
  if ( (*(_BYTE *)(a1 + 1688) & 1) != 0 )
  {
    if ( !result )
      return result;
    result ^= a1 + 1680;
  }
  if ( result && a2 )
  {
    result = PspJobIoRateVolumeEntryReference(a1, a2);
    if ( result )
    {
      a3[1] = *(_QWORD *)(result + 40);
      a4[1] = *(_QWORD *)(result + 48);
      a5[1] = result;
    }
  }
  return result;
}
