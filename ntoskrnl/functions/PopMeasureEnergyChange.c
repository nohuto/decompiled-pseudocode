__int64 __fastcall PopMeasureEnergyChange(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v5 = 0LL;
  DWORD2(v5) = 0;
  PopGetEnergyCounter(&v5);
  result = 0LL;
  if ( *(_QWORD *)(a2 + 8) )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2 | v5;
    result = *((_QWORD *)&v5 + 1) - *(_QWORD *)(a2 + 8);
  }
  else
  {
    *(_DWORD *)a1 = 1;
  }
  *(_QWORD *)(a1 + 8) = result;
  *(_OWORD *)a2 = v5;
  return result;
}
