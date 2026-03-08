/*
 * XREFs of ConcatenateResTemplate @ 0x1C0056290
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C004AE34 (CheckAndPromoteAliasedObjects.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 */

__int64 __fastcall ConcatenateResTemplate(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  char v4; // bl
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int16 *v9; // rcx
  unsigned int v10; // edi
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  char v15; // al
  unsigned __int64 v16; // r9
  char v17; // al
  unsigned int v18; // ecx
  _BYTE *v19; // rax
  __int64 v20; // rdx
  __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0;
  v22 = 0LL;
  v6 = ValidateArgTypes(a1, v3, 0, "BB");
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(v7 + 24) <= 1u || *(_DWORD *)(v7 + 64) <= 1u )
    {
      v6 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      v11 = 28;
      goto LABEL_17;
    }
    v6 = ValidateTarget(a1, v7 + 80, 135, (__int64)&v22);
    if ( !v6 )
    {
      v9 = *(__int16 **)(a2 + 80);
      if ( v9[41] != 128 )
        CheckAndPromoteAliasedObjects(v9, v8, v22);
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
      v10 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 64LL) - 2 + *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v10;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc(gpheapGlobal, 1381258056, v10);
      if ( !*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) )
      {
        v6 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        v11 = 29;
LABEL_17:
        PrintDebugMessage(v11, 0LL, 0LL, 0LL, 0LL);
        return v6;
      }
      v12 = *(_QWORD *)(a2 + 80);
      v13 = 0LL;
      v14 = 0LL;
      if ( *(_DWORD *)(v12 + 24) != 2 )
      {
        do
        {
          v15 = *(_BYTE *)(v14 + *(_QWORD *)(v12 + 32));
          ++v14;
          *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v15;
          ++v13;
          v12 = *(_QWORD *)(a2 + 80);
        }
        while ( v14 < (unsigned int)(*(_DWORD *)(v12 + 24) - 2) );
      }
      v16 = 0LL;
      if ( *(_DWORD *)(v12 + 64) != 2 )
      {
        do
        {
          v17 = *(_BYTE *)(v16 + *(_QWORD *)(v12 + 72));
          ++v16;
          *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v17;
          ++v13;
          v12 = *(_QWORD *)(a2 + 80);
        }
        while ( v16 < (unsigned int)(*(_DWORD *)(v12 + 64) - 2) );
      }
      *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 121;
      v18 = v10 - 1;
      v19 = *(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL);
      if ( v10 != 1 )
      {
        do
        {
          v4 += *v19++;
          --v18;
        }
        while ( v18 );
      }
      v20 = v22;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + v13 + 1) = -v4;
      return (unsigned int)WriteObject(a1, v20, *(_QWORD *)(a2 + 88));
    }
  }
  return v6;
}
