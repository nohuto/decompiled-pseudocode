__int64 __fastcall DbgkpLkmdSnapPendingIrps(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v8; // rsi
  _WORD *v9; // rdx
  _WORD *v10; // rdx
  _WORD *v11; // rdx

  v3 = a2 + 1280;
  v5 = *(_QWORD *)(a2 + 1280);
  if ( v5 == a2 + 1280 )
  {
    a3[1] |= 8u;
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      ++a3[2];
      result = DbgkpLkmdSnapData(a1, v5, 16LL);
      if ( (int)result < 0 )
        break;
      if ( *(_WORD *)(v5 - 32) != 6 )
      {
        result = 3221225793LL;
        break;
      }
      result = DbgkpLkmdSnapData(a1, v5 - 32, *(unsigned __int16 *)(v5 - 30));
      if ( (int)result < 0 )
        break;
      ++a3[3];
      if ( *(_BYTE *)(v5 + 35) <= *(_BYTE *)(v5 + 34) )
      {
        v8 = *(_QWORD *)(v5 + 152);
        result = DbgkpLkmdSnapData(a1, v8, 72LL);
        if ( (_DWORD)result != -1073741819 )
        {
          if ( (_DWORD)result == -1073741670 )
            break;
          v9 = *(_WORD **)(v8 + 48);
          if ( v9 )
            DbgkpLkmdSnapObject(a1, v9, 5);
          v10 = *(_WORD **)(v8 + 40);
          if ( v10 )
          {
            DbgkpLkmdSnapObject(a1, v10, 3);
            v11 = *(_WORD **)(*(_QWORD *)(v8 + 40) + 8LL);
            if ( v11 )
              DbgkpLkmdSnapObject(a1, v11, 4);
          }
        }
      }
      v5 = *(_QWORD *)v5;
      if ( v5 == v3 )
      {
        a3[1] |= 8u;
        result = 0LL;
        break;
      }
    }
    *a3 = result;
  }
  return result;
}
