/*
 * XREFs of Index @ 0x1C0056C00
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 */

__int64 __fastcall Index(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // r14
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, "CI");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 133, (__int64)&v12);
    if ( !v4 )
    {
      v5 = *(_QWORD *)(a2 + 80);
      if ( *(_WORD *)(v5 + 2) == 3 )
      {
        if ( *(_DWORD *)(v5 + 56) >= *(_DWORD *)(v5 + 24) )
        {
          v4 = -1072431100;
          LogError(-1072431100);
          AcpiDiagTraceAmlError(a1, -1072431100);
          v8 = *(_QWORD *)(a2 + 80);
          v7 = *(unsigned int *)(v8 + 24);
          goto LABEL_7;
        }
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 14;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 48;
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc(
                                                     *(_QWORD *)(a1 + 320),
                                                     1145455176,
                                                     *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v10 )
        {
          *(_DWORD *)(v10 + 16) = 0;
          *(_DWORD *)(v10 + 20) = 8;
          *(_QWORD *)v10 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL);
          *(_DWORD *)(v10 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
          *(_DWORD *)(v10 + 12) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
          return (unsigned int)WriteObject(a1, v12, *(_QWORD *)(a2 + 88));
        }
        v4 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        PrintDebugMessage(60, 0LL, 0LL, 0LL, 0LL);
      }
      else if ( *(_WORD *)(v5 + 2) == 4 )
      {
        v6 = *(_DWORD **)(v5 + 32);
        if ( *(_DWORD *)(v5 + 56) >= *v6 )
        {
          v4 = -1072431100;
          LogError(-1072431100);
          AcpiDiagTraceAmlError(a1, -1072431100);
          v7 = (unsigned int)*v6;
          v8 = *(_QWORD *)(a2 + 80);
LABEL_7:
          PrintDebugMessage(61, *(const void **)(v8 + 56), (const void *)v7, 0LL, 0LL);
          return v4;
        }
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 129;
        v9 = *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = &v6[8 * v9 + 2 + 2 * v9];
        return (unsigned int)WriteObject(a1, v12, *(_QWORD *)(a2 + 88));
      }
    }
  }
  return v4;
}
