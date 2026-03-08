/*
 * XREFs of SmProcessRegistrationRequest @ 0x1408409FC
 * Callers:
 *     SmQueryStoreInformation @ 0x140840788 (SmQueryStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x14029622C (SmpGetProcessPartition.c)
 *     SmGetRegistrationInfo @ 0x140840AC0 (SmGetRegistrationInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessRegistrationRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  __int64 v6; // rcx
  __int64 ProcessPartition; // rax
  char v8; // r9
  __int64 v9; // rdx
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = 0LL;
  if ( a2 != 16 )
    return 3221225990LL;
  if ( a4 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v6 = a1;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 15) = *(_BYTE *)(v6 + 15);
  }
  v11 = *(_OWORD *)a1;
  if ( (_BYTE)v11 != 2 || (v11 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  LOBYTE(v9) = v8;
  result = SmGetRegistrationInfo(ProcessPartition, v9, &v11);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)a1 = v11;
    *a3 = 16;
  }
  return result;
}
