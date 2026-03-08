/*
 * XREFs of RtlDissectName @ 0x1402C3D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlDissectName(UNICODE_STRING *Path, PUNICODE_STRING FirstName, PUNICODE_STRING RemainingName)
{
  __int64 v3; // r10
  unsigned int v6; // r8d
  wchar_t *Buffer; // r9
  wchar_t v8; // bx
  unsigned int i; // eax
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // r8

  v3 = 0LL;
  *(_DWORD *)&FirstName->Length = 0;
  FirstName->Buffer = 0LL;
  *(_DWORD *)&RemainingName->Length = 0;
  RemainingName->Buffer = 0LL;
  v6 = Path->Length >> 1;
  if ( v6 )
  {
    Buffer = Path->Buffer;
    v8 = *Buffer;
    for ( i = *Buffer == 92; i < v6; ++i )
    {
      if ( Buffer[i] == 92 )
        break;
    }
    v10 = 2 * (i - (v8 == 92));
    FirstName->Length = v10;
    if ( v8 == 92 )
      v3 = 1LL;
    FirstName->MaximumLength = v10;
    FirstName->Buffer = &Buffer[v3];
    if ( i < v6 )
    {
      v11 = 2 * (v6 - i) - 2;
      RemainingName->Length = v11;
      RemainingName->MaximumLength = v11;
      RemainingName->Buffer = &Buffer[i + 1];
    }
  }
}
