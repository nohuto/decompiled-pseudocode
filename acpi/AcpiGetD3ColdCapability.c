__int64 __fastcall AcpiGetD3ColdCapability(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a2 = 0;
  if ( (*(_DWORD *)(a1 + 1008) & 0x800LL) == 0 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 440) )
  {
    *a2 = 1;
    return 0LL;
  }
  result = AcpiGetIdleWakeInfo(a1, 1LL, &v4);
  if ( (int)result >= 0 && v4 == 5 )
    *a2 = 1;
  return result;
}
