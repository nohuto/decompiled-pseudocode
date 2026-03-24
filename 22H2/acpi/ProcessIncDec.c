/*
 * XREFs of ProcessIncDec @ 0x1C002A480
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     WriteObject @ 0x1C000AC60 (WriteObject.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 */

__int64 __fastcall ProcessIncDec(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _SLIST_ENTRY *Next; // rcx
  int ObjectTypeName; // eax
  int v13; // r11d

  v4 = a3;
  if ( a3 )
    v6 = 1;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    if ( v6 != 1 )
      return v4;
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(v7 + 2) != 1 )
  {
    FreeDataBuffs(v7, 1u);
    v4 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 48) + 2LL));
    PrintDebugMessage(147, v13, ObjectTypeName, 0, 0LL);
LABEL_10:
    Next = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
    HeapFree(Next);
    return v4;
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(a2 + 32) == 117LL )
    v9 = v8 + 1;
  else
    v9 = v8 - 1;
  *(_QWORD *)(v7 + 16) = v9;
  if ( a3 )
    goto LABEL_10;
  v4 = WriteObject(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  if ( v4 != 32772 && (_SLIST_ENTRY *)a2 == a1[26].Next )
    goto LABEL_10;
  return v4;
}
