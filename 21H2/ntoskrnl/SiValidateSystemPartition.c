/*
 * XREFs of SiValidateSystemPartition @ 0x14023C080
 * Callers:
 *     SiGetBootDeviceName @ 0x1406025D4 (SiGetBootDeviceName.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SiGetDiskPartitionInformation @ 0x140602A10 (SiGetDiskPartitionInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140973A2C (SiIssueSynchronousIoctl.c)
 */

__int64 __fastcall SiValidateSystemPartition(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // rdx
  __int64 v9; // rax
  int v10; // eax
  _QWORD v11[18]; // [rsp+30h] [rbp-81h] BYREF
  _DWORD v12[2]; // [rsp+C0h] [rbp+Fh] BYREF
  int v13; // [rsp+C8h] [rbp+17h]
  __int128 v14; // [rsp+D0h] [rbp+1Fh]
  __int128 v15; // [rsp+E0h] [rbp+2Fh]
  __int64 v16; // [rsp+F0h] [rbp+3Fh]

  memset(v11, 0, sizeof(v11));
  v13 = 0;
  LODWORD(v7) = SiGetDiskPartitionInformation(a1, v11);
  if ( (int)v7 < 0 )
    return (unsigned int)v7;
  if ( a2 && LODWORD(v11[0]) != *a2 )
  {
    LODWORD(v7) = -1073741823;
    return (unsigned int)v7;
  }
  v7 = 3221225473LL;
  if ( LODWORD(v11[0]) != 1 )
  {
    if ( !LODWORD(v11[0]) )
      v7 = BYTE1(v11[4]) == 0 ? 0xC0000001 : 0;
    if ( (int)v7 < 0 )
      return (unsigned int)v7;
LABEL_8:
    if ( a5 )
    {
      v13 = 0;
      v12[0] = 0;
      v12[1] = 0;
      v16 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v10 = SiIssueSynchronousIoctl(a1, v7, v12);
      LODWORD(v7) = v10;
      if ( v10 >= 0 )
      {
        if ( BYTE10(v14) )
          LODWORD(v7) = -1073741436;
      }
    }
    return (unsigned int)v7;
  }
  v9 = v11[4] - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
  if ( v11[4] == *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1 )
    v9 = v11[5] - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
  if ( !v9 )
  {
    v7 = 0LL;
    goto LABEL_8;
  }
  return (unsigned int)v7;
}
