/*
 * XREFs of VslConnectSwInterrupt @ 0x140B6F5B0
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140B57734 (PipInitializeCoreDriversAndElam.c)
 *     KiConnectSwInterrupt @ 0x140B926B4 (KiConnectSwInterrupt.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlIsCoreSharingPossible @ 0x14053D490 (HvlIsCoreSharingPossible.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     KiAreCodePatchesAllowed @ 0x140B926E0 (KiAreCodePatchesAllowed.c)
 */

__int64 __fastcall VslConnectSwInterrupt(struct _MDL *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _MDL *Pool2; // rax
  int v12; // eax
  __int64 Prcb; // rax
  int v14; // edx
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 **v16; // rbx
  __int64 v17; // r15
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v19[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+4Ah] [rbp-B6h]
  __int16 v22; // [rsp+4Eh] [rbp-B2h]
  _QWORD v23[14]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[28]; // [rsp+C0h] [rbp-40h] BYREF

  v21 = 0;
  v22 = 0;
  v18 = 0;
  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( BugCheckParameter3 > 0x1FA000 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFFuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, 0x1FA000uLL);
  memset(v24, 0, 0xD8uLL);
  if ( BugCheckParameter2 )
  {
    v5 = VslpLockPagesForTransfer((__int64)v24, BugCheckParameter2, BugCheckParameter3, 0, 0);
    if ( v5 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, v5);
  }
  v6 = VslpLockPagesForTransfer((__int64)&v24[9], (struct _MDL *)&VslpTraceLog, 0xA08u, 2, 0);
  if ( v6 < 0 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFCuLL, (ULONG_PTR)&VslpTraceLog, 0xA08uLL, v6);
  memset(v23, 0, 0x68uLL);
  v23[1] = v24[0];
  v23[2] = v24[7];
  v23[4] = v24[9];
  v23[5] = v24[16];
  if ( (unsigned int)KiAreCodePatchesAllowed(v8, v7, v9, v10) )
  {
    Pool2 = (struct _MDL *)VslpHotpatchLog;
    if ( VslpHotpatchLog
      || (Pool2 = (struct _MDL *)ExAllocatePool2(64LL, 0x50008uLL, 0x676F4C48u),
          (VslpHotpatchLog = (ULONG_PTR)Pool2) != 0) )
    {
      v12 = VslpLockPagesForTransfer((__int64)&v24[18], Pool2, 0x50008u, 2, 2u);
      if ( v12 < 0 )
        KeBugCheckEx(0x13Du, 0xFFFFFFFBuLL, VslpHotpatchLog, 0x50008uLL, v12);
      v23[6] = v24[18];
      v23[7] = v24[25];
    }
  }
  v19[1] = (unsigned __int16 *)qword_140D1EFE8[0];
  v19[0] = (unsigned __int16 *)KeActiveProcessors;
  v20 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v18, v19) )
  {
    Prcb = KeGetPrcb(v18);
    if ( ((*(_QWORD *)(Prcb + 34912) - 1LL) & *(_QWORD *)(Prcb + 34912)) != 0 )
    {
      LODWORD(v23[3]) |= 1u;
      break;
    }
  }
  if ( HvlIsCoreSharingPossible() )
    LODWORD(v23[3]) = v14 | 1;
  BugCheckParameter4 = (int)VslpEnterIumSecureMode(2u, 52, 0, (__int64)v23);
  v16 = (__int64 **)v24;
  v17 = 3LL;
  do
  {
    if ( *((_WORD *)v16 + 9) )
      VslpUnlockPagesForTransfer(v16);
    v16 += 9;
    --v17;
  }
  while ( v17 );
  if ( (BugCheckParameter4 & 0x80000000) != 0LL )
    KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  return (unsigned int)BugCheckParameter4;
}
