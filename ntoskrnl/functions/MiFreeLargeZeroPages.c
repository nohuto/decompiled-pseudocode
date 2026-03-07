__int64 __fastcall MiFreeLargeZeroPages(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  _QWORD **v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rdi
  char v13; // al
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  __int128 v15; // [rsp+40h] [rbp-58h]

  v3 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  do
  {
    while ( 1 )
    {
      v8 = (_QWORD **)(a2 + 24 * v4);
      v9 = *v8;
      if ( *v8 == v8 )
        break;
      if ( (_QWORD **)v9[1] != v8 || (v11 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
        __fastfail(3u);
      *v8 = v11;
      v11[1] = v8;
      if ( (_DWORD)v4 == 3 )
      {
        MiReleaseFreshPage(v9);
        ++v3;
      }
      else
      {
        v12 = MiLargePageSizes[v4];
        MiUpdateLargePageBitMap(a1, -1431655765 * ((__int64)(v9 + 0x44000000000LL) >> 4), v12, 0, 1);
        v13 = MiLockPageInline(v9);
        v15 = 0LL;
        *(_QWORD *)&v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x44000000000LL) >> 4);
        *((_QWORD *)&v14 + 1) = a3;
        LOBYTE(v15) = v13;
        MiInsertLargePageInNodeList(&v14);
        v3 += v12;
      }
    }
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < 4 );
  return v3;
}
