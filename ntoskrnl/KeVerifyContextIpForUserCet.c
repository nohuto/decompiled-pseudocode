/*
 * XREFs of KeVerifyContextIpForUserCet @ 0x14036551C
 * Callers:
 *     KiVerifyContextRecord @ 0x140365470 (KiVerifyContextRecord.c)
 *     PspGetSetContextInternal @ 0x1406EA840 (PspGetSetContextInternal.c)
 * Callees:
 *     KiVerifyContextIpForUserCet @ 0x14056EA00 (KiVerifyContextIpForUserCet.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x140579A48 (KiLogUserCetSetContextIpValidationFailure.c)
 */

__int64 __fastcall KeVerifyContextIpForUserCet(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  unsigned int v9; // edi
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-18h]

  v5 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
  {
    v9 = *(_DWORD *)(v5 + 2516);
    if ( (v9 & 0x20000) != 0 && (*(_DWORD *)(a2 + 48) & 0x100001) == 0x100001 )
    {
      v14 = a4;
      v10 = v9 >> 31;
      LOBYTE(a4) = v10;
      v7 = KiVerifyContextIpForUserCet(a1, a2, (_DWORD)a3, a4, v14);
      if ( v7 != -1073740278 )
        return v7;
      v12 = *(_QWORD *)(a2 + 248);
      v13 = *a3;
      LOBYTE(v11) = v10 ^ 1;
      if ( (*(_DWORD *)(v5 + 2516) & 0x40000) == 0 )
      {
        KiLogUserCetSetContextIpValidationFailure(2LL, v13, v12, v11);
        return v7;
      }
      KiLogUserCetSetContextIpValidationFailure(1LL, v13, v12, v11);
    }
  }
  return 0;
}
