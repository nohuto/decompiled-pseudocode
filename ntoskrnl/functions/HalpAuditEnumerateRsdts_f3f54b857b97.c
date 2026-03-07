__int64 __fastcall HalpAuditEnumerateRsdts(__int64 a1, PVOID *a2)
{
  int RsdtArrayTable; // eax
  int v4; // ecx
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+30h] [rbp+10h] BYREF
  int v9; // [rsp+34h] [rbp+14h]
  PVOID P; // [rsp+40h] [rbp+20h] BYREF
  __int64 v11; // [rsp+48h] [rbp+28h] BYREF

  v9 = HIDWORD(a1);
  v11 = 0LL;
  v8 = 0;
  P = 0LL;
  RsdtArrayTable = HalpAuditAllocateRsdtArrayTable((_DWORD **)&P);
  v4 = RsdtArrayTable;
  if ( RsdtArrayTable < 0
    || (int)HalpAuditGetExtendedBiosDataArea((unsigned int)RsdtArrayTable, &v11, &v8) >= 0
    && (LOBYTE(v5) = 1, v4 = HalpAuditEnumerateRsdtsInRange(v11, v8, v5, &P), v4 < 0)
    || (v4 = HalpAuditEnumerateRsdtsInRange(917504LL, 0x20000LL, 0LL, &P), v4 < 0) )
  {
    v6 = v4;
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      return v6;
    }
  }
  else
  {
    *a2 = P;
  }
  return (unsigned int)v4;
}
