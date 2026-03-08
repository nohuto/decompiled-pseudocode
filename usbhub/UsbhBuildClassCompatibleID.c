/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x1C004EE18
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C004F2B4 (UsbhBuildCompatibleID.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhBuildVendorSpecificCompatibleIDs @ 0x1C0022B08 (UsbhBuildVendorSpecificCompatibleIDs.c)
 *     UsbhMakeId @ 0x1C0050D48 (UsbhMakeId.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C005109C (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rsi
  __int16 v7; // r14
  __int16 v8; // r12
  __int16 v9; // r13
  void *v10; // r11
  __int16 v11; // dx
  int v12; // r10d
  __int64 v13; // rax
  char *Str; // rax
  __int64 v15; // rax
  char *v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // r10d
  __int64 v24; // rax
  __int64 Id; // rax
  char *v26; // rax
  void *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // r10
  char v36; // r11
  int v37; // [rsp+88h] [rbp+48h] BYREF

  v6 = PdoExt(a2);
  v37 = 0;
  v7 = *((unsigned __int8 *)v6 + 2438);
  v8 = *((unsigned __int8 *)v6 + 2439);
  v9 = *((unsigned __int8 *)v6 + 2440);
  Log(a1, 4096, 1684228420, *((unsigned __int8 *)v6 + 2438), *((unsigned __int8 *)v6 + 2439));
  v11 = (_WORD)v10 + 1;
  v12 = (_DWORD)v10 + 2;
  if ( (v6[706] & 0x20) == 0 )
  {
    v24 = *((_QWORD *)v6 + 316);
    if ( !v24 )
      goto LABEL_21;
    if ( *(_BYTE *)(v24 + 26) )
    {
      Id = UsbhMakeId(v12, (int)L"USB\\MS_COMP_n", 0, (int)&v37, 0, v11, 0, (char *)(v24 + 18));
      if ( !Id )
        goto LABEL_10;
      v10 = (void *)UsbhMakeId(2, (int)L"&MS_SUBCOMP_n", Id, (int)&v37, 1, 1, 0, (char *)(*((_QWORD *)v6 + 316) + 26LL));
      if ( !v10 )
        goto LABEL_10;
      v11 = 1;
      v12 = 2;
    }
    v26 = (char *)(*((_QWORD *)v6 + 316) + 18LL);
    if ( !*v26 )
      goto LABEL_21;
    v17 = UsbhMakeId(v12, (int)L"USB\\MS_COMP_n", (int)v10, (int)&v37, v11, v11, 0, v26);
    goto LABEL_9;
  }
  v13 = *((_QWORD *)v6 + 356);
  if ( *(_BYTE *)(v13 + 12) )
  {
    Str = (char *)(v13 + 4);
    if ( *Str )
    {
      v15 = UsbhMakeId(v12, (int)L"USB\\MS_COMP_n", 0, (int)&v37, 0, v11, 0, Str);
      if ( !v15 )
        goto LABEL_10;
      v10 = (void *)UsbhMakeId(
                      2,
                      (int)L"&MS_SUBCOMP_n",
                      v15,
                      (int)&v37,
                      1,
                      1,
                      0,
                      (char *)(*((_QWORD *)v6 + 356) + 12LL));
      if ( !v10 )
        goto LABEL_10;
      v11 = 1;
      v12 = 2;
    }
  }
  v16 = (char *)(*((_QWORD *)v6 + 356) + 4LL);
  if ( *v16 )
  {
    v17 = UsbhMakeId(v12, (int)L"USB\\MS_COMP_n", (int)v10, (int)&v37, v11, v11, 0, v16);
LABEL_9:
    v10 = (void *)v17;
    if ( !v17 )
    {
LABEL_10:
      v18 = 4;
LABEL_11:
      v19 = 1667839265;
LABEL_12:
      v20 = a2;
      v21 = a1;
LABEL_13:
      Log(v21, v18, v19, v20, -1073741670LL);
      return v22;
    }
  }
LABEL_21:
  v27 = UsbhBuildVendorSpecificCompatibleIDs(a1, a2, v10, (unsigned int *)&v37);
  if ( !v27 )
    return 3221225473LL;
  v28 = UsbhMakeId(0, (int)L"USB\\Class_nn", (int)v27, (int)&v37, 0, 2, v7, 0LL);
  if ( !v28 )
  {
    v18 = 4096;
    goto LABEL_11;
  }
  v29 = UsbhMakeId(0, (int)L"&SubClass_nn", v28, (int)&v37, 0, 2, v8, 0LL);
  if ( !v29 )
  {
    v18 = 4096;
    v19 = 1667839009;
    goto LABEL_12;
  }
  v30 = UsbhMakeId(0, (int)L"&Prot_nn", v29, (int)&v37, 1, 2, v9, 0LL);
  if ( !v30 )
  {
    v18 = 4096;
    v19 = 1667838753;
    goto LABEL_12;
  }
  v31 = UsbhMakeId(0, (int)L"USB\\Class_nn", v30, (int)&v37, 0, 2, v7, 0LL);
  if ( !v31 )
  {
    v18 = 4096;
    v19 = 1667838497;
    goto LABEL_12;
  }
  v32 = UsbhMakeId(0, (int)L"&SubClass_nn", v31, (int)&v37, 1, 2, v8, 0LL);
  if ( !v32 )
  {
    v18 = 4096;
    v19 = 1667838241;
    goto LABEL_12;
  }
  v33 = UsbhMakeId(0, (int)L"USB\\Class_nn", v32, (int)&v37, 2, 2, v7, 0LL);
  v20 = a2;
  v18 = 4096;
  v21 = a1;
  if ( !v33 )
  {
    v19 = 1667837985;
    goto LABEL_13;
  }
  *(_DWORD *)(a3 + 4) = v37;
  *(_QWORD *)(a3 + 8) = v33;
  Log(a1, 4096, 1667459428, a2, v33);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_Sd(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v34,
        19,
        (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
        v35,
        v36);
  }
  return 0LL;
}
