/*
 * XREFs of KeSetPagePrivilege @ 0x1403CF124
 * Callers:
 *     MiMarkPfnVerified @ 0x1402093BC (MiMarkPfnVerified.c)
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 *     MiDbgWriteCheck @ 0x1403878D8 (MiDbgWriteCheck.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140B8D858 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VslMakeProtectedPageExecutable @ 0x1405497EC (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x140549888 (VslMakeProtectedPageWritable.c)
 */

__int64 __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, __int16 a3)
{
  char v3; // bl
  __int16 v6; // dx
  __int128 v7; // xmm0
  __int64 result; // rax
  _OWORD v9[7]; // [rsp+20h] [rbp-39h] BYREF

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 245;
    goto LABEL_4;
  }
  if ( (a3 & 0x400) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 246;
LABEL_4:
    v7 = *a2;
    *((_QWORD *)&v9[0] + 1) = a1;
    v9[1] = v7;
    return VslpEnterIumSecureMode(2u, v6, 0, (__int64)v9);
  }
  if ( (a3 & 6) == 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 243;
    goto LABEL_4;
  }
  result = 0LL;
  if ( (a3 & 2) == 0 || (result = VslMakeProtectedPageExecutable(a1, a2, a3 & 0x800), (int)result >= 0) )
  {
    if ( (v3 & 4) != 0 )
      return VslMakeProtectedPageWritable(a1, a2);
  }
  return result;
}
