void __fastcall DWMSPRITE::SetLogicalSurface(DWMSPRITE *this, HDEV a2, struct SFMLOGICALSURFACE *a3)
{
  __int64 v3; // rax
  char v6; // si
  char v7; // cl
  __int64 v8; // rax

  v3 = *((_QWORD *)this + 18);
  if ( !v3 && a3 )
  {
    v6 = 1;
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  v6 = 0;
  if ( !v3 || a3 )
    goto LABEL_4;
  v7 = 1;
LABEL_5:
  if ( *((_DWORD *)this + 29) == 3 )
    *((_DWORD *)this + 29) = 1;
  if ( v7 )
  {
    *(_DWORD *)(v3 + 244) &= ~4u;
    *(_QWORD *)(v3 + 296) = 0LL;
    DEC_SHARE_REF_CNT(*((_QWORD *)this + 18));
    EtwDwmSpriteLogicalSurfUnBindEvent(*(_QWORD *)this, **((_QWORD **)this + 18));
  }
  *((_QWORD *)this + 18) = a3;
  if ( v6 )
  {
    INC_SHARE_REF_CNT(a3);
    v8 = *(_QWORD *)this;
    *((_DWORD *)a3 + 61) |= 4u;
    *((_QWORD *)a3 + 37) = v8;
    EtwDwmSpriteLogicalSurfBindEvent(*(_QWORD *)this, *(_QWORD *)a3);
  }
}
