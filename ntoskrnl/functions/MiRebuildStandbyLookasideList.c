__int64 __fastcall MiRebuildStandbyLookasideList(__int64 a1, unsigned int a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rsi
  int v13; // r13d
  int v14; // r15d
  unsigned int v15; // r12d
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+50h] [rbp-38h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  result = MiPfnToStandbyLookaside(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 0LL, (__int64 *)&v19);
  v6 = 88LL * DWORD2(v20);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v10 = *(_QWORD *)(v6 + v19 + 2968);
      v8 = (unsigned __int64)DWORD2(v20) << 9;
      v9 = (__int64 *)(v8 + v19 + 11520);
    }
    else
    {
      v7 = *(_QWORD *)(v19 + 16) + 25408LL * DWORD2(v19);
      v8 = DWORD2(v20) + 8LL * HIDWORD(v20);
      v9 = (__int64 *)((v8 << 9) + v7 + 6080);
      result = 88 * v8;
      v10 = *(_QWORD *)(88 * v8 + v7 + 3280);
    }
  }
  else
  {
    v10 = *(_QWORD *)(v6 + v19 + 2960);
    v8 = (unsigned __int64)DWORD2(v20) << 9;
    v9 = (__int64 *)(v8 + v19 + 7424);
  }
  if ( (a3 || v9[63] == -1) && v10 != 0x3FFFFFFFFFLL )
  {
    result = MiClearEntireStandbyLookasideList(v8, v9, a2);
    v12 = 0LL;
    v13 = result;
    if ( a2 )
    {
      v14 = 0;
    }
    else
    {
      result = MiGetStandbyPageType(v10);
      v14 = result;
    }
    while ( 1 )
    {
LABEL_9:
      v15 = 1;
      while ( 1 )
      {
        while ( v9[v12] != -1 )
        {
          v12 = (unsigned int)(v12 + 1);
          if ( (_DWORD)v12 == 64 )
            return result;
        }
        result = MiSkipStandbyEntries(v11, v10, v14, a2, v15);
        v10 = result;
        if ( result == 0x3FFFFFFFFFLL )
          return result;
        v16 = 3 * result;
        result = 0xFFFFDE0000000000uLL;
        v17 = 16 * v16 - 0x220000000000LL;
        if ( a2 )
        {
          v14 = 0;
        }
        else
        {
          result = MiGetStandbyPageType(v10);
          v14 = result;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          goto LABEL_9;
        if ( !v13 )
          break;
LABEL_16:
        MiWriteStandbyLookasideEntry(&v9[v12], a2, v10);
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)v12 != 63 )
        {
          if ( a2 )
          {
            v10 = a2 == 1
                ? *(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFLL
                : (*(_QWORD *)(v17 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v17 + 36) & 0x1FFFFF) << 19);
          }
          else
          {
            v10 = *(_QWORD *)v17 & 0xFFFFFFFFFFLL;
            v15 = 16;
          }
          result = 1LL;
          v12 = (unsigned int)(v12 + 1);
          if ( v10 != 0x3FFFFFFFFFLL )
            continue;
        }
        return result;
      }
      v11 = 0;
      v18 = v9;
      while ( *v18 != v10 )
      {
        ++v11;
        ++v18;
        if ( v11 >= 0x40 )
          goto LABEL_16;
      }
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
