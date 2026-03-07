__int64 __fastcall WdipSemAddContextEventToScenario(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // r9
  __int64 v8; // rdx
  _OWORD *v9; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    v5 = *(unsigned int *)(a1 + 48);
    v6 = 0;
    if ( (_DWORD)v5 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD **)(a1 + 8LL * v6 + 56);
        v8 = *(_QWORD *)a2 - *v7;
        if ( *(_QWORD *)a2 == *v7 )
          v8 = *(_QWORD *)(a2 + 8) - v7[1];
        if ( !v8 )
          break;
        if ( ++v6 >= (unsigned int)v5 )
          goto LABEL_8;
      }
      WdipSemMergeEvents(*(_QWORD *)(a1 + 8LL * v6 + 56), a2, v5, v7);
    }
    else
    {
LABEL_8:
      if ( (unsigned int)v5 >= 0x7C )
      {
        return (unsigned int)-1073741823;
      }
      else
      {
        v9 = (_OWORD *)WdipSemFastAllocate(0LL, 48LL);
        if ( v9 )
        {
          *v9 = *(_OWORD *)a2;
          v9[1] = *(_OWORD *)(a2 + 16);
          v9[2] = *(_OWORD *)(a2 + 32);
          *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 48))++ + 56) = v9;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
