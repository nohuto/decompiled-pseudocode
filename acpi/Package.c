/*
 * XREFs of Package @ 0x1C0057FF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     PushFrame @ 0x1C0053C34 (PushFrame.c)
 */

__int64 __fastcall Package(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  _DWORD *v6; // r14
  int v7; // ecx
  const void *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, "I");
  if ( !v4 )
  {
    v5 = a2[10];
    if ( *(_QWORD *)(v5 + 16) > 0xFFuLL )
    {
      v4 = -1072431100;
      LogError(-1072431100);
      AcpiDiagTraceAmlError(a1, -1072431100);
      v7 = 118;
      v8 = *(const void **)(a2[10] + 16LL);
      goto LABEL_8;
    }
    *(_DWORD *)(a2[11] + 24LL) = 40 * *(_DWORD *)(v5 + 16) + 8;
    v6 = (_DWORD *)HeapAlloc(gpheapGlobal, 1196118088, *(_DWORD *)(a2[11] + 24LL));
    if ( !v6 )
    {
      v4 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v7 = 117;
      v8 = (const void *)*(unsigned int *)(a2[11] + 24LL);
LABEL_8:
      PrintDebugMessage(v7, v8, 0LL, 0LL, 0LL);
      return v4;
    }
    v9 = a2[11];
    v12 = 0LL;
    *(_WORD *)(v9 + 2) = 4;
    memset(v6, 0, *(unsigned int *)(a2[11] + 24LL));
    *(_QWORD *)(a2[11] + 32LL) = v6;
    *v6 = *(unsigned __int8 *)(a2[10] + 16LL);
    v4 = PushFrame(a1, 1179077456, 0x38u, (__int64)ParsePackage, &v12);
    if ( !v4 )
    {
      v10 = v12;
      *(_QWORD *)(v12 + 32) = v6;
      *(_QWORD *)(v10 + 48) = a2[5];
    }
  }
  return v4;
}
