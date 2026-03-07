void __fastcall IopInitializeBootLogging(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  PUNICODE_STRING v8; // r8
  unsigned __int16 v9; // ax
  PUNICODE_STRING v10; // r8
  unsigned __int16 Length; // ax
  unsigned __int16 v12; // ax
  PVOID *i; // rbx
  STRING SourceString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 *v15; // [rsp+70h] [rbp+30h] BYREF

  v15 = 0LL;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( !qword_140D53028 )
  {
    Pool2 = ExAllocatePool2(64LL, 176LL, 538996553LL);
    qword_140D53028 = (PUNICODE_STRING)Pool2;
    if ( Pool2 )
    {
      ExInitializeResourceLite((PERESOURCE)(Pool2 + 64));
      ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140D53028[4], 1u);
      v5 = *(_QWORD *)(a1 + 16);
      v6 = -1LL;
      if ( (int)RtlFindMessage(*(_QWORD *)(v5 + 48), 0xBu, 0, 0xB5u, &v15) >= 0 )
      {
        v7 = -1LL;
        SourceString.Buffer = (char *)(v15 + 2);
        do
          ++v7;
        while ( *((_BYTE *)v15 + v7 + 4) );
        SourceString.Length = v7;
        SourceString.MaximumLength = v7 + 1;
        RtlAnsiStringToUnicodeString(qword_140D53028, &SourceString, 1u);
        v8 = qword_140D53028;
        if ( qword_140D53028->Length > 4u )
        {
          v9 = qword_140D53028->Length - 4;
          qword_140D53028->Length = v9;
          v8->Buffer[(unsigned __int64)v9 >> 1] = 0;
        }
      }
      if ( (int)RtlFindMessage(*(_QWORD *)(v5 + 48), 0xBu, 0, 0xB6u, &v15) < 0 )
      {
        v10 = qword_140D53028;
      }
      else
      {
        SourceString.Buffer = (char *)(v15 + 2);
        do
          ++v6;
        while ( *((_BYTE *)v15 + v6 + 4) );
        SourceString.Length = v6;
        SourceString.MaximumLength = v6 + 1;
        RtlAnsiStringToUnicodeString(qword_140D53028 + 1, &SourceString, 1u);
        v10 = qword_140D53028;
        Length = qword_140D53028[1].Length;
        if ( Length > 4u )
        {
          v12 = Length - 4;
          qword_140D53028[1].Length = v12;
          v10[1].Buffer[(unsigned __int64)v12 >> 1] = 0;
        }
      }
      RtlCreateUnicodeStringFromAsciiz(v10 + 3, (const char *)(a2 + 1));
      ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
        IopBootLog((PCUNICODE_STRING)(i + 9), 1);
      ExReleaseResourceLite(&PsLoadedModuleResource);
      ExReleaseResourceLite((PERESOURCE)&qword_140D53028[4]);
    }
  }
}
