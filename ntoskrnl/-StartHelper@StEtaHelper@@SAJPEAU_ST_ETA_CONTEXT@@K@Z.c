/*
 * XREFs of ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x14035A46C
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x14035A528 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmcCacheStart @ 0x1409D812C (SmcCacheStart.c)
 * Callees:
 *     StEtaStart @ 0x14035A354 (StEtaStart.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall StEtaHelper::StartHelper(struct _ST_ETA_CONTEXT *a1, unsigned int a2)
{
  int *v2; // rax
  unsigned int *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-19h] BYREF
  _DWORD v6[2]; // [rsp+28h] [rbp-11h] BYREF
  _DWORD v7[2]; // [rsp+30h] [rbp-9h] BYREF
  _DWORD v8[2]; // [rsp+38h] [rbp-1h] BYREF
  int *v9[2]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v10[5]; // [rsp+50h] [rbp+17h] BYREF
  int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]

  v10[1] = 4096LL;
  v10[2] = 0x2000LL;
  v10[3] = 0x4000LL;
  v10[0] = 2048LL;
  v10[4] = 0x8000LL;
  v11 = -1;
  v12 = 0;
  v6[0] = -1;
  v6[1] = 100000000;
  v7[0] = -1;
  v7[1] = 0;
  v8[0] = -1;
  v8[1] = 0;
  if ( a2 )
  {
    v4 = (unsigned int *)v10;
    if ( a2 > 0x800 )
    {
      do
        v4 += 2;
      while ( *v4 < a2 );
    }
    *v4 = -1;
    v9[0] = (int *)v10;
    v2 = v6;
  }
  else
  {
    v9[0] = v7;
    v2 = v8;
  }
  v9[1] = v2;
  v5 = 983104LL;
  return StEtaStart((__int64)a1, v9, &v5);
}
