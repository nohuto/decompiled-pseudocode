/*
 * XREFs of UsbhGetNodeConnectionInfoForPdo @ 0x1C003E100
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003FE6C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0019C20 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0019ED0 (UsbhDerefPdoDeviceHandle.c)
 *     memset @ 0x1C0023880 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhGetDeviceInformationEx @ 0x1C003DF90 (UsbhGetDeviceInformationEx.c)
 */

__int64 __fastcall UsbhGetNodeConnectionInfoForPdo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6,
        char a7)
{
  int v11; // ebp
  _DWORD *v12; // rbx
  __int64 v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rdi
  _DWORD *DeviceInformation; // rax
  _DWORD *v17; // rdi
  char v18; // al
  unsigned int v19; // edx
  int v20; // r8d
  unsigned int v21; // r9d
  unsigned int i; // r10d
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v26; // [rsp+30h] [rbp-38h]
  _DWORD *v27; // [rsp+38h] [rbp-30h]
  int v28; // [rsp+80h] [rbp+18h] BYREF

  v28 = -1073741811;
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Au,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v12 = a5;
  Log(a1, 32, 1735290417, *(unsigned __int16 *)(a3 + 4), (__int64)a5);
  v27 = PdoExt(a4);
  v13 = UsbhRefPdoDeviceHandle(a1, a4, a2, 0x48446E67u);
  v14 = a6;
  v26 = v13;
  v15 = v13;
  memset(v12, 0, *a6);
  if ( v15 )
  {
    DeviceInformation = UsbhGetDeviceInformationEx(a1, &v28, v15);
    v11 = v28;
    v17 = DeviceInformation;
    Log(a1, 32, 1735281713, (__int64)DeviceInformation, v28);
    UsbhDerefPdoDeviceHandle(a1, v26, a2, 0x48446E67u);
    if ( v11 >= 0 )
    {
      *v12 = *(unsigned __int16 *)(a3 + 4);
      *(_OWORD *)(v12 + 1) = *(_OWORD *)(v17 + 3);
      *((_WORD *)v12 + 10) = *((_WORD *)v17 + 14);
      *((_BYTE *)v12 + 22) = *((_BYTE *)v17 + 32);
      if ( a7 )
        v18 = *((_BYTE *)v17 + 40);
      else
        v18 = v17[10] == 0;
      *((_BYTE *)v12 + 23) = v18;
      if ( PdoExt(a4)[280] == 101 )
        *((_BYTE *)v12 + 24) = (v27[355] & 4) != 0;
      *(_WORD *)((char *)v12 + 25) = *((_WORD *)v17 + 17);
      v19 = v17[12];
      *(_DWORD *)((char *)v12 + 27) = v19;
      v20 = *(_DWORD *)(a3 + 428);
      if ( v20 != 4 && *(_DWORD *)(a3 + 428) != 5 && (unsigned int)(*(_DWORD *)(a3 + 428) - 6) >= 2 )
        v20 = 1;
      *(_DWORD *)((char *)v12 + 31) = v20;
      v21 = 0;
      for ( i = *v14 - 35; v21 < v19; v19 = *(_DWORD *)((char *)v12 + 27) )
      {
        if ( i < 0xB )
          break;
        i -= 11;
        v23 = 11LL * v21;
        v24 = 3LL * v21++;
        *(_DWORD *)((char *)v12 + v23 + 35) = v17[v24 + 13];
        *(_WORD *)((char *)v12 + v23 + 39) = v17[v24 + 14];
        *((_BYTE *)v12 + v23 + 41) = BYTE2(v17[v24 + 14]);
        *(_DWORD *)((char *)v12 + v23 + 42) = v17[v24 + 15];
      }
      if ( v21 != v19 )
        Log(a1, 32, 1735290451, i, v19);
      *v14 -= i;
    }
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  else
  {
    Log(a1, 32, 1735290468, *(int *)(a3 + 428), (__int64)v12);
    *v12 = *(unsigned __int16 *)(a3 + 4);
    *(_DWORD *)((char *)v12 + 31) = *(_DWORD *)(a3 + 428);
    *v14 = 35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Bu,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v11);
  return (unsigned int)v11;
}
