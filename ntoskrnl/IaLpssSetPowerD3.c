__int64 __fastcall IaLpssSetPowerD3(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8

  if ( a1 && (v2 = *a1) != 0 )
  {
    v3 = ((__int64 (__fastcall *)(__int64))off_140C06B40[0])(v2 + 128);
    v4 = *a1;
    IaLpssClockParams = v3;
    if ( (((__int64 (__fastcall *)(__int64))off_140C06B20[0])(v4 + 129) & 7) == 7 )
    {
      LOBYTE(v5) = 4;
      v7 = ((__int64 (__fastcall *)(__int64 *, __int64))a1[2])(a1, v5);
      LOBYTE(v8) = 4;
      LOBYTE(v9) = v7 & 0xF7;
      ((void (__fastcall *)(__int64 *, __int64, __int64))a1[3])(a1, v8, v9);
      ((void (__fastcall *)(__int64 *, __int64))a1[3])(a1, 2LL);
      ((void (__fastcall *)(__int64, _QWORD))off_140C06B28[0])(*a1 + 129, 0LL);
      return (unsigned int)IaLpssPciSetPower(1);
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 3;
  }
}
