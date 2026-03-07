void __fastcall PopulatePTPProperties(struct tagHID_POINTER_DEVICE_INFO *a1, void *a2, void *a3)
{
  int *v4; // rdi
  const unsigned __int16 **v6; // rsi
  __int64 v8; // r14
  int v9; // r8d
  int v10; // eax
  int v11; // r11d
  int v12; // r9d
  int v13; // esi
  int v14; // edi
  int v15; // r10d
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  bool v21; // zf
  __int128 v22; // [rsp+30h] [rbp-79h]
  int v23; // [rsp+40h] [rbp-69h]
  char v24; // [rsp+44h] [rbp-65h] BYREF
  int v25; // [rsp+48h] [rbp-61h]
  char v26; // [rsp+4Ch] [rbp-5Dh]
  int v27; // [rsp+50h] [rbp-59h]
  char v28; // [rsp+54h] [rbp-55h]
  int v29; // [rsp+58h] [rbp-51h]
  int v30; // [rsp+60h] [rbp-49h]
  int v31; // [rsp+68h] [rbp-41h]
  int v32; // [rsp+70h] [rbp-39h]
  int v33; // [rsp+78h] [rbp-31h]
  int v34; // [rsp+80h] [rbp-29h]
  int v35; // [rsp+88h] [rbp-21h]
  int v36; // [rsp+90h] [rbp-19h]
  int v37; // [rsp+98h] [rbp-11h]
  int v38; // [rsp+A0h] [rbp-9h]
  int v39; // [rsp+A8h] [rbp-1h]
  int v40; // [rsp+B0h] [rbp+7h]
  int v41; // [rsp+B8h] [rbp+Fh]

  v4 = (int *)&v24;
  v6 = (const unsigned __int16 **)&off_1C0284E48;
  v8 = 16LL;
  do
  {
    *(_BYTE *)v4 = ReadDevicePropertyFromRegistry(*v6, a2, a3, *((_DWORD *)v6 - 1), v4 - 1);
    v4 += 2;
    v6 += 2;
    --v8;
  }
  while ( v8 );
  v9 = 0;
  if ( v24 && v26 && v28 )
  {
    *((_DWORD *)a1 + 68) = v23;
    *((_DWORD *)a1 + 69) = v25;
    *((_DWORD *)a1 + 70) = v27;
    v10 = v29;
  }
  else
  {
    v11 = *((_DWORD *)a1 + 37);
    v12 = v31;
    v22 = *(_OWORD *)((char *)a1 + 140);
    if ( v32 && v31 )
      v12 = -v31;
    v14 = v30 + v34;
    if ( v12 > v30 + v34 )
    {
      v11 = *(_QWORD *)((char *)a1 + 148);
      v15 = HIDWORD(*(_QWORD *)((char *)a1 + 140));
      v16 = *(_OWORD *)((char *)a1 + 140);
    }
    else
    {
      v15 = *((_DWORD *)a1 + 36);
      v16 = *((_DWORD *)a1 + 35);
      if ( v15 - v30 + v33 > v15 )
        v15 = *((_DWORD *)a1 + 36) - v30 + v33;
      if ( *((_DWORD *)a1 + 37) / 2 - v14 - v12 > v16 )
        v16 = *((_DWORD *)a1 + 37) / 2 - v14 - v12;
      v13 = *((_DWORD *)a1 + 37) / 2;
      if ( v14 - v12 + v13 < v11 )
        v11 = v14 - v12 + v13;
    }
    *((_DWORD *)a1 + 68) = v16 - *((_DWORD *)a1 + 35);
    *((_DWORD *)a1 + 69) = v15 - *((_DWORD *)a1 + 36);
    *((_DWORD *)a1 + 70) = *((_DWORD *)a1 + 37) - v11;
    v10 = *((_DWORD *)a1 + 38) - HIDWORD(v22);
  }
  v17 = v39;
  v18 = 50;
  *((_DWORD *)a1 + 71) = v10;
  *((_DWORD *)a1 + 72) = v35;
  *((_DWORD *)a1 + 73) = v36;
  *((_DWORD *)a1 + 74) = v37;
  *((_DWORD *)a1 + 75) = v38;
  if ( (unsigned int)(v17 - 1) <= 0x63 )
    v18 = v17;
  v19 = v40;
  *((_DWORD *)a1 + 76) = v18;
  v20 = 25;
  if ( (unsigned int)(v19 - 1) <= 0x63 )
    v20 = v19;
  v21 = v41 == 0;
  *((_DWORD *)a1 + 77) = v20;
  LOBYTE(v9) = v21;
  *((_DWORD *)a1 + 67) = v9;
}
