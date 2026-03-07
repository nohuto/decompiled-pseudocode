__int64 __fastcall ValidateParents(struct tagWND **a1, int a2)
{
  struct tagWND *v3; // r8
  struct tagWND *v4; // rax
  int v5; // r15d
  int v6; // ebp
  struct tagWND *v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // r8
  int v11; // ebx
  HRGN v12; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF
  struct tagRECT v14; // [rsp+48h] [rbp-30h] BYREF

  v14 = 0LL;
  v3 = (struct tagWND *)a1;
  v13 = 0LL;
  v4 = a1[5];
  v5 = 0;
  while ( (*((_BYTE *)v4 + 31) & 0x40) != 0 )
  {
    v3 = (struct tagWND *)*((_QWORD *)v3 + 13);
    v4 = (struct tagWND *)*((_QWORD *)v3 + 5);
  }
  v6 = 0;
  v7 = a1[13];
  if ( *(char *)(*((_QWORD *)v3 + 5) + 18LL) < 0 )
    v6 = a2;
  while ( 1 )
  {
    if ( !v7 )
      return 1LL;
    v8 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v8 + 31) & 2) != 0 )
      return 1LL;
    if ( *(_QWORD *)(v8 + 136) )
      break;
LABEL_18:
    v7 = (struct tagWND *)*((_QWORD *)v7 + 13);
  }
  if ( !v6 )
  {
    if ( !v5 )
    {
      v5 = 1;
      v13 = *(_OWORD *)((char *)a1[5] + 88);
      if ( !(unsigned int)IntersectWithParents((__int64)a1, (__int64)&v13) )
        return 1LL;
      SetRectRgnIndirect(ghrgnInv1, &v13);
      v10 = *((_QWORD *)a1[5] + 21);
      if ( v10 )
      {
        if ( !(unsigned int)GreCombineRgn(ghrgnInv1, ghrgnInv1, v10, 1LL) )
          return 1LL;
      }
    }
    v14 = *(struct tagRECT *)(*((_QWORD *)v7 + 5) + 88LL);
    if ( !(unsigned int)IntersectWithParents((__int64)v7, (__int64)&v14) )
      return 1LL;
    v12 = (HRGN)ghrgnInv1;
    v11 = LogicalToPhysicalInPlaceRgnWorker((const struct tagWND *)a1, &v12, 0);
    InternalInvalidate2(v7, (unsigned __int64)v12, v12, &v14, 0x8048u);
    if ( v11 )
      GreDeleteObject(v12);
    goto LABEL_18;
  }
  return 0LL;
}
