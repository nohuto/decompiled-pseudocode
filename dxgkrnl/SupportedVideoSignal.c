char __fastcall SupportedVideoSignal(_DWORD *a1, unsigned int *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // r11d
  int v16; // r10d
  int v17; // r8d

  if ( (unsigned int)(a3 - 1) > 1 )
    WdLogSingleEntry0(1LL);
  if ( a2[9] != 1 )
    WdLogSingleEntry0(1LL);
  if ( a3 == 2 )
  {
    if ( a1[3] != a2[10] )
      return 0;
    if ( a1[4] != a2[11] )
      return 0;
    v6 = (unsigned int)a1[5];
    v7 = (unsigned int)a1[6];
    if ( v6 * (unsigned __int64)a2[2] < v7 * (unsigned __int64)a2[1] )
      return 0;
    if ( v6 * (unsigned __int64)a2[4] > v7 * (unsigned __int64)a2[3] )
      return 0;
    v8 = (unsigned int)a1[7];
    v9 = (unsigned int)a1[8];
    if ( v8 * (unsigned __int64)a2[6] < v9 * (unsigned __int64)a2[5]
      || v8 * (unsigned __int64)a2[8] > v9 * (unsigned __int64)a2[7] )
    {
      return 0;
    }
  }
  else
  {
    v11 = a1[3];
    if ( v11 > a2[10] || v11 == a2[10] && a1[4] > a2[11] )
      return 0;
    v12 = *(_QWORD *)(a1 + 5);
    v13 = 107;
    v14 = a1[4];
    if ( v14 <= 0x258 )
      v13 = 105;
    v15 = (unsigned int)v12 * v14 * v13 / 0x64;
    v16 = a1[5] / a1[6];
    if ( (int)(v16 - a2[1] / a2[2]) < 0 )
      return 0;
    v17 = v16 - 61;
    if ( (int)(v16 - a2[3] / a2[4]) > 0 && v17 > 0 )
      return 0;
    if ( (int)(v15 / HIDWORD(v12) - a2[5] / a2[6]) < 0 && v16 - 60 < 0
      || (int)(v15 / HIDWORD(v12) - a2[7] / a2[8]) > 0 && v17 > 0 )
    {
      return 0;
    }
  }
  return 1;
}
