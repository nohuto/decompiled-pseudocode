__int64 __fastcall ParseTerm(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  const void **v6; // r14
  unsigned __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64, _DWORD, __int64); // rax
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  void (__fastcall *v14)(__int64, __int64, __int64, __int64); // r10
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx

  v3 = a3;
  if ( a3 )
    goto LABEL_51;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    switch ( *(_DWORD *)(a2 + 16) & 0xF )
    {
      case 1:
        goto LABEL_19;
      case 2:
LABEL_30:
        v9 = *(_QWORD *)(a2 + 56);
        ++*(_DWORD *)(a2 + 16);
        if ( *(int *)(v9 + 28) < 0 )
        {
          v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))(v9 + 32);
          if ( v10 )
          {
            v3 = v10(12LL, 1LL, *(unsigned int *)(v9 + 8), *(_QWORD *)(a2 + 64) + 120LL, *(_DWORD *)(v9 + 40), a1);
            if ( v3 == 259 )
              return 32772;
          }
        }
        break;
      case 3:
        break;
      case 4:
LABEL_40:
        ++*(_DWORD *)(a2 + 16);
        if ( (gDebugger & 0xD0) != 0 )
        {
          v12 = *(_QWORD *)(a2 + 56);
          if ( (unsigned int)(*(_DWORD *)(v12 + 8) - 17) > 2 && *(_DWORD *)(v12 + 24) == 4 )
          {
            ConPrintf("=");
            PrintObject(*(_QWORD *)(a2 + 88));
          }
        }
        if ( (gDebugger & 0x40) != 0 )
        {
          _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
          AMLIDebugger();
          goto LABEL_51;
        }
        v13 = *(_QWORD *)(a2 + 56);
        v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(v13 + 32);
        if ( v14 )
        {
          v15 = *(unsigned int *)(v13 + 40);
          v16 = *(_QWORD *)(a2 + 64) + 120LL;
          v17 = *(unsigned int *)(v13 + 8);
          if ( *(int *)(v13 + 28) >= 0 )
          {
            v14(1LL, v17, v16, v15);
          }
          else
          {
            v3 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))v14)(
                   12LL,
                   2LL,
                   (unsigned int)v17,
                   v16,
                   v15,
                   a1);
            if ( v3 == 259 )
              return 32772;
          }
        }
LABEL_51:
        if ( (gDebugger & 0xD0) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) - 18) <= 1 )
          --dword_1C006F834;
        v18 = *(_QWORD *)(a2 + 80);
        if ( v18 )
        {
          FreeDataBuffs(v18, *(_DWORD *)(a2 + 76));
          HeapFree(*(_QWORD *)(a2 + 80));
        }
        v19 = *(_QWORD *)(a2 + 64);
        if ( v19 )
        {
          DereferenceObjectEx(v19);
          *(_QWORD *)(a2 + 64) = 0LL;
        }
        v20 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = *(_QWORD *)(v20 + 8);
        HeapFree(v20);
        return v3;
      case 5:
        goto LABEL_51;
      default:
        return v3;
    }
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(a2 + 76) )
      ConPrintf(")");
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 56) + 48LL);
    if ( !v11 )
      goto LABEL_40;
    v3 = v11(a1, a2);
    if ( !v3 && a2 == *(_QWORD *)(a1 + 416) )
      goto LABEL_40;
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) - 18) <= 1 )
      {
        ++dword_1C006F834;
        PrintIndent(a1);
      }
      ConPrintf("%s", **(const char ***)(a2 + 56));
      if ( *(_DWORD *)(a2 + 76) )
        ConPrintf("(");
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 28LL) & 1) != 0
      && (v6 = (const void **)(a2 + 40),
          ParsePackageLen((_QWORD *)(a1 + 120), (_QWORD *)(a2 + 40)),
          (gOverrideFlags & 4) == 0)
      && (v7 = *(_QWORD *)(a2 + 48)) != 0
      && (unsigned __int64)*v6 > v7 )
    {
      v3 = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      PrintDebugMessage(143, *v6, *(const void **)(a2 + 48), 0LL, 0LL);
    }
    else
    {
LABEL_19:
      while ( 1 )
      {
        v8 = *(_DWORD *)(a2 + 72);
        if ( v8 < *(_DWORD *)(a2 + 76) )
          break;
        if ( a2 != *(_QWORD *)(a1 + 416) )
          return v3;
        if ( *(_DWORD *)(a2 + 72) >= *(_DWORD *)(a2 + 76) )
        {
LABEL_29:
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_30;
        }
      }
      while ( 1 )
      {
        *(_DWORD *)(a2 + 72) = v8 + 1;
        if ( (gDebugger & 0xD0) != 0 && v8 )
          ConPrintf(",");
        v3 = ParseArg(
               a1,
               *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL) + v8),
               *(_QWORD *)(a2 + 80) + 40LL * v8,
               *(_QWORD *)(a2 + 48));
        if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
          break;
        v8 = *(_DWORD *)(a2 + 72);
        if ( v8 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_29;
      }
    }
  }
  return v3;
}
