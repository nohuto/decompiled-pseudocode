/*
 * XREFs of RtlDoesNameContainWildCards @ 0x140367FC0
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x140365D60 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlDoesNameContainWildCards(PUNICODE_STRING Name)
{
  wchar_t *Buffer; // r8
  wchar_t *i; // rdx
  __int64 v3; // rax

  if ( Name->Length )
  {
    Buffer = Name->Buffer;
    for ( i = &Buffer[((unsigned __int64)Name->Length >> 1) - 1]; i >= Buffer; --i )
    {
      v3 = *i;
      if ( (_DWORD)v3 == 92 )
        break;
      if ( (unsigned int)v3 < 0x40 && (*((_BYTE *)qword_140017560 + v3) & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
