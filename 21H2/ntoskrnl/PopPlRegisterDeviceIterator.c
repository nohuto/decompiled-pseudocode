/*
 * XREFs of PopPlRegisterDeviceIterator @ 0x14057EAD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     PopPlRegisterComponent @ 0x1403BE6A8 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403BE7B8 (PopPlRegisterDevice.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopPlCalculateDevicePowerDraw @ 0x14057E5A4 (PopPlCalculateDevicePowerDraw.c)
 */

char __fastcall PopPlRegisterDeviceIterator(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 i; // rdi
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rax
  int v11; // ecx
  int v13; // [rsp+20h] [rbp-99h]
  int v14; // [rsp+28h] [rbp-91h]
  __int16 v15; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-75h] BYREF
  int v17; // [rsp+48h] [rbp-71h] BYREF
  int v18; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v19; // [rsp+50h] [rbp-69h] BYREF
  int v20; // [rsp+54h] [rbp-65h] BYREF
  int v21; // [rsp+58h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+60h] [rbp-59h] BYREF
  __int16 *v23; // [rsp+80h] [rbp-39h]
  int v24; // [rsp+88h] [rbp-31h]
  int v25; // [rsp+8Ch] [rbp-2Dh]
  _DWORD *v26; // [rsp+90h] [rbp-29h]
  int v27; // [rsp+98h] [rbp-21h]
  int v28; // [rsp+9Ch] [rbp-1Dh]
  __int64 v29; // [rsp+A0h] [rbp-19h]
  _DWORD v30[2]; // [rsp+A8h] [rbp-11h] BYREF
  int *v31; // [rsp+B0h] [rbp-9h]
  int v32; // [rsp+B8h] [rbp-1h]
  int v33; // [rsp+BCh] [rbp+3h]
  int *v34; // [rsp+C0h] [rbp+7h]
  int v35; // [rsp+C8h] [rbp+Fh]
  int v36; // [rsp+CCh] [rbp+13h]
  int *v37; // [rsp+D0h] [rbp+17h]
  int v38; // [rsp+D8h] [rbp+1Fh]
  int v39; // [rsp+DCh] [rbp+23h]
  int *v40; // [rsp+E0h] [rbp+27h]
  int v41; // [rsp+E8h] [rbp+2Fh]
  int v42; // [rsp+ECh] [rbp+33h]

  v3 = *(_QWORD *)(a1 + 32);
  if ( PopPlRegisterDevice(v3, (__int64)a2, a3) )
  {
    for ( i = 0LL; i < *(unsigned int *)(v3 + 828); PopPlRegisterComponent(*(_QWORD *)(*(_QWORD *)(v3 + 832) + 8 * i++)) )
      ;
    v16 = 0;
    v6 = *(_QWORD *)(v3 + 1184);
    v17 = 1;
    v7 = PopPlCalculateDevicePowerDraw(v3, &v17, &v16, 0LL);
    *(_DWORD *)(v6 + 32) = v7;
    v9 = v7;
    if ( (unsigned int)dword_140C02228 > 5 )
    {
      v25 = 0;
      v28 = 0;
      v30[1] = 0;
      v18 = 0;
      v33 = 0;
      v36 = 0;
      v20 = 0;
      v39 = 0;
      v23 = &v15;
      v26 = v30;
      v29 = *(_QWORD *)(v3 + 224);
      v30[0] = *(unsigned __int16 *)(v3 + 216);
      v31 = &v18;
      v34 = &v19;
      v37 = &v20;
      v10 = *(_QWORD *)(v6 + 16);
      v24 = 2;
      v27 = 2;
      v19 = v9;
      v32 = 4;
      v35 = 4;
      v38 = 4;
      v15 = 1;
      v11 = *(_DWORD *)(v10 + 28);
      v42 = 0;
      v21 = v11;
      v41 = 4;
      v40 = &v21;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140C02228, (unsigned __int8 *)&word_14002A666, v8, 1u, v13, v14, 9u, &v22);
    }
    *a2 += *(_DWORD *)(v6 + 32);
  }
  return 1;
}
