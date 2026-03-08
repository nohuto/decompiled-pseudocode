/*
 * XREFs of IfElse @ 0x1C0055570
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     PushScope @ 0x1C0053D40 (PushScope.c)
 *     ParsePackageLen @ 0x1C005BEFC (ParsePackageLen.c)
 */

__int64 __fastcall IfElse(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 *v7; // r14
  _BYTE *v8; // rax
  __int64 *v9; // r15
  _BYTE *v11; // rsi
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  _BYTE *v14; // [rsp+70h] [rbp+18h] BYREF

  if ( **(_BYTE **)(a2 + 32) != 0xA0 )
  {
    v6 = -1072431103;
    LogError(-1072431103);
    AcpiDiagTraceAmlError((__int64)a1, -1072431103);
    PrintDebugMessage(59, 0LL, 0LL, 0LL, 0LL);
    return v6;
  }
  v4 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "I");
  v5 = 0LL;
  v6 = v4;
  if ( !v4 )
  {
    v7 = (__int64 *)(a2 + 40);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
    {
      v11 = (_BYTE *)*v7;
      v13 = 0LL;
      if ( (unsigned __int64)v11 < *(_QWORD *)(a2 + 48) && *v11 == 0xA1 )
      {
        v14 = v11 + 1;
        ParsePackageLen(&v14, &v13);
        v5 = v13;
      }
      return (unsigned int)PushScope(a1, a1[15], (__int64)v11, v5, a1[10], a1[11], a1[40], *(_QWORD *)(a2 + 88));
    }
    v8 = (_BYTE *)*v7;
    v9 = a1 + 15;
    a1[15] = *v7;
    if ( (unsigned __int64)v8 < *(_QWORD *)(a2 + 48) && *v8 == 0xA1 )
    {
      *v9 = (__int64)(v8 + 1);
      ParsePackageLen(a1 + 15, a2 + 40);
      return (unsigned int)PushScope(a1, *v9, *v7, 0LL, a1[10], a1[11], a1[40], *(_QWORD *)(a2 + 88));
    }
  }
  return v6;
}
