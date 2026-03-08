/*
 * XREFs of ?ResStrCmp@@YAHPEAU_UNICODE_STRING@@0@Z @ 0x1C00C5990
 * Callers:
 *     NtUserFindExistingCursorIcon @ 0x1C00C5470 (NtUserFindExistingCursorIcon.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResStrCmp(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  unsigned int v3; // ebx
  USHORT Length; // ax
  PWSTR Buffer; // rdx
  UNICODE_STRING String; // [rsp+30h] [rbp-18h] BYREF
  ULONG Value; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  Length = a1->Length;
  if ( a1->Length )
  {
    if ( a2->Length )
    {
      if ( RtlEqualUnicodeString(a1, a2, 1u) )
        return 1;
    }
    else
    {
      Buffer = a1->Buffer;
      if ( *Buffer == 35 )
      {
        *(&String.MaximumLength + 2) = 0;
        Value = 0;
        String.Length = Length - 2;
        *(_DWORD *)&String.MaximumLength = (unsigned __int16)(Length - 2);
        String.Buffer = Buffer + 1;
        RtlUnicodeStringToInteger(&String, 0xAu, &Value);
        return Value == LODWORD(a2->Buffer);
      }
    }
    return v3;
  }
  if ( a1->Buffer != a2->Buffer )
    return v3;
  return 1LL;
}
