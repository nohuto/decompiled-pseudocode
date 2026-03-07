__int64 __fastcall bSpTransferShape(struct SPRITE *a1, struct SPRITE *a2)
{
  unsigned int v4; // esi
  struct _SURFOBJ *v5; // r8
  _OWORD *v6; // rbp
  struct Gre::Base::SESSION_GLOBALS *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 result; // rax
  struct _XLATEOBJ *v11; // [rsp+70h] [rbp+8h] BYREF

  *(_DWORD *)a1 |= *(_DWORD *)a2 & 0x10;
  v4 = 1;
  v5 = (struct _SURFOBJ *)*((_QWORD *)a2 + 16);
  if ( v5 )
  {
    if ( *((_DWORD *)a2 + 56) == 2 && *((_BYTE *)a2 + 231) == 1 && !*((_BYTE *)a2 + 228) )
    {
      v6 = (_OWORD *)((char *)a2 + 96);
      bSpCreateShape(
        a1,
        (struct _POINTL *)a2 + 17,
        v5,
        0LL,
        (struct _RECTL *)a2 + 6,
        *((struct PALETTE **)a2 + 18),
        v5->iBitmapFormat,
        1u,
        0LL);
    }
    else
    {
      v7 = Gre::Base::Globals(a1);
      v8 = *((_QWORD *)a1 + 2);
      v9 = *((_QWORD *)a2 + 18);
      v11 = 0LL;
      v6 = (_OWORD *)((char *)a2 + 96);
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (Gre::Base *)&v11,
                           0LL,
                           0,
                           v9,
                           *(_QWORD *)(*(_QWORD *)(v8 + 32) + 104LL),
                           *((_QWORD *)v7 + 750),
                           *((_QWORD *)v7 + 750),
                           0,
                           0,
                           0,
                           0) )
        bSpCreateShape(
          a1,
          (struct _POINTL *)a2 + 17,
          *((struct _SURFOBJ **)a2 + 16),
          v11,
          (struct _RECTL *)a2 + 6,
          *(struct PALETTE **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 104LL),
          0,
          1u,
          0LL);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v11);
    }
    if ( *((_QWORD *)a1 + 16) )
    {
      *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 1);
      *((_OWORD *)a1 + 6) = *v6;
      *((_DWORD *)a1 + 51) = *((_DWORD *)a2 + 51);
      *((_DWORD *)a1 + 50) = *((_DWORD *)a2 + 50);
    }
    else
    {
      v4 = 0;
    }
  }
  result = v4;
  *((_QWORD *)a1 + 28) = *((_QWORD *)a2 + 28);
  *((_DWORD *)a1 + 58) = *((_DWORD *)a2 + 58);
  return result;
}
