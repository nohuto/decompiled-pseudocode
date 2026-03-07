unsigned __int64 __fastcall EmonConfigureCounter(unsigned int a1, char a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // rdi
  char v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned __int64 result; // rax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned int v14; // r10d
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r11
  __int64 v17; // rax

  v6 = a4;
  v7 = a1;
  if ( a1 >= EmonNumberArchCounters )
  {
    v14 = a1 - EmonNumberArchCounters;
    v15 = __readmsr(0x38Fu);
    v16 = ~(15LL << (4 * ((unsigned __int8)a1 - (unsigned __int8)EmonNumberArchCounters))) & __readmsr(0x38Du);
    if ( a2 )
    {
      v16 |= v6;
      if ( a5 )
        v16 |= 8LL << (4 * (unsigned __int8)v14);
      if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
        v17 = (1LL << EmonFixedCounterResolution) - 1;
      else
        v17 = -1LL;
      __writemsr(v14 + 777, v17 & -(a3 & -(__int64)(a5 != 0)));
      _bittestandset64((__int64 *)&v15, v14 + 32);
    }
    else
    {
      _bittestandreset64((__int64 *)&v15, v14 + 32);
    }
    __writemsr(0x38Fu, v15);
    v12 = v16;
    result = v16;
    v11 = 909;
    goto LABEL_18;
  }
  if ( !a2 )
  {
    result = 0LL;
    v11 = a1 + 390;
    LODWORD(v13) = 0;
LABEL_19:
    __writemsr(v11, __PAIR64__(v13, result));
    return result;
  }
  v8 = a4 | (a5 != 0 ? 5242880 : 0x400000);
  if ( (unsigned int)EmonCounterResolution < 0x40 )
    v9 = (1LL << EmonCounterResolution) - 1;
  else
    v9 = -1LL;
  __writemsr(a1 + 193, v9 & -(a3 & -(__int64)(a5 != 0)));
  result = v8;
  __writemsr(a1 + 390, v8);
  if ( (unsigned int)EmonVersion >= 2 )
  {
    v11 = 911;
    result = __readmsr(0x38Fu) | (1LL << v7);
    v12 = result;
LABEL_18:
    v13 = HIDWORD(v12);
    goto LABEL_19;
  }
  return result;
}
