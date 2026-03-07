void __fastcall xxxTrackBox(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  __int64 v7; // rbx
  BOOL v8; // eax
  char v9; // r8
  BOOL v10; // edi
  int v11; // r8d
  int v12; // esi
  int v13; // esi
  __int64 v14; // rax
  struct tagWND *v15; // rdx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h]

  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
  if ( v7 && (!a2 || BYTE1(a2) == 2) )
  {
    if ( (*(_DWORD *)v7 & 8) != 0 )
    {
      RecalcTrackRect((struct tagSBTRACK *)v7);
      *(_DWORD *)v7 &= ~8u;
    }
    LODWORD(v16) = (__int16)a4;
    HIDWORD(v16) = SHIWORD(a4);
    v8 = PtInRect((_DWORD *)(v7 + 32), v16);
    v10 = v8;
    if ( v8 == (v9 & 1)
      || (zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v7, v8, *(_DWORD *)(v7 + 56)),
          v7 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL)) )
    {
      v11 = *(_DWORD *)(gpsi + 4976LL) >> 3;
      v12 = a2 - 512;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            xxxEndScroll(a1, 0);
LABEL_17:
          if ( v7 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) )
            *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ v10) & 1;
          return;
        }
        *(_QWORD *)(v7 + 64) = 0LL;
        v11 = *(_DWORD *)(gpsi + 4976LL);
      }
      if ( v10 )
      {
        if ( v10 != (*(_DWORD *)v7 & 1) )
        {
          v14 = SetSystemTimer((__int64)a1, 65534, v11, (int)xxxContScroll, 0);
          v15 = *(struct tagWND **)(v7 + 24);
          *(_QWORD *)(v7 + 64) = v14;
          if ( v15 )
            xxxDoScroll(*(struct tagWND **)(v7 + 16), v15, *(unsigned int *)(v7 + 56), 0LL, (*(_DWORD *)v7 >> 1) & 1);
        }
      }
      goto LABEL_17;
    }
  }
}
