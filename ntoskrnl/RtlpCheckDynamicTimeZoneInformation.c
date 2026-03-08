/*
 * XREFs of RtlpCheckDynamicTimeZoneInformation @ 0x140811C80
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlpFindRegTziForCurrentYear @ 0x140388568 (RtlpFindRegTziForCurrentYear.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140811DC4 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpRegTziFormatToTzi @ 0x140812584 (RtlpRegTziFormatToTzi.c)
 */

char __fastcall RtlpCheckDynamicTimeZoneInformation(char *Buf2, __int16 a2)
{
  char v4; // di
  __int128 v5; // xmm1
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  char *v22; // rbx
  __int64 v23; // rax
  __int128 v24; // xmm1
  _OWORD v25[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h]
  __int128 Buf1; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-90h]
  __int128 v30; // [rsp+80h] [rbp-80h]
  __int128 v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  __int128 v34; // [rsp+C0h] [rbp-40h]
  __int128 v35; // [rsp+D0h] [rbp-30h]
  __int128 v36; // [rsp+E0h] [rbp-20h]
  __int128 v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+108h] [rbp+8h]

  v26 = 0LL;
  v27 = 0;
  v4 = 0;
  memset(v25, 0, sizeof(v25));
  if ( (int)RtlpGetDynamicTimeZoneInfoHandle((NTSTRSAFE_PCWSTR)Buf2 + 86) >= 0 )
  {
    if ( (int)RtlpFindRegTziForCurrentYear((__int64)v25, 0LL, a2) >= 0 )
    {
      v5 = *((_OWORD *)Buf2 + 1);
      Buf1 = *(_OWORD *)Buf2;
      v6 = *((_QWORD *)Buf2 + 20);
      v7 = *((_OWORD *)Buf2 + 2);
      v29 = v5;
      v8 = *((_OWORD *)Buf2 + 3);
      v30 = v7;
      v9 = *((_OWORD *)Buf2 + 4);
      v31 = v8;
      v10 = *((_OWORD *)Buf2 + 5);
      v32 = v9;
      v11 = *((_OWORD *)Buf2 + 6);
      v33 = v10;
      v12 = *((_OWORD *)Buf2 + 8);
      v34 = v11;
      v35 = *((_OWORD *)Buf2 + 7);
      v13 = *((_OWORD *)Buf2 + 9);
      v36 = v12;
      v37 = v13;
      v38 = v6;
      v39 = *((_DWORD *)Buf2 + 42);
      RtlpRegTziFormatToTzi(&Buf1, v25);
      if ( memcmp(&Buf1, Buf2, 0xACuLL) )
      {
        v4 = 1;
        v15 = v29;
        *(_OWORD *)Buf2 = Buf1;
        v16 = v30;
        *((_OWORD *)Buf2 + 1) = v15;
        v17 = v31;
        *((_OWORD *)Buf2 + 2) = v16;
        v18 = v32;
        *((_OWORD *)Buf2 + 3) = v17;
        v19 = v33;
        *((_OWORD *)Buf2 + 4) = v18;
        v20 = v34;
        *((_OWORD *)Buf2 + 5) = v19;
        v21 = v35;
        *((_OWORD *)Buf2 + 6) = v20;
        v22 = Buf2 + 128;
        *((_OWORD *)v22 - 1) = v21;
        v23 = v38;
        v24 = v37;
        *(_OWORD *)v22 = v36;
        *((_OWORD *)v22 + 1) = v24;
        *((_QWORD *)v22 + 4) = v23;
        *((_DWORD *)v22 + 10) = v39;
      }
    }
    ZwClose(0LL);
  }
  return v4;
}
