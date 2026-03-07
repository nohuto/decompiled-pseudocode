void __fastcall WIDENER::vAddEndCap(WIDENER *this)
{
  int v2; // ecx
  int v3; // ecx
  struct _POINTFIX *v4; // rbx
  WIDEPATHOBJ *v5; // rdi
  struct LINEDATA *v6; // rdx
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  int v9; // r9d
  struct EVECTORFX *v10; // r8
  __int64 *v11; // rax
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  char v14; // [rsp+60h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 323);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      v6 = (struct LINEDATA *)*((_QWORD *)this + 88);
      if ( (*(_DWORD *)v6 & 2) == 0 )
        WIDENER::vVecSquareCompute(this, v6);
      v12 = *(_QWORD *)(*((_QWORD *)this + 88) + 56LL);
      v13 = v12;
      v7 = (_DWORD *)WIDENER::vecInPerp(this, &v14);
      LODWORD(v12) = *v7 + v12;
      HIDWORD(v12) += v7[1];
      v8 = (_DWORD *)WIDENER::vecInPerp(this, &v14);
      v4 = (struct _POINTFIX *)((char *)this + 692);
      v5 = (WIDENER *)((char *)this + 1136);
      LODWORD(v13) = v13 - *v8;
      HIDWORD(v13) -= v8[1];
      WIDEPATHOBJ::vAddPoint(
        (WIDENER *)((char *)this + 1136),
        (struct _POINTFIX *)((char *)this + 692),
        (struct EVECTORFX *)&v12,
        0);
      v9 = 0;
      v10 = (struct EVECTORFX *)&v13;
      goto LABEL_13;
    }
    if ( v3 != 1 )
      return;
    v4 = (struct _POINTFIX *)((char *)this + 692);
    v5 = (WIDENER *)((char *)this + 1136);
    v12 = *(_QWORD *)WIDENER::vecInPerp(this, &v12);
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v12,
      0);
  }
  else
  {
    if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
      v11 = (__int64 *)WIDENER::vecInDraw(this, &v12);
    else
      v11 = (__int64 *)WIDENER::vecInPerp(this, &v12);
    v4 = (struct _POINTFIX *)((char *)this + 692);
    v5 = (WIDENER *)((char *)this + 1136);
    v12 = *v11;
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v12,
      0);
    WIDEPENOBJ::vAddRoundEndCap(
      (WIDENER *)((char *)this + 824),
      this,
      *((struct LINEDATA **)this + 88),
      0,
      *((_DWORD *)this + 10) & 0x10);
  }
  v9 = 1;
  v10 = (struct EVECTORFX *)&v12;
LABEL_13:
  WIDEPATHOBJ::vAddPoint(v5, v4, v10, v9);
}
