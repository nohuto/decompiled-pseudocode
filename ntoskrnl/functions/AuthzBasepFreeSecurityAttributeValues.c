void __fastcall AuthzBasepFreeSecurityAttributeValues(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  void **v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  void **v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rsi
  _QWORD **v11; // r8
  void **v12; // rdx
  int v13; // eax
  __int64 *v14; // rbp

  if ( !a2 )
  {
    v5 = (void **)(a1 + 72);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (v6[4] & 2) != 0 )
      {
        v11 = (_QWORD **)v6[2];
        if ( v11[1] != v6 + 2 || (v12 = (void **)v6[3], *v12 != v6 + 2) )
LABEL_14:
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        *((_DWORD *)v6 + 8) &= ~2u;
        if ( a1 )
          --*(_DWORD *)(a1 + 88);
      }
      if ( (v6[4] & 1) != 0 )
      {
        v7 = (_QWORD *)*v6;
        if ( *(_QWORD **)(*v6 + 8LL) != v6 )
          goto LABEL_14;
        v8 = (void **)v6[1];
        if ( *v8 != v6 )
          goto LABEL_14;
        *v8 = v7;
        v7[1] = v8;
        *((_DWORD *)v6 + 8) &= ~1u;
        if ( a1 )
        {
          --*(_DWORD *)(a1 + 60);
          if ( (v6[4] & 4) != 0 )
            --*(_DWORD *)(a1 + 64);
        }
      }
      ExFreePoolWithTag(v6, 0);
    }
  }
  v9 = (__int64 *)(a1 + 96);
  v10 = *(__int64 **)(a1 + 96);
  if ( (__int64 *)*v9 != v9 )
  {
    do
    {
      v13 = *((_DWORD *)v10 + 4);
      v14 = v10 - 2;
      v10 = (__int64 *)*v10;
      if ( (v13 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v14, 0LL, a4);
        ExFreePoolWithTag(v14, 0);
      }
    }
    while ( v10 != v9 );
  }
}
