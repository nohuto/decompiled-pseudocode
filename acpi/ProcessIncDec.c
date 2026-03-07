__int64 __fastcall ProcessIncDec(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  const void *ObjectTypeName; // rax
  const void *v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v3 = a3;
  if ( a3 )
    goto LABEL_12;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
      return v3;
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(v6 + 2) != 1 )
  {
    FreeDataBuffs(v6, 1u);
    v3 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 48) + 2LL));
    PrintDebugMessage(147, v8, ObjectTypeName, 0LL, 0LL);
LABEL_12:
    v11 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v11 + 8);
    HeapFree(v11);
    return v3;
  }
  v9 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(a2 + 32) == 117LL )
    v10 = v9 + 1;
  else
    v10 = v9 - 1;
  *(_QWORD *)(v6 + 16) = v10;
  v3 = WriteObject(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  if ( v3 != 32772 && a2 == *(_QWORD *)(a1 + 416) )
    goto LABEL_12;
  return v3;
}
