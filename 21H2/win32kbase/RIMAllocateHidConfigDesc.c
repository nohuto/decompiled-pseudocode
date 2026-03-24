/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C0161020
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00572E8 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0054A8C (WPP_RECORDER_SF_S.c)
 *     RIMFreeHidDesc @ 0x1C0056658 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0057904 (WPP_RECORDER_SF_DD.c)
 *     Win32AllocPoolNonPaged @ 0x1C005B490 (Win32AllocPoolNonPaged.c)
 *     RIMGetDeviceParent @ 0x1C006CE50 (RIMGetDeviceParent.c)
 *     RIMDeliverConfigRequest @ 0x1C0161484 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C01619E8 (RIMFindInputDeviceForConfig.c)
 */

char *__fastcall RIMAllocateHidConfigDesc(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        _WORD *a5,
        __int64 a6)
{
  __int64 v8; // rsi
  _WORD *v10; // rdi
  int v11; // edx
  char *v12; // rbp
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r9d
  __int64 v19; // rax
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+98h] [rbp+20h] BYREF

  v8 = a2;
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 38, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    return 0LL;
  }
  v10 = a5;
  if ( !a5[4] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        a2,
        1,
        39,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        a5[1],
        *a5);
    }
    return 0LL;
  }
  v12 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v11,
        1,
        40,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        *(_QWORD *)(v8 + 216));
    }
    return 0LL;
  }
  v14 = Win32AllocPoolNonPaged((unsigned __int16)v10[4], 0x70707352u);
  *((_QWORD *)v12 + 4) = v14;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOWORD(v17) = v10[4];
      v18 = 41;
LABEL_32:
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v15, 1, v18, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v17);
      goto LABEL_33;
    }
    goto LABEL_33;
  }
  v19 = a6;
  *(_OWORD *)(v12 + 40) = *(_OWORD *)v10;
  v25 = 0;
  *(_OWORD *)(v12 + 56) = *((_OWORD *)v10 + 1);
  v23 = 0;
  *(_OWORD *)(v12 + 72) = *((_OWORD *)v10 + 2);
  v24 = 0LL;
  *(_OWORD *)(v12 + 88) = *((_OWORD *)v10 + 3);
  *((_QWORD *)v12 + 2) = a4;
  *((_QWORD *)v12 + 13) = *(_QWORD *)v19;
  *((_DWORD *)v12 + 28) = *(_DWORD *)(v19 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(a3, v8, v16)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, 42, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  if ( (unsigned int)RIMFindInputDeviceForConfig((_DWORD)v12, a1, v8, (unsigned int)&v25, (__int64)&v23, (__int64)&v24)
    && v25 )
  {
    v17 = *(_DWORD *)(a1 + 84);
    if ( v23 )
    {
      if ( (v17 & 0x10) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = 43;
          goto LABEL_32;
        }
LABEL_33:
        RIMFreeHidDesc((__int64)v12);
        return 0LL;
      }
      *(_DWORD *)(v8 + 184) |= 0x800u;
    }
    else
    {
      if ( (v17 & 8) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = 44;
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      *(_DWORD *)(v8 + 184) |= 0x1000u;
    }
    v21 = RIMDeliverConfigRequest((struct RIMDEV *)v8);
    if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 3;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v22, 1, 45, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v21);
    }
  }
  *(_BYTE *)(v8 + 48) = 3;
  return v12;
}
