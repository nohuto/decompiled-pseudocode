__int64 __fastcall ParsePackage(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // esi
  const void **v7; // r14
  unsigned int *v8; // r12
  _QWORD *v9; // r15
  _DWORD *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rcx

  v4 = a3;
  if ( a3 )
  {
LABEL_26:
    if ( (gDebugger & 0xD0) != 0 )
    {
      --dword_1C006F834;
      PrintIndent(a1);
      ConPrintf("}");
      --dword_1C006F834;
    }
    v13 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v13 + 8);
    HeapFree(v13);
    return v4;
  }
  switch ( *(_DWORD *)(a2 + 16) & 0xF )
  {
    case 0:
      ++*(_DWORD *)(a2 + 16);
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1);
        ConPrintf("{");
        ++dword_1C006F834;
      }
      goto LABEL_8;
    case 1:
LABEL_8:
      v7 = (const void **)(a1 + 120);
      v8 = (unsigned int *)(a2 + 40);
      v9 = (_QWORD *)(a2 + 32);
      while ( 1 )
      {
        if ( (unsigned __int64)*v7 >= *(_QWORD *)(a2 + 48) )
          goto LABEL_21;
        v10 = (_DWORD *)*v9;
        v11 = (int)*v8;
        if ( (unsigned int)v11 >= *(_DWORD *)*v9 )
          goto LABEL_20;
        *v8 = v11 + 1;
        if ( (gDebugger & 0xD0) != 0 && (int)v11 > 0 )
        {
          ConPrintf(",");
          v10 = (_DWORD *)*v9;
        }
        if ( (unsigned __int8)(*(_BYTE *)*v7 - 17) <= 2u )
        {
          v4 = ParseOpcode(a1, 0LL, &v10[8 * v11 + 2 + 2 * v11]);
          if ( v4 )
          {
LABEL_20:
            if ( v4 == 32772 )
              return v4;
            goto LABEL_21;
          }
          if ( a2 != *(_QWORD *)(a1 + 416) )
            return v4;
        }
        else
        {
          if ( (gDebugger & 0xD0) != 0 )
            PrintIndent(a1);
          v12 = 5 * v11;
          LOBYTE(a4) = 1;
          v4 = ParseIntObj(a1, a1 + 120, *v9 + 8LL + 8 * v12, a4);
          if ( v4 == -1072431103
            && (LOBYTE(a4) = 1, v4 = ParseString(a1, a1 + 120, *v9 + 8LL + 8 * v12, a4), v4 == -1072431103)
            && (LOBYTE(a4) = 1, v4 = ParseObjName(a1, a1 + 120, *v9 + 8LL + 8 * v12, a4), v4 == -1072431103) )
          {
            LogError(-1072431103);
            AcpiDiagTraceAmlError(a1, -1072431103);
            PrintDebugMessage(135, (const void *)*(unsigned __int8 *)*v7, *v7, 0LL, 0LL);
LABEL_21:
            if ( a2 != *(_QWORD *)(a1 + 416) )
              return v4;
            if ( v4 || (unsigned __int64)*v7 >= *(_QWORD *)(a2 + 48) || *v8 >= *(_DWORD *)*v9 )
            {
              ++*(_DWORD *)(a2 + 16);
              goto LABEL_26;
            }
          }
          else if ( v4 )
          {
            goto LABEL_20;
          }
        }
      }
    case 2:
      goto LABEL_26;
  }
  return v4;
}
