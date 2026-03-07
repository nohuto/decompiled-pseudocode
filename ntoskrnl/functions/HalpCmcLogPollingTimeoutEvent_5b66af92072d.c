LONG __fastcall HalpCmcLogPollingTimeoutEvent(__int128 *a1, int a2)
{
  __int128 v2; // xmm0
  int v3; // eax
  _DWORD Src[8]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v6; // [rsp+40h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+54h] [rbp-Ch]

  v2 = *a1;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[3] = 1;
  v3 = *((_DWORD *)a1 + 4);
  Src[2] = 56;
  Src[5] = -2147483647;
  Src[4] = 541868360;
  Src[6] = 2;
  Src[7] = 24;
  v6 = v2;
  v7 = v3;
  v8 = a2;
  return WheaLogInternalEvent(Src);
}
