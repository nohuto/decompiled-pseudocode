/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0145E54
 * Callers:
 *     GreRectangle @ 0x1C01440E0 (GreRectangle.c)
 * Callees:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AFC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C00B5954 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00B6E98 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00B7CA8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C01460E4 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // edx
  int v13; // r8d
  int v14; // r8d
  __int128 v15; // xmm0
  __int64 v16; // rdx
  _BYTE v18[40]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h]
  char v20; // [rsp+78h] [rbp-90h]
  int v21; // [rsp+7Ch] [rbp-8Ch]
  int v22; // [rsp+A0h] [rbp-68h]
  char v23; // [rsp+B8h] [rbp-50h]
  _BYTE v24[56]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v25[112]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v26[32]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v27; // [rsp+188h] [rbp+80h]
  __int64 v28; // [rsp+190h] [rbp+88h]
  __int64 v29; // [rsp+1A8h] [rbp+A0h]
  __int64 v30; // [rsp+1B8h] [rbp+B0h]
  __int64 v31; // [rsp+1C8h] [rbp+C0h]
  __int128 v32; // [rsp+200h] [rbp+F8h]
  __int64 v33; // [rsp+238h] [rbp+130h]
  int v34; // [rsp+240h] [rbp+138h]
  int v35; // [rsp+244h] [rbp+13Ch]

  v2 = *(_QWORD *)a1;
  v30 = 0LL;
  v35 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 976) + 212LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v19 = 0LL;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v24);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v25);
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v18, (DC **)a1);
  v9 = 1;
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v23 & 1) == 0 )
    {
LABEL_12:
      v9 = 0;
      goto LABEL_21;
    }
    v10 = *(_QWORD *)a1;
    v29 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v27 = *(_QWORD *)(v29 + 128);
    v28 = *(_QWORD *)(v10 + 88);
    if ( (v6 & 0xE8) != 0 )
    {
      v31 = v10 + 1208;
      v11 = *(_QWORD *)(v10 + 976);
      if ( (*(_DWORD *)(v11 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v10, *(_QWORD *)(v11 + 160));
        v10 = *(_QWORD *)a1;
      }
      v8 = *(_QWORD *)(v10 + 976);
      v12 = *(_DWORD *)(v8 + 152);
      if ( (v12 & 1) != 0 || (*(_DWORD *)(v10 + 316) & 1) != 0 )
      {
        *(_DWORD *)(v8 + 152) = v12 & 0xFFFFFFFE;
        *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v31, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v28, v27, v29, 1);
      }
      v7 = v31;
      if ( (*(_DWORD *)(v31 + 120) & 0x100) != 0 )
        goto LABEL_12;
      v10 = *(_QWORD *)a1;
      v33 = *(_QWORD *)(*(_QWORD *)a1 + 1200LL);
      if ( (*(_DWORD *)(v31 + 120) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v10 + 976) + 213LL) == 1 )
      {
        v13 = 43520;
LABEL_18:
        v14 = v5 | v13;
        if ( (*(_DWORD *)(v10 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v15 = *(_OWORD *)a2;
        v34 = v14;
        v32 = v15;
        v9 = BLTRECORD::bBitBlt((BLTRECORD *)v26, (DC **)a1, a1, v6);
        goto LABEL_21;
      }
    }
    else
    {
      v31 = 0LL;
    }
    v13 = (_DWORD)v5 << 8;
    goto LABEL_18;
  }
LABEL_21:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v18, v7, (SURFACE **)v8);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v26, v16);
  return v9;
}
