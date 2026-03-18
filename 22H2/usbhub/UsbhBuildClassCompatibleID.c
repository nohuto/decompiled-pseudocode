/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x1C004F94C
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C004FEC0 (UsbhBuildCompatibleID.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     Feature_2473223486__private_IsEnabledDeviceUsage @ 0x1C001CFD8 (Feature_2473223486__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhMakeId @ 0x1C0051A64 (UsbhMakeId.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0051E1C (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _DWORD *v6; // r15
  __int16 v7; // di
  __int16 v8; // r12
  __int16 v9; // r13
  int v10; // r11d
  __int16 v11; // dx
  int v12; // r10d
  __int64 v13; // rdi
  const char *v14; // rdi
  SIZE_T v15; // rbx
  __int64 v16; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v18; // r13
  _WORD *v19; // rcx
  unsigned int i; // edx
  __int16 v21; // ax
  __int64 Id; // rax
  char *Str; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  char *v28; // rax
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // r10d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r8d
  __int64 v43; // r10
  char v44; // r11
  __int16 v45; // [rsp+40h] [rbp-10h]
  int v46[3]; // [rsp+44h] [rbp-Ch] BYREF
  __int16 v49; // [rsp+A8h] [rbp+58h]

  v4 = a3;
  v5 = a2;
  v6 = PdoExt(a2);
  v46[0] = 0;
  v7 = *((unsigned __int8 *)v6 + 2439);
  v8 = *((unsigned __int8 *)v6 + 2438);
  v9 = *((unsigned __int8 *)v6 + 2440);
  v49 = v7;
  v45 = v9;
  Log(a1, 4096, 1684228420, *((unsigned __int8 *)v6 + 2438), *((unsigned __int8 *)v6 + 2439));
  v11 = v10 + 1;
  v12 = v10 + 2;
  if ( (v6[706] & 0x20) != 0 )
  {
    v13 = *((_QWORD *)v6 + 356);
    if ( *(_BYTE *)(v13 + 12) )
    {
      v14 = (const char *)(v13 + 4);
      if ( *v14 )
      {
        v15 = 26LL;
        if ( (unsigned int)Feature_2473223486__private_IsEnabledDeviceUsage() )
        {
          if ( v14 )
            v15 = 2 * strnlen(v14, 8uLL) + 24;
        }
        else if ( v14 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v14[v16] );
          v15 = 2 * v16 + 24;
        }
        PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), v15, 0x42554855u);
        v18 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_31;
        memset(PoolWithTag, 0, v15);
        v19 = v18;
        v46[0] = v15;
        *(_OWORD *)v18 = *(_OWORD *)L"USB\\MS_COMP_n";
        *((_QWORD *)v18 + 2) = *(_QWORD *)L"OMP_n";
        for ( v18[12] = *(_WORD *)L"n"; *v19 != 110; ++v19 )
          ;
        if ( v14 )
        {
          for ( i = 0; i < 8; ++i )
          {
            v21 = *(unsigned __int8 *)v14;
            if ( !(_BYTE)v21 )
              break;
            *v19++ = v21;
            ++v14;
          }
          v5 = a2;
        }
        Id = UsbhMakeId(2, (int)L"&MS_SUBCOMP_n", (int)v18, (int)v46, 1, 1, 0, (char *)(*((_QWORD *)v6 + 356) + 12LL));
        v10 = Id;
        if ( !Id )
          goto LABEL_31;
        v4 = a3;
        v11 = 1;
        v9 = v45;
        v12 = 2;
      }
    }
    Str = (char *)(*((_QWORD *)v6 + 356) + 4LL);
    if ( !*Str || (v24 = UsbhMakeId(v12, (int)L"USB\\MS_COMP_n", v10, (int)v46, v11, v11, 0, Str), v10 = v24, v24) )
    {
      v7 = v49;
      goto LABEL_35;
    }
    goto LABEL_31;
  }
  v25 = *((_QWORD *)v6 + 316);
  if ( v25 )
  {
    if ( *(_BYTE *)(v25 + 26) )
    {
      v26 = UsbhMakeId(v12, (int)L"USB\\MS_COMP_n", 0, (int)v46, 0, v11, 0, (char *)(v25 + 18));
      if ( !v26 )
        goto LABEL_31;
      v27 = UsbhMakeId(2, (int)L"&MS_SUBCOMP_n", v26, (int)v46, 1, 1, 0, (char *)(*((_QWORD *)v6 + 316) + 26LL));
      v10 = v27;
      if ( !v27 )
        goto LABEL_31;
      v4 = a3;
      v11 = 1;
      v12 = 2;
    }
    v28 = (char *)(*((_QWORD *)v6 + 316) + 18LL);
    if ( *v28 )
    {
      v29 = UsbhMakeId(v12, (int)L"USB\\MS_COMP_n", v10, (int)v46, v11, v11, 0, v28);
      v10 = v29;
      if ( !v29 )
      {
LABEL_31:
        v30 = 4;
LABEL_32:
        v31 = 1667839265;
LABEL_33:
        v32 = v5;
        v33 = a1;
LABEL_34:
        Log(v33, v30, v31, v32, -1073741670LL);
        return v34;
      }
    }
  }
LABEL_35:
  v36 = UsbhMakeId(0, (int)L"USB\\Class_nn", v10, (int)v46, 0, 2, v8, 0LL);
  if ( !v36 )
  {
    v30 = 4096;
    goto LABEL_32;
  }
  v37 = UsbhMakeId(0, (int)L"&SubClass_nn", v36, (int)v46, 0, 2, v7, 0LL);
  if ( !v37 )
  {
    v30 = 4096;
    v31 = 1667839009;
    goto LABEL_33;
  }
  v38 = UsbhMakeId(0, (int)L"&Prot_nn", v37, (int)v46, 1, 2, v9, 0LL);
  if ( !v38 )
  {
    v30 = 4096;
    v31 = 1667838753;
    goto LABEL_33;
  }
  v39 = UsbhMakeId(0, (int)L"USB\\Class_nn", v38, (int)v46, 0, 2, v8, 0LL);
  if ( !v39 )
  {
    v30 = 4096;
    v31 = 1667838497;
    goto LABEL_33;
  }
  v40 = UsbhMakeId(0, (int)L"&SubClass_nn", v39, (int)v46, 1, 2, v7, 0LL);
  if ( !v40 )
  {
    v30 = 4096;
    v31 = 1667838241;
    goto LABEL_33;
  }
  v41 = UsbhMakeId(0, (int)L"USB\\Class_nn", v40, (int)v46, 2, 2, v8, 0LL);
  v32 = v5;
  v30 = 4096;
  v33 = a1;
  if ( !v41 )
  {
    v31 = 1667837985;
    goto LABEL_34;
  }
  *(_DWORD *)(v4 + 4) = v46[0];
  *(_QWORD *)(v4 + 8) = v41;
  Log(a1, 4096, 1667459428, v5, v41);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_Sd(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v42,
        19,
        (__int64)&WPP_702859756c5835a51fae8c331fd03d9d_Traceguids,
        v43,
        v44);
  }
  return 0LL;
}
