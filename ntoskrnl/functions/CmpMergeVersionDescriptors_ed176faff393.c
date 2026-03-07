void __fastcall CmpMergeVersionDescriptors(__int64 a1, __int64 a2)
{
  int v4; // ecx
  _DWORD *v5; // rbx
  int v6; // eax
  int v7; // eax
  const UNICODE_STRING *v8; // rdx

  v4 = 0;
  v5 = (_DWORD *)(a1 + 800);
  if ( (*(_DWORD *)(a2 + 800) & 0x20) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    v4 = 1;
    *v5 |= 0x20u;
    *(_DWORD *)(a1 + 8) = v7;
  }
  if ( (*(_DWORD *)(a2 + 800) & 0x40) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 12);
    v4 = 1;
    *v5 |= 0x40u;
    *(_DWORD *)(a1 + 12) = v6;
  }
  if ( *(_QWORD *)(a2 + 40) )
  {
    v8 = (const UNICODE_STRING *)(a2 + 32);
    if ( v8->Length )
    {
      RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 32), v8);
      *v5 |= 0x80u;
      v4 = 1;
    }
  }
  if ( *(_QWORD *)(a2 + 56) && *(_WORD *)(a2 + 48) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 48), (PCUNICODE_STRING)(a2 + 48));
    *v5 |= 0x100u;
    v4 = 1;
  }
  if ( *(_QWORD *)(a2 + 72) && *(_WORD *)(a2 + 64) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 64), (PCUNICODE_STRING)(a2 + 64));
    *v5 |= 0x200u;
    v4 = 1;
  }
  if ( *(_QWORD *)(a2 + 88) && *(_WORD *)(a2 + 80) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 80), (PCUNICODE_STRING)(a2 + 80));
    *v5 |= 0x400u;
    v4 = 1;
  }
  if ( *(_QWORD *)(a2 + 104) && *(_WORD *)(a2 + 96) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 96), (PCUNICODE_STRING)(a2 + 96));
    *v5 |= 0x800u;
  }
  else if ( !v4 )
  {
    return;
  }
  *v5 |= 4u;
}
