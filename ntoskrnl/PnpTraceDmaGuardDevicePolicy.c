/*
 * XREFs of PnpTraceDmaGuardDevicePolicy @ 0x1408214A4
 * Callers:
 *     PipDmgSaveDeviceDmarPolicy @ 0x1408213C0 (PipDmgSaveDeviceDmarPolicy.c)
 * Callees:
 *     _tlgWriteAgg @ 0x14035EDD0 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PnpTraceDmaGuardDevicePolicy(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // r9d
  __int64 v4; // r10
  int v5; // r11d
  int v6; // [rsp+30h] [rbp-49h] BYREF
  __int64 v7; // [rsp+38h] [rbp-41h] BYREF
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  _DWORD *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  _DWORD v15[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  __int64 *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  if ( a2 && (unsigned int)dword_140C038F0 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C038F0, 0x400000000000LL) )
    {
      v6 = v3;
      v10 = &v7;
      v7 = 1LL;
      v12 = v15;
      v14 = *(_QWORD *)(v4 + 48);
      v15[0] = *(unsigned __int16 *)(v4 + 40);
      v16 = &v6;
      v18 = &v8;
      v11 = 8LL;
      v13 = 2LL;
      v15[1] = v5;
      v17 = 4LL;
      v8 = 2048LL;
      v19 = 8LL;
      tlgWriteAgg((__int64)&dword_140C038F0, (unsigned __int8 *)&byte_14002C8E5, v2, v5 + 7, &v9);
    }
  }
}
