__int64 __fastcall MiMapHotPatchImageInSystemSpace(_QWORD *a1)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  __int64 v4; // rdi
  PMDL Mdl; // rax
  struct _MDL *v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  struct _MDL *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 *i; // rcx
  unsigned int v12; // eax
  struct _MDL **v13; // r8
  struct _MDL **v14; // rdx
  __int64 v15; // r9
  struct _MDL *v16; // rax
  ULONG_PTR v17; // rdi
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (void *)a1[1];
  v19 = 0;
  v4 = (a1[2] - (_QWORD)v3) >> 12;
  Mdl = IoAllocateMdl(v3, (_DWORD)v4 << 12, 0, 0, 0LL);
  v6 = Mdl;
  if ( Mdl )
  {
    v7 = (__int64)&Mdl[1];
    v8 = (unsigned int)v4;
    v9 = Mdl + 1;
    v10 = (unsigned __int64)&Mdl[1] + 8 * (unsigned int)v4;
    if ( (unsigned __int64)&Mdl[1] < v10 )
    {
      do
      {
        v9->Next = (struct _MDL *)qword_140C69388;
        v9 = (struct _MDL *)((char *)v9 + 8);
      }
      while ( (unsigned __int64)v9 < v10 );
    }
    for ( i = (__int64 *)a1[7]; i; i = (__int64 *)*i )
    {
      v12 = *((_DWORD *)i + 10) >> 12;
      v13 = &v6[1].Next + ((i[4] + (unsigned __int64)*((unsigned int *)i + 11) - a1[1]) >> 12);
      if ( v12 )
      {
        v14 = (struct _MDL **)(i + 6);
        v15 = v12;
        do
        {
          v16 = *v14++;
          *v13++ = v16;
          --v15;
        }
        while ( v15 );
      }
    }
    v17 = MiReservePtes((__int64)&qword_140C695C0, v4);
    if ( v17 )
    {
      MiFillSystemPtes(v17, v8, v7, 4u, 2, &v19);
      v6->MdlFlags |= 1u;
      v6->MappedSystemVa = (PVOID)((__int64)(v17 << 25) >> 16);
      a1[8] = v6;
    }
    else
    {
      v2 = -1073741670;
      IoFreeMdl(v6);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
