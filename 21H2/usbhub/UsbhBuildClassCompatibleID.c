/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x1C004E528
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C004EA50 (UsbhBuildCompatibleID.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhMakeId @ 0x1C0050478 (UsbhMakeId.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C00507CC (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  _DWORD *v6; // r14
  __int16 v7; // si
  __int16 v8; // r12
  __int16 v9; // r15
  int v10; // r11d
  __int16 v11; // dx
  int v12; // r10d
  __int64 v13; // rsi
  _BYTE *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 Pool2; // rax
  int v18; // r8d
  _WORD *v19; // rcx
  unsigned int i; // edx
  __int16 v21; // ax
  __int64 Id; // rax
  _BYTE *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE *v28; // rax
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
  _DWORD v46[3]; // [rsp+44h] [rbp-Ch] BYREF
  __int16 v48; // [rsp+A8h] [rbp+58h]

  v5 = a2;
  v6 = PdoExt(a2);
  v46[0] = 0;
  v7 = *((unsigned __int8 *)v6 + 2439);
  v8 = *((unsigned __int8 *)v6 + 2438);
  v9 = *((unsigned __int8 *)v6 + 2440);
  v45 = v7;
  v48 = v9;
  Log(a1, 4096, 1684228420, *((unsigned __int8 *)v6 + 2438), *((unsigned __int8 *)v6 + 2439));
  v11 = v10 + 1;
  v12 = v10 + 2;
  if ( (v6[706] & 0x20) != 0 )
  {
    v13 = *((_QWORD *)v6 + 356);
    if ( *(_BYTE *)(v13 + 12) )
    {
      v14 = (_BYTE *)(v13 + 4);
      if ( *v14 )
      {
        v15 = (unsigned int)(v10 + 26);
        if ( v14 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v14[v16] );
          v15 = 2 * v16 + 24;
        }
        Pool2 = ExAllocatePool2(64LL, v15, 1112885333LL);
        v18 = Pool2;
        if ( !Pool2 )
          goto LABEL_28;
        v19 = (_WORD *)Pool2;
        v46[0] = v15;
        *(_OWORD *)Pool2 = *(_OWORD *)L"USB\\MS_COMP_n";
        *(_QWORD *)(Pool2 + 16) = *(_QWORD *)L"OMP_n";
        for ( *(_WORD *)(Pool2 + 24) = aUsbMsCompN[12]; *v19 != 110; ++v19 )
          ;
        if ( v14 )
        {
          for ( i = 0; i < 8; ++i )
          {
            v21 = (unsigned __int8)*v14;
            if ( !(_BYTE)v21 )
              break;
            *v19++ = v21;
            ++v14;
          }
          v5 = a2;
        }
        Id = UsbhMakeId(
               2,
               (unsigned int)L"&MS_SUBCOMP_n",
               v18,
               (unsigned int)v46,
               1,
               1,
               0,
               *((_QWORD *)v6 + 356) + 12LL);
        v10 = Id;
        if ( !Id )
          goto LABEL_28;
        v9 = v48;
        v11 = 1;
        v12 = 2;
      }
    }
    v23 = (_BYTE *)(*((_QWORD *)v6 + 356) + 4LL);
    if ( !*v23
      || (v24 = UsbhMakeId(v12, (unsigned int)L"USB\\MS_COMP_n", v10, (unsigned int)v46, v11, v11, 0, (__int64)v23),
          v10 = v24,
          v24) )
    {
      v7 = v45;
      goto LABEL_32;
    }
    goto LABEL_28;
  }
  v25 = *((_QWORD *)v6 + 316);
  if ( v25 )
  {
    if ( *(_BYTE *)(v25 + 26) )
    {
      v26 = UsbhMakeId(v12, (unsigned int)L"USB\\MS_COMP_n", 0, (unsigned int)v46, 0, v11, 0, v25 + 18);
      if ( !v26 )
        goto LABEL_28;
      v27 = UsbhMakeId(2, (unsigned int)L"&MS_SUBCOMP_n", v26, (unsigned int)v46, 1, 1, 0, *((_QWORD *)v6 + 316) + 26LL);
      v10 = v27;
      if ( !v27 )
        goto LABEL_28;
      v11 = 1;
      v12 = 2;
    }
    v28 = (_BYTE *)(*((_QWORD *)v6 + 316) + 18LL);
    if ( *v28 )
    {
      v29 = UsbhMakeId(v12, (unsigned int)L"USB\\MS_COMP_n", v10, (unsigned int)v46, v11, v11, 0, (__int64)v28);
      v10 = v29;
      if ( !v29 )
      {
LABEL_28:
        v30 = 4;
LABEL_29:
        v31 = 1667839265;
LABEL_30:
        v32 = v5;
        v33 = a1;
LABEL_31:
        Log(v33, v30, v31, v32, -1073741670LL);
        return v34;
      }
    }
  }
LABEL_32:
  v36 = UsbhMakeId(0, (unsigned int)L"USB\\Class_nn", v10, (unsigned int)v46, 0, 2, v8, 0LL);
  if ( !v36 )
  {
    v30 = 4096;
    goto LABEL_29;
  }
  v37 = UsbhMakeId(0, (unsigned int)L"&SubClass_nn", v36, (unsigned int)v46, 0, 2, v7, 0LL);
  if ( !v37 )
  {
    v30 = 4096;
    v31 = 1667839009;
    goto LABEL_30;
  }
  v38 = UsbhMakeId(0, (unsigned int)L"&Prot_nn", v37, (unsigned int)v46, 1, 2, v9, 0LL);
  if ( !v38 )
  {
    v30 = 4096;
    v31 = 1667838753;
    goto LABEL_30;
  }
  v39 = UsbhMakeId(0, (unsigned int)L"USB\\Class_nn", v38, (unsigned int)v46, 0, 2, v8, 0LL);
  if ( !v39 )
  {
    v30 = 4096;
    v31 = 1667838497;
    goto LABEL_30;
  }
  v40 = UsbhMakeId(0, (unsigned int)L"&SubClass_nn", v39, (unsigned int)v46, 1, 2, v7, 0LL);
  if ( !v40 )
  {
    v30 = 4096;
    v31 = 1667838241;
    goto LABEL_30;
  }
  v41 = UsbhMakeId(0, (unsigned int)L"USB\\Class_nn", v40, (unsigned int)v46, 2, 2, v8, 0LL);
  v32 = v5;
  v30 = 4096;
  v33 = a1;
  if ( !v41 )
  {
    v31 = 1667837985;
    goto LABEL_31;
  }
  *(_DWORD *)(a3 + 4) = v46[0];
  *(_QWORD *)(a3 + 8) = v41;
  Log(a1, 4096, 1667459428, v5, v41);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_Sd(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v42,
        19,
        (__int64)&WPP_864ab6fa16ac30e9f4a04b6140161349_Traceguids,
        v43,
        v44);
  }
  return 0LL;
}
