__int64 __fastcall ParseOpcode(__int64 a1, __int64 a2, __int64 a3)
{
  const void **v3; // rsi
  PVOID *v6; // rax
  PVOID v8; // rcx
  int v9; // edx
  char *v10; // r10
  __int64 v11; // rax
  char *v12; // r8
  __int64 OpcodeTerm; // r9
  unsigned int v14; // ebx
  int v15; // eax

  v3 = (const void **)(a1 + 120);
  v6 = (PVOID *)&unk_1C006F870;
  v8 = *(PVOID *)(a1 + 120);
  v9 = 0;
  do
  {
    if ( v8 == *v6 )
      break;
    ++v9;
    v6 += 2;
  }
  while ( (__int64)v6 < (__int64)&qword_1C006F910 );
  if ( v9 != 10 && (dword_1C006F868[4 * v9] & 1) != 0 && v9 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n", v9);
    AMLIDebugger();
  }
  v10 = (char *)*v3;
  v11 = *(unsigned __int8 *)*v3;
  if ( (_BYTE)v11 == 91 )
  {
    *v3 = v10 + 1;
    OpcodeTerm = FindOpcodeTerm((unsigned __int8)v10[1]);
  }
  else
  {
    OpcodeTerm = (__int64)*(&OpcodeTable + v11);
    v12 = (char *)*v3;
  }
  if ( OpcodeTerm )
  {
    v15 = *(_DWORD *)(OpcodeTerm + 28);
    if ( (v15 & 8) != 0 )
    {
      return (unsigned int)ParseIntObj(a1, v3, a3, 0);
    }
    else if ( (v15 & 0x10) != 0 )
    {
      return (unsigned int)ParseString(a1, v3, a3, 0LL);
    }
    else if ( (v15 & 2) != 0 )
    {
      return (unsigned int)ParseArgObj(a1, a3);
    }
    else if ( (v15 & 4) != 0 )
    {
      return (unsigned int)ParseLocalObj(a1, a3);
    }
    else if ( (v15 & 0x20) != 0 )
    {
      return (unsigned int)ParseNameObj(a1, a3);
    }
    else
    {
      if ( (v15 & 0x40) != 0 )
      {
        v14 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError(a1, -1072431098);
        PrintDebugMessage(133, 0LL, 0LL, 0LL, 0LL);
        return v14;
      }
      *v3 = v12 + 1;
      return (unsigned int)PushTerm(a1, (__int64)v10, a2, OpcodeTerm, a3);
    }
  }
  else
  {
    v14 = -1072431103;
    LogError(-1072431103);
    AcpiDiagTraceAmlError(a1, -1072431103);
    PrintDebugMessage(134, (const void *)*(unsigned __int8 *)*v3, *v3, 0LL, 0LL);
  }
  return v14;
}
