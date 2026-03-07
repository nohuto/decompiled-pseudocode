__int64 __fastcall MSURF::bNextSurface(MSURF *this)
{
  __int64 v1; // r9
  __int64 ***v3; // rax
  __int64 **v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char v13; // cl

  v1 = *((_QWORD *)this + 3);
  if ( !v1 )
  {
    v9 = (__int64 *)*((_QWORD *)this + 7);
    v10 = *v9;
    for ( *((_QWORD *)this + 7) = *v9; ; *((_QWORD *)this + 7) = *v11 )
    {
      if ( !v10 )
      {
        *(_OWORD *)(*((_QWORD *)this + 9) + 4LL) = *(_OWORD *)((char *)this + 8);
        *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = *((_BYTE *)this + 88);
        goto LABEL_25;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 56) + 40LL) & 0x400) == 0 )
      {
        if ( !*((_BYTE *)this + 88)
          && *((_DWORD *)this + 8) >= *(_DWORD *)(v10 + 28)
          && *((_DWORD *)this + 9) >= *(_DWORD *)(v10 + 32)
          && *((_DWORD *)this + 10) <= *(_DWORD *)(v10 + 36)
          && *((_DWORD *)this + 11) <= *(_DWORD *)(v10 + 40) )
        {
          *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = 0;
          *(_OWORD *)(*((_QWORD *)this + 9) + 4LL) = *((_OWORD *)this + 2);
          goto LABEL_29;
        }
        if ( bIntersect(
               (const struct _RECTL *)this + 2,
               (const struct _RECTL *)(v10 + 28),
               (struct _RECTL *)(*((_QWORD *)this + 9) + 4LL)) )
        {
          v13 = 1;
          if ( *((_BYTE *)this + 88) )
            v13 = *((_BYTE *)this + 88);
          *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = v13;
LABEL_29:
          v12 = *((_QWORD *)this + 7);
          *((_QWORD *)this + 8) = *(_QWORD *)(v12 + 64);
          *((_QWORD *)this + 10) = v12 + 72;
          return 1LL;
        }
        *(_OWORD *)(*((_QWORD *)this + 9) + 4LL) = *(_OWORD *)((char *)this + 8);
      }
      v11 = (_QWORD *)*((_QWORD *)this + 7);
      v10 = *v11;
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 8) + 92LL) & 4) != 0
    && !_bittest((const signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 7) + 56LL) + 2096LL), 0xFu) )
  {
    *((_DWORD *)this + 12) |= 1u;
  }
  v3 = (__int64 ***)*((_QWORD *)this + 7);
  v4 = *v3;
  *((_QWORD *)this + 7) = *v3;
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *((unsigned int *)v4 + 4);
      v6 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * v5);
      if ( v6 )
      {
        if ( _bittest((const signed __int32 *)v4[7] + 524, 0xFu) || (*((_DWORD *)this + 12) & 1) == 0 )
          break;
      }
      v7 = *v4;
      *((_QWORD *)this + 7) = *v4;
      v4 = (__int64 **)v7;
      if ( !v7 )
        goto LABEL_25;
    }
    *((_QWORD *)this + 8) = v6;
    *((_QWORD *)this + 10) = *(_QWORD *)(SGDGetSessionState(v5) + 32) + 9296LL;
    return 1LL;
  }
LABEL_25:
  if ( *((_DWORD *)this + 13) == 1 )
    EngDeleteClip(*((CLIPOBJ **)this + 9));
  return 0LL;
}
