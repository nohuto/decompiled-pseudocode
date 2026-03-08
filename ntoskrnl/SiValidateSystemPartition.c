/*
 * XREFs of SiValidateSystemPartition @ 0x1402E231C
 * Callers:
 *     SiGetBootDeviceName @ 0x14076E464 (SiGetBootDeviceName.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SiGetDiskPartitionInformation @ 0x14076EAA0 (SiGetDiskPartitionInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140A5CA28 (SiIssueSynchronousIoctl.c)
 */

__int64 __fastcall SiValidateSystemPartition(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // rdx
  __int64 v9; // rax
  _QWORD v10[18]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v11[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v12; // [rsp+D8h] [rbp-28h]
  __int128 v13; // [rsp+E0h] [rbp-20h]
  __int128 v14; // [rsp+F0h] [rbp-10h]
  __int64 v15; // [rsp+100h] [rbp+0h]

  memset(v10, 0, 0x8CuLL);
  v12 = 0;
  LODWORD(v7) = SiGetDiskPartitionInformation(a1, v10);
  if ( (int)v7 < 0 )
    return (unsigned int)v7;
  if ( a2 && LODWORD(v10[0]) != *a2 )
  {
    LODWORD(v7) = -1073741823;
    return (unsigned int)v7;
  }
  LODWORD(v7) = -1073741823;
  if ( LODWORD(v10[0]) != 1 )
  {
    if ( LODWORD(v10[0]) )
      return (unsigned int)v7;
    v7 = BYTE1(v10[4]) == 0 ? 0xC0000001 : 0;
    if ( !BYTE1(v10[4]) )
      return (unsigned int)v7;
    goto LABEL_6;
  }
  v9 = v10[4] - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
  if ( v10[4] == *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1 )
    v9 = v10[5] - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
  if ( !v9 )
  {
    v7 = 0LL;
LABEL_6:
    if ( a5 )
    {
      v12 = 0;
      v11[0] = 0;
      v11[1] = 0;
      v15 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      LODWORD(v7) = SiIssueSynchronousIoctl(a1, v7, v11);
      if ( (int)v7 >= 0 )
      {
        if ( BYTE10(v13) )
          LODWORD(v7) = -1073741436;
      }
    }
  }
  return (unsigned int)v7;
}
