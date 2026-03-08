/*
 * XREFs of ?vNextPoint@LINER@@AEAAXXZ @ 0x1C02F49C0
 * Callers:
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C02F4870 (-vNextEvent@LINER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z @ 0x1C0150C84 (-bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z.c)
 *     ?bNextFigure@READER@@IEAAHXZ @ 0x1C02F3690 (-bNextFigure@READER@@IEAAHXZ.c)
 *     ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1C02F474C (-vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 */

void __fastcall LINER::vNextPoint(LINER *this)
{
  __int64 v2; // rax
  int v3; // edx
  BEZIER32 *v4; // rcx
  int *v5; // rbx
  struct _POINTFIX *v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  __int64 *v13; // rbx
  int Point; // eax
  int v15; // ecx
  struct _RECTFX *v16; // r8
  struct _POINTFIX *v17; // rdx
  BEZIER32 *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  bool v21; // zf
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // xmm1_8
  __int64 v26; // rdx
  int v27; // eax
  int v28; // ecx
  struct _POINTFIX v29; // [rsp+20h] [rbp-30h] BYREF
  __int64 v30; // [rsp+28h] [rbp-28h]
  struct _POINTFIX v31; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTFIX v32; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( *((LINER **)this + 88) == (LINER *)((char *)this + 328) )
    v2 = 88LL;
  v3 = *((_DWORD *)this + 126);
  *((_QWORD *)this + 89) = (char *)this + v2 + 328;
  if ( !v3 )
  {
    v12 = 3;
LABEL_20:
    v13 = (__int64 *)((char *)this + 224);
    *((_DWORD *)this + 172) = v12;
    Point = READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
    v15 = *((_DWORD *)this + 2);
    if ( Point )
    {
      if ( (v15 & 0x10) != 0 )
      {
        v29 = *(struct _POINTFIX *)((char *)this + 692);
        v30 = *v13;
        READER::bNextPoint(this, &v31);
        READER::bNextPoint(this, &v32);
        BEZIER::vInit((LINER *)((char *)this + 48), &v29, v16, gpeqErrorLow);
        v17 = (struct _POINTFIX *)((char *)this + 224);
        v18 = (LINER *)((char *)this + 48);
        if ( *((_DWORD *)this + 54) )
          v19 = BEZIER32::bNext(v18, v17);
        else
          v19 = BEZIER64::bNext(v18, v17);
        v20 = *((_QWORD *)this + 89);
        *(_DWORD *)v20 = 0;
        v21 = v19 == 0;
        v22 = *(_DWORD *)v13;
        *(_DWORD *)(v20 + 40) = *(_DWORD *)v13;
        v23 = *((_DWORD *)this + 57);
        *(_DWORD *)(v20 + 44) = v23;
        *(_DWORD *)(v20 + 40) = v22 - *((_DWORD *)this + 173);
        *(_DWORD *)(v20 + 44) = v23 - *((_DWORD *)this + 174);
        *(_QWORD *)(v20 + 48) = *(_QWORD *)(v20 + 40);
        if ( v21 )
        {
          *((_DWORD *)this + 126) = 0;
        }
        else
        {
          v24 = *((_QWORD *)this + 89);
          *(_OWORD *)((char *)this + 600) = *(_OWORD *)v24;
          *(_OWORD *)((char *)this + 616) = *(_OWORD *)(v24 + 16);
          *(_OWORD *)((char *)this + 632) = *(_OWORD *)(v24 + 32);
          *(_OWORD *)((char *)this + 648) = *(_OWORD *)(v24 + 48);
          *(_OWORD *)((char *)this + 664) = *(_OWORD *)(v24 + 64);
          v25 = *(_QWORD *)(v24 + 80);
          LODWORD(v24) = v30 - v29.x;
          *((_QWORD *)this + 85) = v25;
          *((_DWORD *)this + 128) = 0;
          *((_DWORD *)this + 162) = v24;
          *((_DWORD *)this + 163) = HIDWORD(v30) - v29.y;
          *((_DWORD *)this + 138) = v32.x - v31.x;
          *((_DWORD *)this + 139) = v32.y - v31.y;
          *((_QWORD *)this + 70) = *((_QWORD *)this + 69);
          *((_QWORD *)this + 89) = (char *)this + 600;
          *((_DWORD *)this + 126) = 3;
        }
        return;
      }
    }
    else
    {
      *v13 = *((_QWORD *)this + 29);
      *((_DWORD *)this + 126) = 2;
      if ( (v15 & 8) == 0 )
      {
        *((_DWORD *)this + 172) = 1;
        return;
      }
      *((_DWORD *)this + 172) = 3;
    }
LABEL_30:
    v26 = *((_QWORD *)this + 89);
    *(_DWORD *)v26 = 0;
    v27 = *((_DWORD *)this + 56);
    *(_DWORD *)(v26 + 40) = v27;
    v28 = *((_DWORD *)this + 57);
    *(_DWORD *)(v26 + 44) = v28;
    *(_DWORD *)(v26 + 40) = v27 - *((_DWORD *)this + 173);
    *(_DWORD *)(v26 + 44) = v28 - *((_DWORD *)this + 174);
    *(_QWORD *)(v26 + 48) = *(_QWORD *)(v26 + 40);
    return;
  }
  if ( v3 == 1 )
  {
    *((_DWORD *)this + 126) = 0;
    v12 = 0;
    goto LABEL_20;
  }
  if ( v3 != 2 )
  {
    if ( v3 == 3 )
    {
      v4 = (LINER *)((char *)this + 48);
      *((_DWORD *)this + 172) = 4;
      v5 = (int *)((char *)this + 224);
      v6 = (struct _POINTFIX *)((char *)this + 224);
      if ( *((_DWORD *)this + 54) )
        v7 = BEZIER32::bNext(v4, v6);
      else
        v7 = BEZIER64::bNext(v4, v6);
      if ( !v7 )
      {
        *((_DWORD *)this + 126) = 0;
        v8 = *((_QWORD *)this + 89);
        *(_DWORD *)v8 = 0;
        v9 = *v5;
        *(_DWORD *)(v8 + 40) = *v5;
        v10 = *((_DWORD *)this + 57);
        *(_DWORD *)(v8 + 44) = v10;
        *(_DWORD *)(v8 + 40) = v9 - *((_DWORD *)this + 173);
        *(_DWORD *)(v8 + 44) = v10 - *((_DWORD *)this + 174);
        *(_QWORD *)(v8 + 48) = *(_QWORD *)(v8 + 40);
        *(_QWORD *)(*((_QWORD *)this + 89) + 48LL) = *((_QWORD *)this + 70);
        return;
      }
    }
    else if ( v3 == 4 )
    {
      *((_DWORD *)this + 172) = 9;
      return;
    }
    goto LABEL_30;
  }
  *((_DWORD *)this + 172) = (*((_DWORD *)this + 2) & 8) != 0 ? 2 : 8;
  *((_QWORD *)this + 89) = (char *)this + 240;
  if ( (unsigned int)READER::bNextFigure(this) )
  {
    READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
    *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
    v11 = 1;
  }
  else
  {
    v11 = 4;
  }
  *((_DWORD *)this + 126) = v11;
}
