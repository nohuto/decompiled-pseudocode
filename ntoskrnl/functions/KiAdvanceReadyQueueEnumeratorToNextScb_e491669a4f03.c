__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextScb(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // r8
  unsigned __int64 v10; // rcx
  int v11; // edx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rdx
  __int64 i; // rcx

  while ( 1 )
  {
    v2 = *(unsigned __int8 *)(a1 + 10);
    v3 = *(_QWORD **)(a1 + 16);
    v4 = 6 * v2;
    if ( v3 != *(_QWORD **)(a1 + 48 * v2 + 72) )
    {
      v6 = (unsigned __int64)(v3 + 49);
      v7 = v3[50];
      v8 = v3[49];
      if ( (v7 & 1) == 0 )
        goto LABEL_5;
      if ( v8 )
      {
        v8 ^= v6;
LABEL_5:
        if ( !v8 )
          goto LABEL_6;
        if ( (v3[50] & 1LL) != 0 )
        {
          if ( v7 == 1 )
            v12 = 0LL;
          else
            v12 = v7 ^ (v6 | 1);
        }
        else
        {
          v12 = v3[50];
        }
LABEL_31:
        v10 = v12 - 88;
        if ( v10 )
          goto LABEL_11;
        goto LABEL_2;
      }
LABEL_6:
      while ( 1 )
      {
        v9 = v3 + 51;
        if ( !v3[51] )
          break;
        v12 = v3[12];
        v13 = v3 + 11;
        if ( v12 )
        {
          v14 = *(_QWORD **)v12;
          if ( *(_QWORD *)v12 )
          {
            do
            {
              v12 = (unsigned __int64)v14;
              v14 = (_QWORD *)*v14;
            }
            while ( v14 );
          }
        }
        else
        {
          for ( i = v13[2]; ; i = *(_QWORD *)(v12 + 16) )
          {
            v12 = i & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v12 || *(_QWORD **)v12 == v13 )
              break;
            v13 = (_QWORD *)v12;
          }
        }
        if ( v12 )
          goto LABEL_31;
        v3 = (_QWORD *)*v9;
      }
    }
LABEL_2:
    result = KiAdvanceReadyQueueEnumeratorToNextRootScb(a1);
    if ( (int)result < 0 )
      return result;
    v10 = *(_QWORD *)(a1 + 24);
LABEL_11:
    *(_QWORD *)(a1 + 16) = v10;
    if ( v10 )
    {
      v11 = *(unsigned __int16 *)(v10 + 114);
      *(_DWORD *)(a1 + 4) = v11;
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 416) + 116LL) == *(_DWORD *)(a1 + 8 * v4 + 80) )
      {
        v11 &= *(_DWORD *)(a1 + 8 * v4 + 84);
        *(_DWORD *)(a1 + 4) = v11;
      }
      if ( v11 )
        return 0LL;
    }
  }
}
