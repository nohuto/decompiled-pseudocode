void __fastcall vSrcCopyS16D32(struct BLTINFO *a1)
{
  int v1; // r14d
  XLATEOBJ *v2; // r13
  int v3; // esi
  unsigned __int16 *v4; // rbx
  unsigned int *v5; // rdi
  int v6; // ebp
  int v7; // r15d
  __int64 v8; // rax
  _DWORD *v9; // rdx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // ecx
  int v13; // r8d
  unsigned int v14; // ecx
  int v15; // r12d

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATEOBJ **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v5 = (unsigned int *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  v6 = *((_DWORD *)a1 + 10) - 2 * v1;
  v7 = *((_DWORD *)a1 + 11) - 4 * v1;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v9 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 112LL);
  if ( v9[2] != 31 )
    goto LABEL_16;
  v10 = v9[1];
  if ( v10 == 2016 )
  {
    if ( *v9 == 63488 && (*(_DWORD *)(v8 + 24) & 8) != 0 )
    {
      while ( 1 )
      {
        v11 = v1;
        do
        {
          v12 = *v4++;
          *v5++ = ((v12 & 0x600 | (v12 >> 1) & 0xE) >> 1) | (8
                                                           * (v12 & 0xE01F | (4 * (v12 & 0x7E0 | (8 * (v12 & 0xF800))))));
          --v11;
        }
        while ( v11 );
        if ( !--v3 )
          break;
        v4 = (unsigned __int16 *)((char *)v4 + v6);
        v5 = (unsigned int *)((char *)v5 + v7);
      }
      return;
    }
    goto LABEL_16;
  }
  if ( v10 != 992 || *v9 != 31744 || (*(_DWORD *)(v8 + 24) & 8) == 0 )
  {
LABEL_16:
    while ( 1 )
    {
      v15 = v1;
      do
      {
        *v5++ = XLATEOBJ_iXlate(v2, *v4++);
        --v15;
      }
      while ( v15 );
      if ( !--v3 )
        break;
      v4 = (unsigned __int16 *)((char *)v4 + v6);
      v5 = (unsigned int *)((char *)v5 + v7);
    }
    return;
  }
  while ( 1 )
  {
    v13 = v1;
    do
    {
      v14 = *v4++;
      *v5++ = (v14 >> 2) & 7 | (2
                              * (v14 & 0x380 | (4
                                              * (v14 & 0x1F | (2
                                                             * (v14 & 0x7000 | (4 * (v14 & 0x3E0 | (8 * (v14 & 0x7C00))))))))));
      --v13;
    }
    while ( v13 );
    if ( !--v3 )
      break;
    v4 = (unsigned __int16 *)((char *)v4 + v6);
    v5 = (unsigned int *)((char *)v5 + v7);
  }
}
