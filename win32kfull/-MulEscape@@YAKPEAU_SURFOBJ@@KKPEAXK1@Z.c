__int64 __fastcall MulEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        void *a6)
{
  unsigned int v6; // esi
  unsigned int v10; // eax
  DHPDEV dhpdev; // rax
  int v12; // ebx
  __int64 **i; // rdi
  unsigned int v14; // eax
  _QWORD v16[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v17[64]; // [rsp+50h] [rbp-B8h] BYREF
  struct _SURFOBJ *v18; // [rsp+90h] [rbp-78h]

  v6 = 0;
  if ( !a1->dhsurf || a2 - 4352 <= 2 )
    return 0LL;
  if ( a1->iType == 3 )
  {
    if ( (unsigned int)MSURF::bFindSurface((MSURF *)v17, a1, 0LL, 0LL) )
    {
      do
      {
        v16[0] = v18->hdev;
        if ( *(_QWORD *)(v16[0] + 2856LL) )
        {
          v10 = PDEVOBJ::Escape((PDEVOBJ *)v16, v18, a2, a3, a4, a5, a6);
          if ( v10 )
            v6 = v10;
        }
      }
      while ( (unsigned int)MSURF::bNextSurface((MSURF *)v17) );
    }
  }
  else
  {
    dhpdev = a1->dhpdev;
    v12 = *((_DWORD *)dhpdev + 4);
    for ( i = *(__int64 ***)dhpdev; v12; i = (__int64 **)*i )
    {
      --v12;
      v16[0] = i[6];
      if ( *(_QWORD *)(v16[0] + 2856LL) )
      {
        v14 = PDEVOBJ::Escape((PDEVOBJ *)v16, (struct _SURFOBJ *)i[8], a2, a3, a4, a5, a6);
        if ( v14 )
          v6 = v14;
      }
    }
  }
  return v6;
}
