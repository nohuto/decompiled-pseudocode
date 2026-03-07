__int64 __fastcall WmipFindSysIdTable(_DWORD *a1, _BYTE *a2, _DWORD *a3)
{
  char *v6; // rax
  unsigned int v7; // ebx
  char *v8; // rcx
  char *v9; // r10
  char v10; // r8
  __int64 i; // rdx

  v6 = (char *)MmMapIoSpaceEx(917504LL, 0x20000LL, 4u);
  if ( v6 )
  {
    v8 = v6;
    v9 = v6 + 131055;
    while ( 1 )
    {
      if ( v8 > v9 )
        goto LABEL_14;
      if ( *(_DWORD *)v8 == 1398362975 && *((_WORD *)v8 + 2) == 17481 && v8[6] == 95 )
      {
        v10 = 0;
        for ( i = 0LL; (unsigned int)i < 0x11; i = (unsigned int)(i + 1) )
          v10 += v8[i];
        if ( !v10 )
          break;
      }
      v8 += 16;
    }
    if ( v8 > v9 )
    {
LABEL_14:
      v7 = -1073741823;
      goto LABEL_16;
    }
    a1[1] = 0;
    *a1 = *(_DWORD *)(v8 + 10);
    *a2 = v8[16];
    *a3 = *((unsigned __int16 *)v8 + 7);
    v7 = 0;
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_16:
  if ( v6 )
    MmUnmapIoSpace(v6, 0x20000uLL);
  return v7;
}
