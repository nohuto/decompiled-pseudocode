/*
 * XREFs of PopPlRegisterComponent @ 0x140393310
 * Callers:
 *     PopPlRegisterDeviceIterator @ 0x14059F270 (PopPlRegisterDeviceIterator.c)
 *     PopFxRegisterDeviceWorker @ 0x14083714C (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopPlLookupComponentPowerProfile @ 0x14059EE60 (PopPlLookupComponentPowerProfile.c)
 */

void __fastcall PopPlRegisterComponent(__int64 a1)
{
  __int64 v1; // rdx
  bool v2; // zf
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-69h]
  int v9; // [rsp+28h] [rbp-61h]
  __int16 v10; // [rsp+40h] [rbp-49h] BYREF
  BOOL v11; // [rsp+44h] [rbp-45h] BYREF
  int v12; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-39h] BYREF
  __int16 *v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+7Ch] [rbp-Dh]
  __int64 v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+88h] [rbp-1h]
  int v19; // [rsp+8Ch] [rbp+3h]
  BOOL *v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+98h] [rbp+Fh]
  int v22; // [rsp+9Ch] [rbp+13h]
  int *v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A8h] [rbp+1Fh]
  int v25; // [rsp+ACh] [rbp+23h]
  _DWORD *v26; // [rsp+B0h] [rbp+27h]
  int v27; // [rsp+B8h] [rbp+2Fh]
  int v28; // [rsp+BCh] [rbp+33h]
  __int64 v29; // [rsp+C0h] [rbp+37h]
  _DWORD v30[2]; // [rsp+C8h] [rbp+3Fh] BYREF

  v1 = a1;
  if ( PopPowerPlane )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1184LL);
    if ( v6 )
    {
      v7 = PopPlLookupComponentPowerProfile(v6, v1);
      if ( v7 )
        *(_QWORD *)(v1 + 432) = v7;
    }
  }
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v10;
    v2 = *(_QWORD *)(v1 + 432) == 0LL;
    v17 = v1;
    v10 = 1;
    v22 = 0;
    v25 = 0;
    v11 = !v2;
    v20 = &v11;
    v12 = *(_DWORD *)(v1 + 156);
    v23 = &v12;
    v3 = *(_QWORD *)(v1 + 80);
    v21 = 4;
    v24 = 4;
    v15 = 2;
    v18 = 16;
    v4 = *(unsigned __int16 *)(v3 + 216);
    v5 = *(_QWORD *)(v3 + 224);
    v28 = 0;
    v30[1] = 0;
    v26 = v30;
    v29 = v5;
    v30[0] = v4;
    v27 = 2;
    tlgWriteEx_EtwWriteEx((__int64)&dword_140C03928, (unsigned __int8 *)&byte_140031F39, 2LL, 1u, v8, v9, 8u, &v13);
  }
}
