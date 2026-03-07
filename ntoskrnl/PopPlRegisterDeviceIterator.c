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
  unsigned int v15; // [rsp+40h] [rbp-79h] BYREF
  int v16; // [rsp+44h] [rbp-75h] BYREF
  int v17; // [rsp+48h] [rbp-71h] BYREF
  int v18; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v19; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-59h] BYREF
  unsigned int *v21; // [rsp+80h] [rbp-39h]
  int v22; // [rsp+88h] [rbp-31h]
  int v23; // [rsp+8Ch] [rbp-2Dh]
  _DWORD *v24; // [rsp+90h] [rbp-29h]
  int v25; // [rsp+98h] [rbp-21h]
  int v26; // [rsp+9Ch] [rbp-1Dh]
  __int64 v27; // [rsp+A0h] [rbp-19h]
  _DWORD v28[2]; // [rsp+A8h] [rbp-11h] BYREF
  int *v29; // [rsp+B0h] [rbp-9h]
  int v30; // [rsp+B8h] [rbp-1h]
  int v31; // [rsp+BCh] [rbp+3h]
  int *v32; // [rsp+C0h] [rbp+7h]
  int v33; // [rsp+C8h] [rbp+Fh]
  int v34; // [rsp+CCh] [rbp+13h]
  int *v35; // [rsp+D0h] [rbp+17h]
  int v36; // [rsp+D8h] [rbp+1Fh]
  int v37; // [rsp+DCh] [rbp+23h]
  int *v38; // [rsp+E0h] [rbp+27h]
  int v39; // [rsp+E8h] [rbp+2Fh]
  int v40; // [rsp+ECh] [rbp+33h]

  v3 = *(_QWORD *)(a1 + 32);
  if ( PopPlRegisterDevice(v3, (__int64)a2, a3) )
  {
    for ( i = 0LL; i < *(unsigned int *)(v3 + 828); PopPlRegisterComponent(*(_QWORD *)(*(_QWORD *)(v3 + 832) + 8 * i++)) )
      ;
    v15 = 0;
    v6 = *(_QWORD *)(v3 + 1184);
    v16 = 1;
    v7 = PopPlCalculateDevicePowerDraw(v3, &v16, &v15, 0LL);
    *(_DWORD *)(v6 + 32) = v7;
    v9 = v7;
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      v23 = 0;
      v26 = 0;
      v28[1] = 0;
      v16 = 0;
      v31 = 0;
      v34 = 0;
      v18 = 0;
      v37 = 0;
      v21 = &v15;
      v24 = v28;
      v27 = *(_QWORD *)(v3 + 224);
      v28[0] = *(unsigned __int16 *)(v3 + 216);
      v29 = &v16;
      v32 = &v17;
      v35 = &v18;
      v10 = *(_QWORD *)(v6 + 16);
      v22 = 2;
      v25 = 2;
      v17 = v9;
      v30 = 4;
      v33 = 4;
      v36 = 4;
      LOWORD(v15) = 1;
      v11 = *(_DWORD *)(v10 + 28);
      v40 = 0;
      v19 = v11;
      v39 = 4;
      v38 = &v19;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140C03928, (unsigned __int8 *)&word_14003216E, v8, 1u, v13, v14, 9u, &v20);
    }
    *a2 += *(_DWORD *)(v6 + 32);
  }
  return 1;
}
