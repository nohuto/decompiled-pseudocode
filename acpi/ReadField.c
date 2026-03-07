__int64 __fastcall ReadField(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  unsigned int v8; // edi
  unsigned int v9; // edi
  __int64 ObjectTypeName; // rdx
  int v11; // ecx
  __int64 v12; // rsi
  unsigned int v13; // r8d
  void *v14; // rax
  char v15; // al
  __int64 v16; // r8

  v4 = a4;
  v7 = a1;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) != 5 )
    {
      v9 = -1072431087;
      LogError(-1072431087);
      AcpiDiagTraceAmlError(v7, -1072431087);
      ObjectTypeName = *(unsigned int *)(a3 + 12);
      v11 = 162;
      goto LABEL_25;
    }
    v16 = a2;
    return (unsigned int)RawFieldAccess(a1, 0, v16, a4);
  }
  v8 = IsCompatableDSDTRevision() ? 8 : 4;
  if ( !*(_WORD *)(v4 + 2) )
  {
    if ( (*(_DWORD *)(a3 + 12) & 0x10000) == 0 && *(_DWORD *)(a3 + 8) <= 8 * v8 )
    {
      v12 = v4 + 16;
      *(_WORD *)(v4 + 2) = 1;
      goto LABEL_17;
    }
    *(_WORD *)(v4 + 2) = 3;
    v13 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
    *(_DWORD *)(v4 + 24) = v13;
    v14 = (void *)HeapAlloc(gpheapGlobal, 1179992648, v13);
    *(_QWORD *)(v4 + 32) = v14;
    if ( !v14 )
    {
      v9 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(v7, -1073741670);
      ObjectTypeName = *(unsigned int *)(v4 + 24);
      v11 = 161;
      goto LABEL_25;
    }
    memset(v14, 0, *(unsigned int *)(v4 + 24));
    goto LABEL_15;
  }
  if ( *(_WORD *)(v4 + 2) == 1 )
  {
    v12 = v4 + 16;
    v8 = 8;
    goto LABEL_17;
  }
  if ( *(_WORD *)(v4 + 2) != 2 )
  {
    if ( *(_WORD *)(v4 + 2) != 3 )
    {
      v9 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(v7, -1072431095);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v4 + 2));
      v11 = 163;
LABEL_25:
      PrintDebugMessage(v11, (const void *)ObjectTypeName, 0LL, 0LL, 0LL);
      return v9;
    }
LABEL_15:
    v8 = *(_DWORD *)(v4 + 24);
    goto LABEL_16;
  }
  v8 = *(_DWORD *)(v4 + 24) - 1;
LABEL_16:
  v12 = *(_QWORD *)(v4 + 32);
LABEL_17:
  v15 = SupportsOnlyRawAccess(a2);
  v16 = a2;
  a1 = v7;
  if ( v15 )
  {
    a4 = v4;
    return (unsigned int)RawFieldAccess(a1, 0, v16, a4);
  }
  return (unsigned int)PushAccFieldObj(v7, (int)ReadFieldObj, a2, a3, v12, v8);
}
