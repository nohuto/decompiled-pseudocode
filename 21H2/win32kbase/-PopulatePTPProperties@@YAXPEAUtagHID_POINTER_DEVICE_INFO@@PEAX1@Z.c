/*
 * XREFs of ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1C016BAD4
 * Callers:
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1C016BE68 (RIMPopulateExtendedPointerDeviceProperties.c)
 * Callees:
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C006C670 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?WritePTPProperty@@YAXW4PTPRegistryEntry@@PEAX1K@Z @ 0x1C00CC774 (-WritePTPProperty@@YAXW4PTPRegistryEntry@@PEAX1K@Z.c)
 */

void __fastcall PopulatePTPProperties(struct tagHID_POINTER_DEVICE_INFO *a1, void *a2, void *a3)
{
  int *v4; // rdi
  const unsigned __int16 **v6; // rsi
  __int64 v8; // r14
  int v9; // edi
  int v10; // eax
  int v11; // r10d
  int v12; // r8d
  int v13; // esi
  int v14; // r11d
  int v15; // r9d
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  int v19; // r14d
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  __int128 v23; // [rsp+30h] [rbp-89h]
  int v24; // [rsp+40h] [rbp-79h]
  char v25; // [rsp+44h] [rbp-75h] BYREF
  int v26; // [rsp+48h] [rbp-71h]
  char v27; // [rsp+4Ch] [rbp-6Dh]
  int v28; // [rsp+50h] [rbp-69h]
  char v29; // [rsp+54h] [rbp-65h]
  int v30; // [rsp+58h] [rbp-61h]
  int v31; // [rsp+60h] [rbp-59h]
  int v32; // [rsp+68h] [rbp-51h]
  int v33; // [rsp+70h] [rbp-49h]
  int v34; // [rsp+78h] [rbp-41h]
  int v35; // [rsp+80h] [rbp-39h]
  int v36; // [rsp+88h] [rbp-31h]
  int v37; // [rsp+90h] [rbp-29h]
  int v38; // [rsp+98h] [rbp-21h]
  int v39; // [rsp+A0h] [rbp-19h]
  int v40; // [rsp+A8h] [rbp-11h]
  int v41; // [rsp+B0h] [rbp-9h]
  int v42; // [rsp+B8h] [rbp-1h]
  int v43; // [rsp+C0h] [rbp+7h]

  v4 = (int *)&v25;
  v6 = (const unsigned __int16 **)&off_1C024A928;
  v8 = 17LL;
  do
  {
    *(_BYTE *)v4 = ReadDevicePropertyFromRegistry(*v6, a2, a3, *((_DWORD *)v6 - 1), v4 - 1);
    v4 += 2;
    v6 += 2;
    --v8;
  }
  while ( v8 );
  v9 = 0;
  if ( v25 && v27 && v29 )
  {
    *((_DWORD *)a1 + 68) = v24;
    *((_DWORD *)a1 + 69) = v26;
    *((_DWORD *)a1 + 70) = v28;
    v10 = v30;
  }
  else
  {
    v11 = *((_DWORD *)a1 + 37);
    v12 = v32;
    v23 = *(_OWORD *)((char *)a1 + 140);
    if ( v33 && v32 )
      v12 = -v32;
    v14 = v31 + v35;
    if ( v12 > v31 + v35 )
    {
      v11 = *(_QWORD *)((char *)a1 + 148);
      v15 = HIDWORD(*(_QWORD *)((char *)a1 + 140));
      v16 = *(_OWORD *)((char *)a1 + 140);
    }
    else
    {
      v15 = *((_DWORD *)a1 + 36);
      v16 = *((_DWORD *)a1 + 35);
      if ( v15 - v31 + v34 > v15 )
        v15 = *((_DWORD *)a1 + 36) - v31 + v34;
      if ( *((_DWORD *)a1 + 37) / 2 - v14 - v12 > v16 )
        v16 = *((_DWORD *)a1 + 37) / 2 - v14 - v12;
      v13 = *((_DWORD *)a1 + 37) / 2;
      if ( v14 - v12 + v13 < v11 )
        v11 = v14 - v12 + v13;
    }
    *((_DWORD *)a1 + 68) = v16 - *((_DWORD *)a1 + 35);
    *((_DWORD *)a1 + 69) = v15 - *((_DWORD *)a1 + 36);
    *((_DWORD *)a1 + 70) = *((_DWORD *)a1 + 37) - v11;
    v10 = *((_DWORD *)a1 + 38) - HIDWORD(v23);
  }
  v17 = v40;
  *((_DWORD *)a1 + 71) = v10;
  *((_DWORD *)a1 + 72) = v36;
  *((_DWORD *)a1 + 73) = v37;
  *((_DWORD *)a1 + 74) = v38;
  *((_DWORD *)a1 + 75) = v39;
  if ( v42 )
  {
    v19 = v41;
  }
  else
  {
    v18 = v17 ^ v41;
    v17 = v41;
    v19 = v18 ^ v41;
    WritePTPProperty(13, a2, a3, v41);
    WritePTPProperty(14, a2, a3, v19);
    WritePTPProperty(15, a2, a3, 1);
  }
  v20 = dword_1C024A9F4;
  if ( (unsigned int)(v17 - 1) <= 0x63 )
    v20 = v17;
  *((_DWORD *)a1 + 76) = v20;
  v21 = dword_1C024AA04;
  if ( (unsigned int)(v19 - 1) <= 0x63 )
    v21 = v19;
  v22 = v43 == 0;
  *((_DWORD *)a1 + 77) = v21;
  LOBYTE(v9) = v22;
  *((_DWORD *)a1 + 67) = v9;
}
