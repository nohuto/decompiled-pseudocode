__int64 __fastcall HrCalcRequiredBufferSizeWorker(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // r11
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a2;
  v7 = 0;
  if ( !a4 )
    goto LABEL_8;
  v8 = a4 - 1;
  v9 = a3 * (unsigned __int64)a1;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = 1615;
    goto LABEL_15;
  }
  if ( (int)v9 + 7 < (unsigned int)v9 )
  {
    v12 = 1616;
    goto LABEL_15;
  }
  v10 = (unsigned int)(v9 + 7) >> 3;
  if ( (unsigned int)v6 < v10 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x655u, 0LL);
    return v7;
  }
  v9 = v6 * v8;
  if ( v9 > 0xFFFFFFFF )
  {
    v12 = 1624;
    goto LABEL_15;
  }
  if ( (unsigned int)v9 + v10 < (unsigned int)v9 )
  {
    v12 = 1625;
LABEL_15:
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, v12, 0LL);
    return v7;
  }
  v5 = v9 + v10;
LABEL_8:
  *a5 = v5;
  return v7;
}
