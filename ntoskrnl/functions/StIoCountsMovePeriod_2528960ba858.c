__int64 __fastcall StIoCountsMovePeriod(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 600000000LL;
  v4 = a2 - v2;
  if ( v4 >= 0x23C34600 )
  {
    v5 = (v4 + 599999999) / 0x23C34600;
    v3 = 600000000LL * (unsigned int)v5;
  }
  else
  {
    LODWORD(v5) = 1;
  }
  *(_QWORD *)(a1 + 16) = v2 + v3;
  *(_DWORD *)(a1 + 8) += v5;
  result = a1 + 4 * (5LL * (*(_DWORD *)(a1 + 8) & 0x3F) + 6);
  *(_OWORD *)result = 0LL;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)a1 = result;
  return result;
}
