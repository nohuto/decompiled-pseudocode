/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x180061B38
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800610A4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpSetModuleSigningLevel @ 0x180089B28 (LdrpSetModuleSigningLevel.c)
 *     NtCompareSigningLevels @ 0x18009E850 (NtCompareSigningLevels.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF660 (LdrpLogIntegrityContinuityTelemetry.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  bool v11; // cl
  int v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v3 = 0;
  v4 = a2;
  v12 = 0;
  v5 = a1;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v6 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v6 + 280) & 0x8000) != 0
     || (LOBYTE(a1) = *(_BYTE *)(v6 + 284), LOBYTE(a2) = 12, (int)NtCompareSigningLevels(a1, a2) >= 0)) )
  {
    v9 = LdrpSetModuleSigningLevel(v4, *(_QWORD *)(v5 + 56), (unsigned int)&v12, 12, (__int64)&v13);
    if ( v9 < 0 )
    {
      v11 = 1;
      if ( v9 == -1073741701
        || v9 == -1073740760
        || v9 == -1073740285
        || v9 == -1058471934
        || LdrpEnforceIntegrityContinuity )
      {
        v3 = v9;
        *(_BYTE *)(*(_QWORD *)(v5 + 56) + 284LL) = 1;
      }
    }
    else
    {
      v10 = *(_QWORD *)(v5 + 56);
      LOBYTE(v8) = 12;
      LOBYTE(v10) = *(_BYTE *)(v10 + 284);
      v3 = NtCompareSigningLevels(v10, v8);
      v11 = v3 < 0;
    }
    if ( v11 )
      LdrpLogIntegrityContinuityTelemetry(v5, v9, v12, v3, v13);
  }
  return (unsigned int)v3;
}
