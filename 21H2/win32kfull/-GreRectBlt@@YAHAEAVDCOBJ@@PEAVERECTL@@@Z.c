/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C01388F0
 * Callers:
 *     GreRectangle @ 0x1C0136C70 (GreRectangle.c)
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C002C648 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00894E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0138B80 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // edx
  int v12; // r8d
  int v13; // r8d
  __int128 v14; // xmm0
  _BYTE v16[40]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h]
  char v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+7Ch] [rbp-8Ch]
  int v20; // [rsp+A0h] [rbp-68h]
  char v21; // [rsp+B8h] [rbp-50h]
  _BYTE v22[56]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v23[112]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v24[32]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v25; // [rsp+188h] [rbp+80h]
  __int64 v26; // [rsp+190h] [rbp+88h]
  __int64 v27; // [rsp+1A8h] [rbp+A0h]
  __int64 v28; // [rsp+1B8h] [rbp+B0h]
  __int64 v29; // [rsp+1C8h] [rbp+C0h]
  __int128 v30; // [rsp+200h] [rbp+F8h]
  __int64 v31; // [rsp+238h] [rbp+130h]
  int v32; // [rsp+240h] [rbp+138h]
  int v33; // [rsp+244h] [rbp+13Ch]

  v2 = *(_QWORD *)a1;
  v28 = 0LL;
  v33 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 976) + 212LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v17 = 0LL;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v22);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v16, (DC **)a1);
  v7 = 1;
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v21 & 1) == 0 )
    {
LABEL_12:
      v7 = 0;
      goto LABEL_21;
    }
    v8 = *(_QWORD *)a1;
    v27 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v25 = *(_QWORD *)(v27 + 128);
    v26 = *(_QWORD *)(v8 + 88);
    if ( (v6 & 0xE8) != 0 )
    {
      v29 = v8 + 1200;
      v9 = *(_QWORD *)(v8 + 976);
      if ( (*(_DWORD *)(v9 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v8, *(_QWORD *)(v9 + 160));
        v8 = *(_QWORD *)a1;
      }
      v10 = *(_QWORD *)(v8 + 976);
      v11 = *(_DWORD *)(v10 + 152);
      if ( (v11 & 1) != 0 || (*(_DWORD *)(v8 + 316) & 1) != 0 )
      {
        *(_DWORD *)(v10 + 152) = v11 & 0xFFFFFFFE;
        *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v29, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v26, v25, v27, 1);
      }
      if ( (*(_DWORD *)(v29 + 120) & 0x100) != 0 )
        goto LABEL_12;
      v8 = *(_QWORD *)a1;
      v31 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
      if ( (*(_DWORD *)(v29 + 120) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v8 + 976) + 213LL) == 1 )
      {
        v12 = 43520;
LABEL_18:
        v13 = v5 | v12;
        if ( (*(_DWORD *)(v8 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v14 = *(_OWORD *)a2;
        v32 = v13;
        v30 = v14;
        v7 = BLTRECORD::bBitBlt((BLTRECORD *)v24, (DC **)a1, a1, v6);
        goto LABEL_21;
      }
    }
    else
    {
      v29 = 0LL;
    }
    v12 = (_DWORD)v5 << 8;
    goto LABEL_18;
  }
LABEL_21:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v16);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v24);
  return v7;
}
