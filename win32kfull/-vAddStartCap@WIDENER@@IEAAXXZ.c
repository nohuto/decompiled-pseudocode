void __fastcall WIDENER::vAddStartCap(WIDENER *this)
{
  int v2; // ecx
  int v3; // ecx
  __int64 *v4; // rax
  int v5; // r9d
  struct EVECTORFX *v6; // r8
  WIDEPATHOBJ *v7; // rdi
  struct _POINTFIX *v8; // rbx
  struct LINEDATA *v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  int v12; // ebx
  _DWORD *v13; // rax
  int v14; // ecx
  int *v15; // rax
  int v16; // ecx
  __int64 *v17; // rax
  __int64 v18; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+58h] [rbp+28h] BYREF
  char v20; // [rsp+60h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 323);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = (__int64 *)WIDENER::vecOutPerp(this, &v18);
      v5 = 1;
      v6 = (struct EVECTORFX *)&v18;
      v18 = *v4;
    }
    else
    {
      v9 = (struct LINEDATA *)*((_QWORD *)this + 89);
      if ( (*(_DWORD *)v9 & 2) == 0 )
        WIDENER::vVecSquareCompute(this, v9);
      v10 = *(_QWORD *)(*((_QWORD *)this + 89) + 56LL);
      v11 = -(int)v10;
      LODWORD(v18) = -(int)v10;
      HIDWORD(v18) = -HIDWORD(v10);
      v12 = -HIDWORD(v10);
      v19 = v18;
      v13 = (_DWORD *)WIDENER::vecOutPerp(this, &v20);
      v14 = v13[1];
      LODWORD(v18) = v11 + *v13;
      HIDWORD(v18) = v12 + v14;
      v15 = (int *)WIDENER::vecOutPerp(this, &v20);
      v6 = (struct EVECTORFX *)&v19;
      v16 = *v15;
      HIDWORD(v19) -= v15[1];
      LODWORD(v19) = v19 - v16;
      v5 = 0;
    }
    v7 = (WIDENER *)((char *)this + 1136);
    v8 = (struct _POINTFIX *)((char *)this + 692);
    WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 1136), (struct _POINTFIX *)((char *)this + 692), v6, v5);
  }
  else
  {
    if ( (*((_DWORD *)this + 10) & 0x10) != 0 )
      v17 = (__int64 *)WIDENER::vecOutDraw(this, &v18);
    else
      v17 = (__int64 *)WIDENER::vecOutPerp(this, &v18);
    v8 = (struct _POINTFIX *)((char *)this + 692);
    v7 = (WIDENER *)((char *)this + 1136);
    v18 = *v17;
    WIDEPATHOBJ::vAddPoint(
      (WIDENER *)((char *)this + 1136),
      (struct _POINTFIX *)((char *)this + 692),
      (struct EVECTORFX *)&v18,
      1);
    WIDEPENOBJ::vAddRoundEndCap(
      (WIDENER *)((char *)this + 824),
      this,
      *((struct LINEDATA **)this + 89),
      1,
      *((_DWORD *)this + 10) & 0x10);
  }
  WIDEPATHOBJ::vAddPoint(v7, v8, (struct EVECTORFX *)&v18, 0);
}
