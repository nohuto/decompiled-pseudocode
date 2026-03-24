/*
 * XREFs of ?vNextPoint@LINER@@AEAAXXZ @ 0x1C01405EC
 * Callers:
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C014050C (-vNextEvent@LINER@@QEAAXXZ.c)
 * Callees:
 *     ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1C013F194 (-vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 *     ?bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z @ 0x1C0140954 (-bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z.c)
 *     ?bNextFigure@READER@@IEAAHXZ @ 0x1C0141438 (-bNextFigure@READER@@IEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall LINER::vNextPoint(LINER *this)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // esi
  int v5; // eax
  __int64 *v6; // rbx
  int Point; // eax
  int v8; // ecx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ecx
  BEZIER32 *v12; // rcx
  int *v13; // rbx
  struct _POINTFIX *v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  struct _RECTFX *v19; // r8
  struct _POINTFIX *v20; // rdx
  BEZIER32 *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  bool v24; // zf
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // xmm1_8
  struct _POINTFIX v29; // [rsp+20h] [rbp-30h] BYREF
  __int64 v30; // [rsp+28h] [rbp-28h]
  struct _POINTFIX v31; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTFIX v32; // [rsp+38h] [rbp-18h] BYREF

  v2 = 328LL;
  v3 = *((_DWORD *)this + 126);
  if ( *((LINER **)this + 88) == (LINER *)((char *)this + 328) )
    v2 = 416LL;
  *((_QWORD *)this + 89) = (char *)this + v2;
  if ( v3 < 0 )
    goto LABEL_9;
  v4 = 1;
  if ( v3 > 1 )
  {
    switch ( v3 )
    {
      case 2:
        *((_DWORD *)this + 172) = (*((_DWORD *)this + 2) & 8) != 0 ? 2 : 8;
        *((_QWORD *)this + 89) = (char *)this + 240;
        if ( (unsigned int)READER::bNextFigure(this) )
        {
          READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
          *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
        }
        else
        {
          v4 = 4;
        }
        *((_DWORD *)this + 126) = v4;
        break;
      case 3:
        v12 = (LINER *)((char *)this + 48);
        *((_DWORD *)this + 172) = 4;
        v13 = (int *)((char *)this + 224);
        v14 = (struct _POINTFIX *)((char *)this + 224);
        if ( *((_DWORD *)this + 54) )
          v15 = BEZIER32::bNext(v12, v14);
        else
          v15 = BEZIER64::bNext(v12, v14);
        if ( v15 )
          goto LABEL_9;
        *((_DWORD *)this + 126) = 0;
        v16 = *((_QWORD *)this + 89);
        *(_DWORD *)v16 = 0;
        v17 = *v13;
        *(_DWORD *)(v16 + 40) = *v13;
        v18 = *((_DWORD *)this + 57);
        *(_DWORD *)(v16 + 44) = v18;
        *(_DWORD *)(v16 + 40) = v17 - *((_DWORD *)this + 173);
        *(_DWORD *)(v16 + 44) = v18 - *((_DWORD *)this + 174);
        *(_QWORD *)(v16 + 48) = *(_QWORD *)(v16 + 40);
        *(_QWORD *)(*((_QWORD *)this + 89) + 48LL) = *((_QWORD *)this + 70);
        break;
      case 4:
        *((_DWORD *)this + 172) = 9;
        break;
      default:
        goto LABEL_9;
    }
  }
  else
  {
    if ( v3 )
    {
      *((_DWORD *)this + 126) = 0;
      v5 = 0;
    }
    else
    {
      v5 = 3;
    }
    v6 = (__int64 *)((char *)this + 224);
    *((_DWORD *)this + 172) = v5;
    Point = READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
    v8 = *((_DWORD *)this + 2);
    if ( Point )
    {
      if ( (v8 & 0x10) == 0 )
      {
LABEL_9:
        v9 = *((_QWORD *)this + 89);
        *(_DWORD *)v9 = 0;
        v10 = *((_DWORD *)this + 56);
        *(_DWORD *)(v9 + 40) = v10;
        v11 = *((_DWORD *)this + 57);
        *(_DWORD *)(v9 + 44) = v11;
        *(_DWORD *)(v9 + 40) = v10 - *((_DWORD *)this + 173);
        *(_DWORD *)(v9 + 44) = v11 - *((_DWORD *)this + 174);
        *(_QWORD *)(v9 + 48) = *(_QWORD *)(v9 + 40);
        return;
      }
      v29 = *(struct _POINTFIX *)((char *)this + 692);
      v30 = *v6;
      READER::bNextPoint(this, &v31);
      READER::bNextPoint(this, &v32);
      BEZIER::vInit((LINER *)((char *)this + 48), &v29, v19, gpeqErrorLow);
      v20 = (struct _POINTFIX *)((char *)this + 224);
      v21 = (LINER *)((char *)this + 48);
      if ( *((_DWORD *)this + 54) )
        v22 = BEZIER32::bNext(v21, v20);
      else
        v22 = BEZIER64::bNext(v21, v20);
      v23 = *((_QWORD *)this + 89);
      *(_DWORD *)v23 = 0;
      v24 = v22 == 0;
      v25 = *((_DWORD *)this + 56);
      *(_DWORD *)(v23 + 40) = v25;
      v26 = *((_DWORD *)this + 57);
      *(_DWORD *)(v23 + 44) = v26;
      *(_DWORD *)(v23 + 40) = v25 - *((_DWORD *)this + 173);
      *(_DWORD *)(v23 + 44) = v26 - *((_DWORD *)this + 174);
      *(_QWORD *)(v23 + 48) = *(_QWORD *)(v23 + 40);
      if ( v24 )
      {
        *((_DWORD *)this + 126) = 0;
      }
      else
      {
        v27 = *((_QWORD *)this + 89);
        *(_OWORD *)((char *)this + 600) = *(_OWORD *)v27;
        *(_OWORD *)((char *)this + 616) = *(_OWORD *)(v27 + 16);
        *(_OWORD *)((char *)this + 632) = *(_OWORD *)(v27 + 32);
        *(_OWORD *)((char *)this + 648) = *(_OWORD *)(v27 + 48);
        *(_OWORD *)((char *)this + 664) = *(_OWORD *)(v27 + 64);
        v28 = *(_QWORD *)(v27 + 80);
        LODWORD(v27) = v30 - v29.x;
        *((_QWORD *)this + 85) = v28;
        *((_DWORD *)this + 128) = 0;
        *((_DWORD *)this + 162) = v27;
        *((_DWORD *)this + 163) = HIDWORD(v30) - v29.y;
        *((_DWORD *)this + 138) = v32.x - v31.x;
        *((_DWORD *)this + 139) = v32.y - v31.y;
        *((_QWORD *)this + 70) = *((_QWORD *)this + 69);
        *((_QWORD *)this + 89) = (char *)this + 600;
        *((_DWORD *)this + 126) = 3;
      }
    }
    else
    {
      *v6 = *((_QWORD *)this + 29);
      *((_DWORD *)this + 126) = 2;
      if ( (v8 & 8) != 0 )
      {
        *((_DWORD *)this + 172) = 3;
        goto LABEL_9;
      }
      *((_DWORD *)this + 172) = 1;
    }
  }
}
