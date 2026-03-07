__int64 __fastcall MSURF::bFindSurface(MSURF *this, struct _SURFOBJ *a2, struct _CLIPOBJ *a3, struct _RECTL *a4)
{
  USHORT iType; // ax
  DHPDEV dhpdev; // rax
  CLIPOBJ **v9; // rdi
  DHSURF dhsurf; // r9
  __int64 **v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  RECTL *v16; // r14
  BYTE *v17; // r15
  struct _RECTL *v18; // r12
  CLIPOBJ *Clip; // rax
  __int64 v20; // rcx
  struct _CLIPOBJ *v21; // rax
  __int64 *i; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // cl

  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  iType = a2->iType;
  if ( iType == 3 )
  {
    dhpdev = a2->dhpdev;
    v9 = (CLIPOBJ **)((char *)this + 72);
    *(_QWORD *)this = dhpdev;
    *((_QWORD *)this + 9) = a3;
    dhsurf = a2->dhsurf;
    *((_QWORD *)this + 3) = a2->dhsurf;
    v11 = *(__int64 ***)dhpdev;
    *((_QWORD *)this + 7) = *(_QWORD *)dhpdev;
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = *((unsigned int *)v11 + 4);
        v13 = *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8 * v12);
        if ( v13 )
          break;
        v14 = *v11;
        *((_QWORD *)this + 7) = *v11;
        v11 = (__int64 **)v14;
        if ( !v14 )
          goto LABEL_33;
      }
      *((_QWORD *)this + 8) = v13;
      *((_QWORD *)this + 10) = *(_QWORD *)(SGDGetSessionState(v12) + 32) + 9296LL;
      return 1LL;
    }
    goto LABEL_33;
  }
  if ( iType == 1 && ((_DWORD)a2->hdev[10] & 0x20000) == 0 )
    return 0LL;
  *(_QWORD *)this = a2->dhpdev;
  if ( !a3 || !a3->iDComplexity )
  {
    Clip = EngCreateClip();
    v9 = (CLIPOBJ **)((char *)this + 72);
    *((_QWORD *)this + 9) = Clip;
    if ( Clip )
    {
      v20 = *(_QWORD *)this;
      *((_DWORD *)this + 13) = 1;
      Clip->rclBounds = *(RECTL *)(v20 + 72);
      RGNOBJ::vSet((RGNOBJ *)&(*v9)[2].rclBounds.top, &(*v9)->rclBounds);
      v17 = (BYTE *)this + 88;
      v21 = a3;
      *((_BYTE *)this + 88) = 0;
      if ( !a3 )
        v21 = *v9;
      v16 = (RECTL *)((char *)this + 8);
      v18 = (struct _RECTL *)((char *)this + 32);
      *(RECTL *)((char *)this + 8) = v21->rclBounds;
      if ( a3 )
      {
        if ( !bIntersect(a4, (const struct _RECTL *)((char *)this + 8), (struct _RECTL *)this + 2) )
        {
LABEL_33:
          if ( *((_DWORD *)this + 13) == 1 )
            EngDeleteClip(*v9);
          return 0LL;
        }
      }
      else
      {
        *v18 = *a4;
      }
      goto LABEL_21;
    }
    return 0LL;
  }
  v16 = (RECTL *)((char *)this + 8);
  v9 = (CLIPOBJ **)((char *)this + 72);
  *((_QWORD *)this + 9) = a3;
  v17 = (BYTE *)this + 88;
  v18 = (struct _RECTL *)((char *)this + 32);
  *((_BYTE *)this + 88) = a3->iDComplexity;
  *(RECTL *)((char *)this + 8) = a3->rclBounds;
  if ( !bIntersect(a4, (const struct _RECTL *)((char *)this + 8), (struct _RECTL *)this + 2) )
    return 0LL;
LABEL_21:
  for ( i = *(__int64 **)this; ; i = (__int64 *)*((_QWORD *)this + 7) )
  {
    v23 = *i;
    *((_QWORD *)this + 7) = *i;
    if ( !v23 )
    {
      (*v9)->rclBounds = *v16;
      (*v9)->iDComplexity = *v17;
      goto LABEL_33;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v23 + 56) + 40LL) & 0x400) == 0 )
      break;
LABEL_30:
    ;
  }
  if ( !*v17
    && v18->left >= *(_DWORD *)(v23 + 28)
    && *((_DWORD *)this + 9) >= *(_DWORD *)(v23 + 32)
    && *((_DWORD *)this + 10) <= *(_DWORD *)(v23 + 36)
    && *((_DWORD *)this + 11) <= *(_DWORD *)(v23 + 40) )
  {
    (*v9)->iDComplexity = 0;
    (*v9)->rclBounds = *v18;
    goto LABEL_37;
  }
  if ( !bIntersect(v18, (const struct _RECTL *)(v23 + 28), &(*v9)->rclBounds) )
  {
    (*v9)->rclBounds = *v16;
    goto LABEL_30;
  }
  v25 = 1;
  if ( *v17 )
    v25 = *v17;
  (*v9)->iDComplexity = v25;
LABEL_37:
  v24 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = *(_QWORD *)(v24 + 64);
  *((_QWORD *)this + 10) = v24 + 72;
  return 1LL;
}
