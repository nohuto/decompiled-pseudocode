_BOOL8 __fastcall IsCHSBaseFont(const unsigned __int16 *a1, int a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  const UNICODE_STRING *v9; // rbx
  unsigned int v10; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 19896LL);
  if ( !v4 )
    return 0LL;
  v5 = (unsigned int)(v4 - 1);
  v6 = (unsigned int)v5;
  if ( a2 - (int)v5 < 8 )
    return 0LL;
  v7 = *(_QWORD *)&a1[v5];
  if ( v7 == 0x4800590053004DLL )
  {
    v9 = &String2;
    v10 = 3;
  }
  else
  {
    if ( v7 != 0x53004D00490053LL )
      return 0LL;
    v9 = (const UNICODE_STRING *)&unk_1C030A210;
    v10 = 2;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, &a1[v6 + 4]);
  return (int)SearchInCHSBaseFontFileNameSuffixes(&DestinationString, v9, v10) >= 0;
}
