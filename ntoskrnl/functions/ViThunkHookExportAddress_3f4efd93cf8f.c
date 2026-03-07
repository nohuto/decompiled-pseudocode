__int64 __fastcall ViThunkHookExportAddress(unsigned __int8 **a1, const UNICODE_STRING *a2, unsigned __int8 **a3)
{
  char *Buffer; // r9
  unsigned int v4; // edi
  int v5; // ebp
  unsigned __int8 **v6; // rbx
  unsigned __int8 *v9; // rax
  char *v10; // rax
  int v11; // r8d
  int v12; // ecx
  int v13; // eax
  unsigned __int8 *v14; // rax
  STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  Buffer = 0LL;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  v5 = 0;
  v6 = a3;
  if ( !*a3 )
    return v4;
  while ( 1 )
  {
    v9 = v6[2];
    if ( v9 == *a1 )
      break;
    if ( !v9 )
    {
      if ( !v5 )
      {
        while ( RtlUnicodeStringToAnsiString(&DestinationString, a2, 1u) < 0 )
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&ViShortTime);
        Buffer = DestinationString.Buffer;
        v5 = 1;
      }
      v10 = (char *)*v6;
      do
      {
        v11 = (unsigned __int8)v10[Buffer - (char *)*v6];
        v12 = (unsigned __int8)*v10 - v11;
        if ( v12 )
          break;
        ++v10;
      }
      while ( v11 );
      if ( !v12 )
        break;
    }
    v6 += 7;
    if ( !*v6 )
      goto LABEL_24;
  }
  if ( (unsigned int)VfIsVerifierEnabled() && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
    goto LABEL_22;
  v13 = *((_DWORD *)v6 + 8);
  if ( (v13 & 1) == 0 )
    goto LABEL_24;
  if ( (v13 & 4) != 0 )
  {
LABEL_22:
    *a1 = v6[1];
  }
  else
  {
    v14 = v6[5];
    if ( !*(_QWORD *)v14 )
      goto LABEL_24;
    *a1 = *(unsigned __int8 **)v14;
  }
  v4 = 1;
LABEL_24:
  if ( v5 )
    RtlFreeAnsiString(&DestinationString);
  return v4;
}
