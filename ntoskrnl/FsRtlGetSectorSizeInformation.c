/*
 * XREFs of FsRtlGetSectorSizeInformation @ 0x14086B030
 * Callers:
 *     RawQueryVolumeInformation @ 0x1406F362C (RawQueryVolumeInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     FsRtlIssueDeviceIoControl @ 0x14086B440 (FsRtlIssueDeviceIoControl.c)
 */

__int64 __fastcall FsRtlGetSectorSizeInformation(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // r10d
  unsigned int v7; // ecx
  unsigned int v8; // r9d
  int v9; // eax
  int v10; // esi
  unsigned int v11; // r8d
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[18]; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+E0h] [rbp-20h]
  __int64 v17; // [rsp+E4h] [rbp-1Ch]
  __int64 v18; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v19; // [rsp+F8h] [rbp-8h]
  unsigned int v20; // [rsp+108h] [rbp+8h]
  __int64 v21; // [rsp+110h] [rbp+10h] BYREF
  int v22; // [rsp+118h] [rbp+18h]
  __int64 v23; // [rsp+120h] [rbp+20h] BYREF
  int v24; // [rsp+128h] [rbp+28h]
  __int128 v25; // [rsp+130h] [rbp+30h] BYREF
  __int64 v26; // [rsp+140h] [rbp+40h]
  __int128 v27; // [rsp+148h] [rbp+48h] BYREF

  v14[0] = 0LL;
  HIDWORD(v17) = 0;
  v20 = 0;
  v26 = 0LL;
  v25 = 0LL;
  v19 = 0LL;
  memset(v15, 0, 0x8CuLL);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  result = FsRtlIssueDeviceIoControl(DeviceObject, 0x70000u, 0, &v25, 0x18u, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !HIDWORD(v26) || ((HIDWORD(v26) - 1) & HIDWORD(v26)) != 0 )
    {
      return 3221225675LL;
    }
    else
    {
      v17 = 0LL;
      v16 = 6;
      v20 = 0;
      v18 = 0x100000002LL;
      v19 = 0LL;
      v5 = FsRtlIssueDeviceIoControl(DeviceObject, 0x2D1400u, 0xCu, &v18, 0x1Cu, (__int64)v14);
      v6 = HIDWORD(v26);
      if ( v5 < 0
        || v14[0] < 0x1CuLL
        || (unsigned int)v18 < 0x1C
        || (unsigned __int64)HIDWORD(v18) < v14[0]
        || !DWORD2(v19)
        || DWORD2(v19) != HIDWORD(v26)
        || (v7 = HIDWORD(v19), HIDWORD(v19) < DWORD2(v19))
        || !HIDWORD(v19)
        || ((HIDWORD(v19) - 1) & HIDWORD(v19)) != 0
        || HIDWORD(v19) % DWORD2(v19)
        || (v8 = v20, v20 % DWORD2(v19)) )
      {
        v7 = HIDWORD(v26);
        v18 = 0LL;
        HIDWORD(v19) = HIDWORD(v26);
        v8 = -1;
        *(_QWORD *)&v19 = 0LL;
        DWORD2(v19) = HIDWORD(v26);
        v20 = -1;
      }
      *(_DWORD *)a2 = HIDWORD(v26);
      *(_DWORD *)(a2 + 4) = v7;
      *(_DWORD *)(a2 + 8) = v7;
      *(_DWORD *)(a2 + 16) = 3;
      *(_DWORD *)(a2 + 20) = v8;
      *(_DWORD *)(a2 + 24) = -1;
      *(_DWORD *)(a2 + 12) = v6;
      if ( v8 != -1 )
      {
        *(_DWORD *)(a2 + 20) = v8;
        v9 = *(_DWORD *)(a2 + 16);
        v10 = v8 % v7;
        if ( v8 % v7 )
          v9 = 2;
        *(_DWORD *)(a2 + 16) = v9;
        memset(v15, 0, sizeof(v15));
        if ( (int)FsRtlIssueDeviceIoControl(DeviceObject, 0x70048u, 0, v15, 0x90u, 0LL) >= 0 )
        {
          v11 = HIDWORD(v19);
          v12 = v15[1] % (__int64)HIDWORD(v19);
          v13 = HIDWORD(v19) - v12;
          *(_DWORD *)(a2 + 24) = v12;
          if ( v13 % v11 != v10 )
            *(_DWORD *)(a2 + 16) &= ~2u;
        }
      }
      v17 = 0LL;
      v21 = 0LL;
      v22 = 0;
      v16 = 7;
      if ( (int)FsRtlIssueDeviceIoControl(DeviceObject, 0x2D1400u, 0xCu, &v21, 0xCu, (__int64)v14) >= 0
        && v14[0] >= 0xCuLL
        && (unsigned int)v21 >= 0xC
        && !(_BYTE)v22
        && (unsigned __int64)HIDWORD(v21) >= v14[0] )
      {
        *(_DWORD *)(a2 + 16) |= 4u;
      }
      v17 = 0LL;
      v23 = 0LL;
      v24 = 0;
      v16 = 8;
      if ( (int)FsRtlIssueDeviceIoControl(DeviceObject, 0x2D1400u, 0xCu, &v23, 0xCu, (__int64)v14) >= 0
        && v14[0] >= 0xCuLL
        && (unsigned int)v23 >= 0xC
        && (_BYTE)v24
        && (unsigned __int64)HIDWORD(v23) >= v14[0] )
      {
        *(_DWORD *)(a2 + 16) |= 8u;
      }
      v17 = 0LL;
      v16 = 55;
      v27 = 0LL;
      if ( (int)FsRtlIssueDeviceIoControl(DeviceObject, 0x2D1400u, 0xCu, &v27, 0x10u, (__int64)v14) >= 0
        && v14[0] == 16
        && (BYTE8(v27) & 1) != 0 )
      {
        *(_DWORD *)(a2 + 16) |= 0x10u;
      }
      return 0LL;
    }
  }
  return result;
}
