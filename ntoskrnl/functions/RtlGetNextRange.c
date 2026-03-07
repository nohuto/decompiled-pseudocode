__int64 __fastcall RtlGetNextRange(__int64 *a1, _QWORD *a2, char a3)
{
  __int64 v3; // r11
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v3 = *a1;
  if ( *(_DWORD *)(*a1 + 24) != *((_DWORD *)a1 + 6) )
    return 3221225485LL;
  v6 = a1[2];
  if ( v6 )
  {
    if ( a3 )
      v7 = *(_QWORD *)(v6 + 40);
    else
      v7 = *(_QWORD *)(v6 + 48);
    v8 = a1[1];
    v9 = v7 - 40;
    if ( v8 )
    {
      if ( v7 != v8 )
      {
LABEL_8:
        a1[2] = v9;
        result = 0LL;
        *a2 = v9;
        return result;
      }
      if ( a3 )
        v11 = *(_QWORD *)(v8 + 24);
      else
        v11 = *(_QWORD *)(v8 + 32);
      a1[1] = 0LL;
      v9 = v11 - 40;
    }
    if ( v9 + 40 != v3 )
    {
      if ( (*(_BYTE *)(v9 + 34) & 1) != 0 )
      {
        a1[1] = v9 + 16;
        if ( a3 )
          v12 = *(_QWORD *)(v9 + 16);
        else
          v12 = *(_QWORD *)(v9 + 24);
        v9 = v12 - 40;
      }
      goto LABEL_8;
    }
    a1[2] = 0LL;
  }
  *a2 = 0LL;
  return 2147483674LL;
}
