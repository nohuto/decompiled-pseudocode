__int64 __fastcall ParseScope(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ecx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx

  v3 = a3;
  if ( a3 && a3 != 32769 && a3 != 32774 )
    goto LABEL_36;
  switch ( *(_DWORD *)(a2 + 16) & 0xF )
  {
    case 0:
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent((__int64)a1);
        ConPrintf("{");
        ++dword_1C006F834;
        *(_DWORD *)(a2 + 16) |= 0x10000u;
      }
      ++*(_DWORD *)(a2 + 16);
LABEL_11:
      while ( 1 )
      {
        v6 = v3;
        if ( v3 == 32769 )
          break;
        if ( v3 == 32774 )
          goto LABEL_13;
        do
        {
          if ( (unsigned __int64)a1[15] >= *(_QWORD *)(a2 + 32) )
            break;
          qword_1C006F840 = a1[15];
          if ( (gDebugger & 0xD0) != 0 )
          {
            v7 = *(_DWORD *)(a2 + 16);
            if ( (v7 & 0x10000) != 0 )
            {
              *(_DWORD *)(a2 + 16) = v7 & 0xFFFEFFFF;
            }
            else if ( (gDebugger & 0x80u) != 0 )
            {
              _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
              AMLIDebugger();
            }
          }
          if ( (gDebugger & 0xD0) != 0 && (unsigned __int8)(*(_BYTE *)a1[15] - 18) > 1u )
            PrintIndent((__int64)a1);
          FreeDataBuffs(*(_QWORD *)(a2 + 72), 1u);
          v3 = ParseOpcode((__int64)a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 72));
          if ( v3 )
            break;
        }
        while ( a2 == a1[52] );
        v6 = v3;
        if ( v3 == 32769 )
          break;
        if ( v3 == 32774 )
        {
LABEL_13:
          a1[15] = *(_QWORD *)(a2 + 32);
          goto LABEL_33;
        }
        if ( v3 == 32772 || a2 != a1[52] )
          return v3;
        if ( v3 || (unsigned __int64)a1[15] >= *(_QWORD *)(a2 + 32) )
          goto LABEL_35;
      }
      a1[15] = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
LABEL_33:
      v3 = 0;
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
        v3 = v6;
LABEL_35:
      ++*(_DWORD *)(a2 + 16);
      goto LABEL_36;
    case 1:
      goto LABEL_11;
    case 2:
LABEL_36:
      if ( (gDebugger & 0xD0) != 0 )
      {
        --dword_1C006F834;
        PrintIndent((__int64)a1);
        ConPrintf("}");
      }
      DereferenceObjectEx(a1[10]);
      a1[10] = *(_QWORD *)(a2 + 48);
      v8 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 48) = 0LL;
      a1[11] = v8;
      a1[40] = *(_QWORD *)(a2 + 64);
      v9 = *(_QWORD *)(a2 + 40);
      if ( v9 )
        a1[15] = v9;
      v10 = a1[52];
      a1[52] = *(_QWORD *)(v10 + 8);
      HeapFree(v10);
      break;
  }
  return v3;
}
