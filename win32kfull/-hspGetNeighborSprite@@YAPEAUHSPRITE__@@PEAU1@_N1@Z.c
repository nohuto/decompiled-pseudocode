__int64 __fastcall hspGetNeighborSprite(Gre::Base *a1, char a2, char a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v13; // [rsp+48h] [rbp+20h] BYREF

  v6 = Gre::Base::Globals(a1);
  v13 = 0LL;
  v7 = v6;
  DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v13, (HSPRITE)a1);
  v8 = 0LL;
  if ( !v13 )
    return v8;
  if ( a2 )
    v9 = (_QWORD *)v13[3];
  else
    v9 = (_QWORD *)v13[4];
  if ( !a3 || (v10 = *((_QWORD *)v7 + 38) + 80LL, v9 == (_QWORD *)v10) )
  {
LABEL_12:
    if ( v9 == (_QWORD *)(*((_QWORD *)v7 + 38) + 80LL) )
      goto LABEL_14;
  }
  else
  {
    while ( 1 )
    {
      v11 = (__int64)(v9 + 3);
      if ( !v9 )
        v11 = 48LL;
      if ( v13[6] == *(_QWORD *)v11 )
        break;
      if ( a2 )
        v9 = (_QWORD *)*v9;
      else
        v9 = (_QWORD *)v9[1];
      if ( v9 == (_QWORD *)v10 )
        goto LABEL_12;
    }
  }
  v8 = *(_QWORD *)((unsigned __int64)(v9 - 3) & -(__int64)(v9 != 0LL));
LABEL_14:
  if ( v13 )
    DEC_SHARE_REF_CNT(v13);
  return v8;
}
