/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x140364DF0
 * Callers:
 *     RtlDispatchException @ 0x14027FA60 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x14027FF40 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x140364A90 (RtlGetExtendedContextLength.c)
 *     RtlRaiseException @ 0x140364BF0 (RtlRaiseException.c)
 *     RtlUnwind @ 0x1403BE7D0 (RtlUnwind.c)
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PspInitializeThunkContext @ 0x1407EDF4C (PspInitializeThunkContext.c)
 *     NtCreateThreadEx @ 0x1407EEB00 (NtCreateThreadEx.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403650A0 (RtlpValidateContextFlags.c)
 *     RtlpGetLegacyContextLength @ 0x140365130 (RtlpGetLegacyContextLength.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1403D1A20 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1403D1FAC (RtlpRemoveArchDisallowedXStateFeatures.c)
 */

__int64 __fastcall RtlGetExtendedContextLength2(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned int v5; // r14d
  __int64 result; // rax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v12[3]; // [rsp+24h] [rbp-Ch] BYREF
  unsigned __int64 v13; // [rsp+70h] [rbp+40h] BYREF
  int v14; // [rsp+78h] [rbp+48h] BYREF

  v14 = 0;
  v12[0] = 0;
  v11 = 0;
  v5 = a1;
  result = RtlpValidateContextFlags(a1, &v14);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(v5, &v11, v12);
    v7 = v12[0];
    v8 = v11 + 32;
    if ( (v14 & 2) != 0 )
    {
      v10 = ~(v12[0] - 1) & (v8 + v12[0] - 1);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v13 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL) & a3;
        RtlpRemoveArchDisallowedXStateFeatures(v5, &v13);
        a3 = v13;
      }
      v8 = RtlpGetEntireXStateAreaLength(a3) + v10 - v7 - 448;
    }
    v9 = v8 + 32;
    if ( (v14 & 4) == 0 )
      v9 = v8;
    *a2 = v7 + v9 - 1;
    return 0LL;
  }
  return result;
}
