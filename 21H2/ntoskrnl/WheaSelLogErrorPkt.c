/*
 * XREFs of WheaSelLogErrorPkt @ 0x1405BE2CC
 * Callers:
 *     WheaSelLogEvent @ 0x1405BE3B8 (WheaSelLogEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WheapLogIpmiSELEvent @ 0x1405BD768 (WheapLogIpmiSELEvent.c)
 */

__int64 __fastcall WheaSelLogErrorPkt(__int64 a1)
{
  _DWORD *v1; // r9
  int v2; // ecx
  char *v3; // rdx
  int v4; // ecx
  int v5; // ecx
  __int64 *p_Src; // rcx
  int v7; // r8d
  int v8; // eax
  __int128 v9; // xmm0
  int v10; // eax
  size_t v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  int v14; // [rsp+28h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+38h] [rbp-38h]
  __int64 Src; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+48h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+60h] [rbp-10h]

  v1 = *(_DWORD **)(a1 + 32);
  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v2 = v1[14];
  v3 = (char *)v1 + (unsigned int)v1[16];
  v16 = 0;
  v20 = 0;
  Src = 0LL;
  v18 = 0;
  v19 = 0LL;
  v4 = v2 - 1;
  if ( !v4 )
  {
    p_Src = &Src;
    Src = *((_QWORD *)v3 + 5);
    v7 = 2;
    v18 = *((_DWORD *)v3 + 9);
LABEL_8:
    v11 = 12LL;
    return WheapLogIpmiSELEvent(p_Src, v11, v7);
  }
  v5 = v4 - 2;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      p_Src = &v15;
      v8 = *((_DWORD *)v3 + 2);
      v7 = 4;
      v15 = *(_QWORD *)v3;
      v16 = v8;
    }
    else
    {
      p_Src = &v13;
      LODWORD(v13) = v1[7];
      v7 = 5;
      HIDWORD(v13) = v1[5];
      v14 = v1[3];
    }
    goto LABEL_8;
  }
  v9 = *(_OWORD *)(v3 + 24);
  v10 = *((_DWORD *)v3 + 2);
  p_Src = (__int64 *)&v19;
  v11 = 20LL;
  v20 = v10;
  v19 = v9;
  v7 = 3;
  return WheapLogIpmiSELEvent(p_Src, v11, v7);
}
