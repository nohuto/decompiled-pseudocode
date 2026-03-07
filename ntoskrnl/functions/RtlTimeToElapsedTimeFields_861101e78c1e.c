__int64 __fastcall RtlTimeToElapsedTimeFields(LARGE_INTEGER *a1, __int64 a2)
{
  unsigned int v3; // kr00_4
  unsigned int v4; // r8d
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  ULONG v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v6 = 0;
  TimeToDaysAndFraction(a1, &v7, &v6);
  v3 = v6;
  *(_WORD *)(a2 + 4) = v7;
  *(_DWORD *)a2 = 0;
  *(_WORD *)(a2 + 12) = v3 % 0x3E8;
  v4 = v3 / 0x3E8 / 0x3C;
  *(_WORD *)(a2 + 6) = v4 / 0x3C;
  *(_WORD *)(a2 + 8) = v4 % 0x3C;
  result = (unsigned int)(__int16)v4;
  *(_WORD *)(a2 + 10) = v3 / 0x3E8 % 0x3C;
  return result;
}
