__int64 __fastcall WdipSemAddEndEventToScenario(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r9
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rdx
  PSLIST_ENTRY v10; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    v5 = *(unsigned int *)(a1 + 52);
    v6 = 0;
    if ( (_DWORD)v5 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 8LL * v6 + 1048);
        v8 = *(_QWORD *)a2 - *(_QWORD *)v7;
        if ( *(_QWORD *)a2 == *(_QWORD *)v7 )
          v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(v7 + 8);
        if ( !v8 && *(_WORD *)(a2 + 16) == *(_WORD *)(v7 + 16) )
          break;
        if ( ++v6 >= (unsigned int)v5 )
          goto LABEL_12;
      }
      WdipSemMergeEvents(*(_QWORD *)(a1 + 8LL * v6 + 1048), a2, v7, v5);
    }
    else
    {
LABEL_12:
      if ( (unsigned int)v5 < 0x10 )
      {
        v10 = WdipSemFastAllocate(0, 0x30u);
        if ( v10 )
        {
          *v10 = *(PSLIST_ENTRY)a2;
          v10[1] = *(PSLIST_ENTRY)(a2 + 16);
          v10[2] = *(PSLIST_ENTRY)(a2 + 32);
          *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 52))++ + 1048) = v10;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
