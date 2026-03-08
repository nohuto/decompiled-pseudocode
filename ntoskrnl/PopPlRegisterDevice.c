/*
 * XREFs of PopPlRegisterDevice @ 0x1403937A4
 * Callers:
 *     PopPlRegisterDeviceIterator @ 0x14059F270 (PopPlRegisterDeviceIterator.c)
 *     PopFxRegisterDeviceWorker @ 0x14083714C (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopPlLookupDevicePowerProfile @ 0x14059EEB4 (PopPlLookupDevicePowerProfile.c)
 */

bool __fastcall PopPlRegisterDevice(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // zf
  __int64 v6; // rax
  int v7; // [rsp+20h] [rbp-59h]
  int v8; // [rsp+28h] [rbp-51h]
  __int16 v9; // [rsp+40h] [rbp-39h] BYREF
  BOOL v10; // [rsp+44h] [rbp-35h] BYREF
  int v11; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-29h] BYREF
  __int16 *v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  _DWORD *v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  __int64 v19; // [rsp+90h] [rbp+17h]
  _DWORD v20[2]; // [rsp+98h] [rbp+1Fh] BYREF
  BOOL *v21; // [rsp+A0h] [rbp+27h]
  int v22; // [rsp+A8h] [rbp+2Fh]
  int v23; // [rsp+ACh] [rbp+33h]
  int *v24; // [rsp+B0h] [rbp+37h]
  int v25; // [rsp+B8h] [rbp+3Fh]
  int v26; // [rsp+BCh] [rbp+43h]

  if ( PopPowerPlane )
  {
    v6 = PopPlLookupDevicePowerProfile(PopPowerPlane, a1 + 216);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 24) = a1;
      *(_QWORD *)(a1 + 1184) = v6;
    }
  }
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v15 = 0;
    v18 = 0;
    v20[1] = 0;
    v13 = &v9;
    v16 = v20;
    v19 = *(_QWORD *)(a1 + 224);
    v20[0] = *(unsigned __int16 *)(a1 + 216);
    v4 = *(_QWORD *)(a1 + 1184) == 0LL;
    v14 = 2;
    v17 = 2;
    v23 = 0;
    v26 = 0;
    v10 = !v4;
    v21 = &v10;
    v11 = *(_DWORD *)(a1 + 828);
    v24 = &v11;
    v22 = 4;
    v25 = 4;
    v9 = 1;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140C03928, (unsigned __int8 *)&byte_1400320C0, a3, 1u, v7, v8, 7u, &v12);
  }
  return *(_QWORD *)(a1 + 1184) != 0LL;
}
