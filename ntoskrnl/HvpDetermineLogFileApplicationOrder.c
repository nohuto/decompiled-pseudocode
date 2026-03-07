char __fastcall HvpDetermineLogFileApplicationOrder(_DWORD *a1)
{
  int v1; // r8d
  int v2; // edi
  __int64 v3; // r9
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // eax
  char v9; // r11
  BOOL v10; // r8d
  __int64 v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]
  int v17; // [rsp+64h] [rbp-14h]

  v1 = 0;
  v2 = -1;
  v3 = 0LL;
  if ( !*a1 )
    goto LABEL_10;
  do
  {
    v5 = v3;
    v6 = a1[6 * v3 + 1];
    if ( (v6 & 1) == 0 )
      v5 = v2;
    v2 = v5;
    v7 = v1 + 1;
    if ( (v6 & 1) == 0 )
      v7 = v1;
    v3 = (unsigned int)(v3 + 1);
    v1 = v7;
  }
  while ( (unsigned int)v3 < *a1 );
  if ( v7 != 1 )
  {
LABEL_10:
    v8 = HvpCompareLogSequenceNumbers(a1[3], a1[9]);
    v2 = v8 >> 31;
    v10 = (v8 & 0x80000000) == 0;
    v11 = ((__int64)(int)v8 >> 63) & 0x18;
    v7 = *(_DWORD *)((char *)a1 + (((__int64)(int)v8 >> 63) & 0xFFFFFFFFFFFFFFE8uLL) + 40) + 1;
    if ( v7 == *(_DWORD *)((char *)a1 + v11 + 12) )
    {
      v7 = *(_DWORD *)((char *)a1 + v11 + 4);
      if ( (v7 & 2) == 0 )
      {
        a1[14] = v2;
        v2 = v10;
        a1[15] = 2;
        goto LABEL_9;
      }
    }
    else if ( !v9 && (unsigned int)dword_140C04328 > 5 )
    {
      LOBYTE(v7) = tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL);
      if ( (_BYTE)v7 )
      {
        v17 = 0;
        v15 = &v13;
        v13 = 0x1000000LL;
        v16 = 8;
        LOBYTE(v7) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140C04328,
                       (unsigned __int8 *)&dword_140037CFC,
                       0LL,
                       0LL,
                       3u,
                       &v14);
      }
    }
  }
  a1[15] = 1;
LABEL_9:
  a1[13] = v2;
  return v7;
}
