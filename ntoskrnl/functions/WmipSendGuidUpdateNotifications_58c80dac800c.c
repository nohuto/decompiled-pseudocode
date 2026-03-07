void __fastcall WmipSendGuidUpdateNotifications(int a1, unsigned int a2, _OWORD **a3)
{
  __int64 v3; // rbp
  int v6; // edi
  unsigned int v7; // r14d
  char *Pool2; // rax
  char *v9; // rbx
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax
  __int64 v14; // rax
  char *v15; // rcx
  __int64 v16; // r8
  _OWORD *v17; // rax

  v3 = a2;
  v6 = 16 * a2 + 8;
  v7 = 16 * a2 + 110;
  Pool2 = (char *)ExAllocatePool2(256LL, v7, 1885957463LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v7);
    *(_OWORD *)v9 = 0LL;
    *((_OWORD *)v9 + 1) = 0LL;
    *((_OWORD *)v9 + 2) = 0LL;
    *((_DWORD *)v9 + 6) = -1265808991;
    v10 = 14LL;
    *((_DWORD *)v9 + 7) = 298903415;
    *((_DWORD *)v9 + 8) = -1610609499;
    *((_DWORD *)v9 + 9) = 271124169;
    *(_DWORD *)v9 = v7;
    *((_DWORD *)v9 + 11) = 10;
    *((_DWORD *)v9 + 12) = 64;
    *((_DWORD *)v9 + 14) = 96;
    *((_DWORD *)v9 + 15) = v6;
    *((_WORD *)v9 + 32) = 28;
    v11 = v9 + 66;
    do
    {
      if ( v10 == -2147483632 )
        break;
      v12 = *(_WORD *)((char *)v11 + (char *)L"REGUPDATEINFO" - (v9 + 66));
      if ( !v12 )
        break;
      *v11++ = v12;
      --v10;
    }
    while ( v10 );
    v13 = v11 - 1;
    if ( v10 )
      v13 = v11;
    *v13 = 0;
    v14 = *((unsigned int *)v9 + 14);
    v15 = &v9[v14 + 8];
    *(_DWORD *)&v9[v14] = a1;
    *(_DWORD *)&v9[v14 + 4] = v3;
    if ( (_DWORD)v3 )
    {
      v16 = v3;
      do
      {
        v17 = *a3;
        a3 += 2;
        *(_OWORD *)v15 = *v17;
        v15 += 16;
        --v16;
      }
      while ( v16 );
    }
    WmipProcessEvent(v9);
    ExFreePoolWithTag(v9, 0);
  }
}
