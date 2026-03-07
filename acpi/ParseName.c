__int64 __fastcall ParseName(__int64 a1, char **a2, char *a3)
{
  char *v4; // rbx
  char v5; // cl
  char **v6; // r10
  char v7; // r11
  _BYTE *v8; // rcx
  char *v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // edi

  v4 = a3;
  v5 = **a2;
  if ( v5 == 92 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "\\");
    ++*v6;
  }
  else
  {
    if ( v5 != 94 )
    {
      *a3 = 0;
      goto LABEL_11;
    }
    RtlStringCchCopyA(a3, 0x100uLL, "^");
    ++*v6;
    v8 = v4 + 1;
    v9 = *v6;
    v10 = 1LL;
    do
    {
      if ( *v9 != v7 )
        break;
      *v8 = v7;
      v10 = (unsigned int)(v10 + 1);
      ++*v6;
      ++v8;
      v9 = *v6;
    }
    while ( (unsigned int)v10 < 0xFF );
    v4[v10] = 0;
    if ( **v6 == v7 )
    {
      v11 = -1073741562;
      LogError(-1073741562);
      AcpiDiagTraceAmlError(a1, -1073741562);
      PrintDebugMessage(129, v4, 0LL, 0LL, 0LL);
      return v11;
    }
  }
  a3 = v4;
  a2 = v6;
LABEL_11:
  v11 = ParseNameTail(a1, a2, a3);
  if ( !v11 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s", v4);
  return v11;
}
