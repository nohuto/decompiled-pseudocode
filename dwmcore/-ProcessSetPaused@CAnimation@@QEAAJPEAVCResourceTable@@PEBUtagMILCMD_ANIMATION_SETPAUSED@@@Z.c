__int64 __fastcall CAnimation::ProcessSetPaused(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETPAUSED *a3)
{
  unsigned __int64 v3; // rdx
  bool v4; // zf

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
  if ( v3 < *((_QWORD *)this + 17) )
    goto LABEL_6;
  if ( *((_BYTE *)this + 124) )
  {
    v4 = *((_BYTE *)a3 + 8) == 0;
    if ( *((_BYTE *)a3 + 8) )
      goto LABEL_4;
    *((_QWORD *)this + 26) = v3;
    goto LABEL_6;
  }
  v4 = *((_BYTE *)a3 + 8) == 0;
  if ( *((_BYTE *)a3 + 8) )
  {
    *((_QWORD *)this + 25) += v3 - *((_QWORD *)this + 26);
LABEL_6:
    v4 = *((_BYTE *)a3 + 8) == 0;
  }
LABEL_4:
  *((_BYTE *)this + 124) = !v4;
  return 0LL;
}
