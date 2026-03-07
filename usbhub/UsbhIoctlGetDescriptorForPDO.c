__int64 __fastcall UsbhIoctlGetDescriptorForPDO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        char *a6,
        char a7,
        char a8)
{
  int v12; // r10d
  __int64 v13; // rbx
  _DWORD *v14; // r14
  __int64 v15; // r12
  int v16; // r10d
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  char v19; // al
  _WORD *v20; // rdx
  unsigned __int16 v21; // si
  unsigned __int16 v22; // si
  int v23; // r10d
  int v24; // r8d
  char v25; // al
  unsigned __int16 v26; // r11
  __int64 v27; // r15

  Log(a1, 32, 1195659313, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x21u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
    v12 = 32;
  }
  if ( *(_WORD *)(a4 + 6) > *a5 )
  {
    Log(a1, v12, 1195659314, a2, 0LL);
    LODWORD(v13) = -1073741789;
    goto LABEL_65;
  }
  if ( *(_BYTE *)(a4 + 1) != 6 )
  {
    Log(a1, v12, 1195659315, a2, *(unsigned __int8 *)(a4 + 1));
LABEL_8:
    LODWORD(v13) = -1073741811;
    goto LABEL_65;
  }
  if ( *(char *)a4 >= 0 )
  {
    Log(a1, v12, 1195659316, a2, 0LL);
    goto LABEL_8;
  }
  v14 = PdoExt(a2);
  v15 = UsbhRefPdoDeviceHandle(a1, a2, a3, 0x48446E67u);
  Log(a1, 32, 1919304753, 0LL, v15);
  if ( v15 && !a8 )
  {
    if ( a7 )
    {
      v17 = FdoExt(a1);
      UsbhReleaseFdoPnpLock(a1, (__int64)(v17 + 434));
    }
    v13 = (int)UsbhSyncSendCommandToDevice(a1, a2, (_BYTE *)a4, (__int64)a6, a5);
    UsbhDerefPdoDeviceHandle(a1, v15, a3, 0x48446E67u);
    if ( a7 )
    {
      v18 = FdoExt(a1);
      UsbhAcquireFdoPnpLock(a1, (__int64)(v18 + 434), 11, -267583477, 0);
    }
    Log(a1, 32, 1195659316, v13, 0LL);
    goto LABEL_65;
  }
  v19 = *(_BYTE *)(a4 + 3);
  if ( v19 == 2 )
  {
    if ( !*(_BYTE *)(a4 + 2) )
    {
      v20 = (_WORD *)*((_QWORD *)v14 + 299);
      goto LABEL_21;
    }
    goto LABEL_42;
  }
  if ( v19 != 1 )
  {
    if ( v19 == 15 && !*(_BYTE *)(a4 + 2) )
    {
      v20 = (_WORD *)*((_QWORD *)v14 + 300);
LABEL_21:
      if ( v20 )
      {
        v21 = v20[1];
        if ( *a5 <= v21 )
          v21 = *a5;
        if ( v21 <= *(_WORD *)(a4 + 6) && v21 <= *a5 && v21 )
        {
          memmove(a6, v20, v21);
          LODWORD(v13) = 0;
        }
        else
        {
          LODWORD(v13) = -1073741823;
          v21 = 0;
        }
        *a5 = v21;
        goto LABEL_63;
      }
      goto LABEL_61;
    }
    goto LABEL_42;
  }
  if ( *(_BYTE *)(a4 + 2) )
  {
LABEL_42:
    if ( v19 != 3 )
      goto LABEL_62;
    v25 = *(_BYTE *)(a4 + 2);
    if ( !v25 || v25 != *((_BYTE *)v14 + 1416) || !*((_QWORD *)v14 + 267) || !v14[533] || *(_WORD *)(a4 + 4) != 1033 )
      goto LABEL_62;
    v22 = *((_WORD *)v14 + 1066);
    if ( *(unsigned __int8 *)a5 <= v22 )
      v22 = *(unsigned __int8 *)a5;
    Log(a1, v16, 1195659319, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v22 <= *(_WORD *)(a4 + 6) && v22 <= *a5 )
    {
      if ( v22 )
        *a6 = v22;
      if ( v22 < v26 || (a6[1] = 3, v22 <= v26) )
      {
        v27 = v22;
      }
      else
      {
        v27 = v22;
        memmove(a6 + 2, *((const void **)v14 + 267), v22 - 2LL);
        v23 = 32;
      }
      *a5 = v22;
      Log(a1, v23, 1195659320, (__int64)a6, v27);
      goto LABEL_37;
    }
    v24 = 1195659321;
    goto LABEL_60;
  }
  v22 = *a5;
  if ( *a5 > 0x12u )
    v22 = 18;
  Log(a1, v16, 1195659316, *(unsigned __int16 *)(a4 + 6), *a5);
  if ( v22 <= *(_WORD *)(a4 + 6) && v22 <= *a5 )
  {
    memmove(a6, v14 + 350, v22);
    *a5 = v22;
    Log(a1, 32, 1195659317, (__int64)a6, v22);
LABEL_37:
    LODWORD(v13) = 0;
    goto LABEL_63;
  }
  v24 = 1195659318;
LABEL_60:
  Log(a1, v23, v24, (__int64)a6, v22);
LABEL_61:
  *a5 = 0;
LABEL_62:
  LODWORD(v13) = -1073741823;
LABEL_63:
  if ( v15 )
    UsbhDerefPdoDeviceHandle(a1, v15, a3, 0x48446E67u);
LABEL_65:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x22u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v13);
  return (unsigned int)v13;
}
