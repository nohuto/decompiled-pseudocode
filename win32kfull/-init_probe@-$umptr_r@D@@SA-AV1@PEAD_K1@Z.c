_QWORD *__fastcall umptr_r<char>::init_probe(__int64 a1, __int64 a2, ULONGLONG a3)
{
  _QWORD *v4; // r10
  ULONGLONG v5; // r11
  ULONGLONG pullResult; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  pullResult = 0LL;
  if ( ULongLongMult(a3, 1uLL, &pullResult) >= 0 )
  {
    if ( pullResult && (pullResult + v5 > MmUserProbeAddress || pullResult + v5 < v5) )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v4 = v5;
    v4[1] = a3;
  }
  return v4;
}
