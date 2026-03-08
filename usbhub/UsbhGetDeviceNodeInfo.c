/*
 * XREFs of UsbhGetDeviceNodeInfo @ 0x1C004910C
 * Callers:
 *     UsbhPdoQueryWmiDataBlock @ 0x1C00497C0 (UsbhPdoQueryWmiDataBlock.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     memmove @ 0x1C0023580 (memmove.c)
 *     memset @ 0x1C0023880 (memset.c)
 *     UsbhGetDeviceInformationEx @ 0x1C003DF90 (UsbhGetDeviceInformationEx.c)
 *     UsbhBuildTopologyAddress @ 0x1C0048D58 (UsbhBuildTopologyAddress.c)
 */

__int64 __fastcall UsbhGetDeviceNodeInfo(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  size_t v6; // r12
  unsigned int v8; // esi
  _DWORD *v9; // r15
  __int64 v10; // r13
  __int64 result; // rax
  _DWORD *DeviceInformation; // rax
  _DWORD *v13; // rdi
  unsigned int v14; // ebp
  __int64 PortData; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // [rsp+60h] [rbp+18h] BYREF

  v6 = a3;
  v8 = 0;
  v9 = PdoExt(a1);
  v22 = 0;
  v10 = *((_QWORD *)v9 + 148);
  if ( (unsigned int)v6 < 0x4B2 )
  {
    *a4 = 1202;
    return 3221225507LL;
  }
  DeviceInformation = UsbhGetDeviceInformationEx(v10, &v22, a5);
  v13 = DeviceInformation;
  if ( v22 >= 0 )
  {
    v14 = 11 * DeviceInformation[12] + 1191;
    if ( v14 > (unsigned int)v6 )
    {
      *a4 = v14;
      ExFreePoolWithTag(DeviceInformation, 0);
      return 3221225507LL;
    }
    memset(a2, 0, v6);
    *a2 = 1431519822;
    a2[1] = v14;
    *(_OWORD *)(a2 + 2) = *(_OWORD *)((char *)v9 + 2442);
    *(_OWORD *)(a2 + 6) = *(_OWORD *)((char *)v9 + 2458);
    *(_OWORD *)(a2 + 10) = *(_OWORD *)((char *)v9 + 2474);
    *(_OWORD *)(a2 + 14) = *(_OWORD *)((char *)v9 + 2490);
    *(_OWORD *)(a2 + 18) = *(_OWORD *)((char *)v9 + 2506);
    a2[22] = 0;
    UsbhBuildTopologyAddress(v10, a2 + 23, *((_WORD *)v9 + 714));
    *(_OWORD *)((char *)a2 + 130) = *(_OWORD *)(v9 + 350);
    *((_WORD *)a2 + 73) = *((_WORD *)v9 + 708);
    *(_DWORD *)((char *)a2 + 149) = v9[292];
    *((_WORD *)a2 + 64) = *((_WORD *)v9 + 714);
    *((_BYTE *)a2 + 148) = *((_BYTE *)v13 + 32);
    *(_WORD *)((char *)a2 + 153) = *((_WORD *)v13 + 17);
    PortData = UsbhGetPortData(v10, *((_WORD *)v9 + 714));
    if ( PortData )
    {
      *(_DWORD *)((char *)a2 + 155) = *(unsigned __int16 *)(PortData + 4);
      *(_DWORD *)((char *)a2 + 159) = *(_DWORD *)(PortData + 428);
    }
    *(_DWORD *)((char *)a2 + 1187) = v13[12];
    if ( v13[12] )
    {
      do
      {
        v16 = v8++;
        v17 = 11 * (v16 + 97);
        *(_DWORD *)((char *)a2 + v17 + 124) = v13[3 * v16 + 13];
        *(_WORD *)((char *)a2 + v17 + 128) = v13[3 * v16 + 14];
        *((_BYTE *)a2 + v17 + 130) = BYTE2(v13[3 * v16 + 14]);
        *(_DWORD *)((char *)a2 + 11 * v16 + 1198) = v13[3 * v16 + 15];
      }
      while ( v8 < v13[12] );
    }
    ExFreePoolWithTag(v13, 0);
    v18 = v9[525];
    if ( v18 > 0x100 )
      v18 = 256;
    memmove((char *)a2 + 163, *((const void **)v9 + 263), v18);
    v19 = v9[529];
    if ( v19 > 0x100 )
      v19 = 256;
    memmove((char *)a2 + 419, *((const void **)v9 + 265), v19);
    v20 = v9[533];
    if ( v20 > 0x100 )
      v20 = 256;
    memmove((char *)a2 + 675, *((const void **)v9 + 267), v20);
    v21 = v9[553];
    if ( v21 > 0x100 )
      v21 = 256;
    memmove((char *)a2 + 931, *((const void **)v9 + 277), v21);
    result = 0LL;
    *a4 = v14;
  }
  else
  {
    *a4 = 0;
    return 3221225629LL;
  }
  return result;
}
