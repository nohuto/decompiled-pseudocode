/*
 * XREFs of BiGetPartitionInformation @ 0x140830398
 * Callers:
 *     BiCreatePartitionDevice @ 0x14082FDBC (BiCreatePartitionDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1404123F0 (ZwDeviceIoControlFile.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall BiGetPartitionInformation(HANDLE FileHandle, int a2, _OWORD *a3)
{
  NTSTATUS v6; // edx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE OutputBuffer[144]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v18; // [rsp+100h] [rbp+0h]

  IoStatusBlock = 0LL;
  memset(OutputBuffer, 0, 0x8CuLL);
  v17 = 0LL;
  v18 = 0LL;
  v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, OutputBuffer, 0x90u);
  if ( v6 >= 0 )
    goto LABEL_2;
  if ( !a2 )
  {
    v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x74004u, 0LL, 0, &v17, 0x20u);
    if ( v6 >= 0 )
    {
      *(_DWORD *)OutputBuffer = 0;
      *(_OWORD *)&OutputBuffer[8] = v17;
      *(_DWORD *)&OutputBuffer[24] = DWORD1(v18);
      OutputBuffer[28] = BYTE11(v18);
      *(_WORD *)&OutputBuffer[32] = WORD4(v18);
      OutputBuffer[34] = BYTE10(v18);
      *(_DWORD *)&OutputBuffer[36] = v18;
LABEL_2:
      v7 = *(_OWORD *)&OutputBuffer[16];
      *a3 = *(_OWORD *)OutputBuffer;
      v8 = *(_OWORD *)&OutputBuffer[32];
      a3[1] = v7;
      v9 = *(_OWORD *)&OutputBuffer[48];
      a3[2] = v8;
      v10 = *(_OWORD *)&OutputBuffer[64];
      a3[3] = v9;
      v11 = *(_OWORD *)&OutputBuffer[80];
      a3[4] = v10;
      v12 = *(_OWORD *)&OutputBuffer[96];
      a3[5] = v11;
      v13 = *(_OWORD *)&OutputBuffer[128];
      a3[6] = v12;
      a3[7] = *(_OWORD *)&OutputBuffer[112];
      a3[8] = v13;
    }
  }
  return (unsigned int)v6;
}
