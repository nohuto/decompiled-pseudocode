/*
 * XREFs of WheaSelLogErrorPkt @ 0x14060DC5C
 * Callers:
 *     WheaSelLogEvent @ 0x14060DD48 (WheaSelLogEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WheapLogIpmiSELEvent @ 0x140610F90 (WheapLogIpmiSELEvent.c)
 */

__int64 __fastcall WheaSelLogErrorPkt(__int64 a1)
{
  _DWORD *v1; // r9
  int v2; // ecx
  char *v3; // rdx
  int v4; // ecx
  int v5; // ecx
  __int64 *p_Src; // rcx
  int v7; // eax
  __int128 v8; // xmm0
  int v9; // eax
  size_t v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  int v13; // [rsp+28h] [rbp-48h]
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+38h] [rbp-38h]
  __int64 Src; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+60h] [rbp-10h]

  v1 = *(_DWORD **)(a1 + 32);
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v2 = v1[14];
  v3 = (char *)v1 + (unsigned int)v1[16];
  v15 = 0;
  v19 = 0;
  Src = 0LL;
  v17 = 0;
  v18 = 0LL;
  v4 = v2 - 1;
  if ( !v4 )
  {
    p_Src = &Src;
    Src = *((_QWORD *)v3 + 5);
    v17 = *((_DWORD *)v3 + 9);
LABEL_8:
    v10 = 12LL;
    return WheapLogIpmiSELEvent(p_Src, v10);
  }
  v5 = v4 - 2;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      p_Src = &v14;
      v7 = *((_DWORD *)v3 + 2);
      v14 = *(_QWORD *)v3;
      v15 = v7;
    }
    else
    {
      p_Src = &v12;
      LODWORD(v12) = v1[7];
      HIDWORD(v12) = v1[5];
      v13 = v1[3];
    }
    goto LABEL_8;
  }
  v8 = *(_OWORD *)(v3 + 24);
  v9 = *((_DWORD *)v3 + 2);
  p_Src = (__int64 *)&v18;
  v10 = 20LL;
  v19 = v9;
  v18 = v8;
  return WheapLogIpmiSELEvent(p_Src, v10);
}
