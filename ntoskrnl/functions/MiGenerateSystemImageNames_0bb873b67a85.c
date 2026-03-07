__int64 __fastcall MiGenerateSystemImageNames(
        unsigned __int16 *a1,
        const UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *Source,
        PUNICODE_STRING Destination)
{
  wchar_t *v6; // r10
  unsigned __int16 v8; // r9
  wchar_t *v11; // r8
  wchar_t *v12; // rax
  unsigned __int16 v13; // r8
  unsigned __int16 Length; // ax
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  wchar_t *Pool; // rax

  v6 = (wchar_t *)*((_QWORD *)a1 + 1);
  v8 = *a1;
  if ( *v6 == 92 )
  {
    v11 = &v6[(unsigned __int64)*a1 >> 1];
    v12 = v11;
    while ( *(v12 - 1) != 92 )
    {
      if ( --v12 == v6 )
        return 3221225711LL;
    }
    v13 = 2 * (v11 - v12);
    a4->Length = v13;
  }
  else
  {
    a4->Length = v8;
    v13 = v8;
    v12 = (wchar_t *)*((_QWORD *)a1 + 1);
  }
  a4->Buffer = v12;
  a4->MaximumLength = v13;
  *Source = *(UNICODE_STRING *)a1;
  Source->Length -= a4->Length;
  Source->MaximumLength = Source->Length;
  *Destination = *(PUNICODE_STRING)a1;
  if ( a2 )
  {
    Length = Source->Length;
    Destination->MaximumLength = Source->Length;
    v16 = a2->Length + Length;
    if ( v16 < Length )
      return 3221225626LL;
    v17 = a2->Length + Length;
    Destination->MaximumLength = v16;
    v18 = a4->Length + v16;
    if ( v18 < v17 )
      return 3221225626LL;
    Destination->MaximumLength = v18;
    Pool = (wchar_t *)MiAllocatePool(256, v18, 0x644C6D4Du);
    Destination->Buffer = Pool;
    if ( !Pool )
      return 3221225626LL;
    Destination->Length = 0;
    RtlAppendUnicodeStringToString(Destination, Source);
    RtlAppendUnicodeStringToString(Destination, a2);
    RtlAppendUnicodeStringToString(Destination, a4);
    a4->Buffer = &Destination->Buffer[(unsigned __int64)Source->Length >> 1];
    a4->Length += a2->Length;
    a4->MaximumLength += a2->Length;
  }
  if ( a3 )
    *a4 = *a3;
  return 0LL;
}
