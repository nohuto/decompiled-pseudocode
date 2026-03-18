/*
 * XREFs of GreGetClipBox @ 0x1C001BC60
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0019D34 (bCvtPts1.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C001B6EC (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BAA4 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C001BE28 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001BE60 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C001DADC (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C001DB44 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0031540 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, signed int *a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // r8d
  DC *v8; // r10
  struct REGION *v9; // rax
  DC *v10; // r10
  struct REGION *v11; // rsi
  signed int v12; // r9d
  signed int v13; // r11d
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  DC *v17; // rax
  unsigned int v18; // eax
  signed int v19; // ecx
  unsigned __int64 v20; // [rsp+28h] [rbp-69h] BYREF
  int v21; // [rsp+30h] [rbp-61h]
  int v22; // [rsp+34h] [rbp-5Dh]
  DC *v23[6]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v24[32]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v25[80]; // [rsp+88h] [rbp-9h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( v23[0] )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v25);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v24, (struct XDCOBJ *)v23, 1);
    if ( (v24[24] & 1) != 0 )
    {
      if ( DC::prgnRao(v23[0]) )
        v9 = DC::prgnRao(v8);
      else
        v9 = DC::prgnVisSnap(v8);
      v11 = v9;
      *(_OWORD *)a2 = *((_OWORD *)v9 + 6);
      v6 = (unsigned int)*a2;
      v7 = a2[2];
      if ( (int)v6 >= v7 || (v12 = a2[1], v13 = a2[3], v12 >= v13) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v14 = (_DWORD *)((char *)v10 + 1024);
        if ( (*((_DWORD *)v10 + 10) & 1) == 0 )
          v14 = (_DWORD *)((char *)v10 + 1016);
        v6 = (unsigned int)(v6 - *v14);
        *a2 = v6;
        v7 -= *v14;
        a2[2] = v7;
        a2[1] = v12 - v14[1];
        a2[3] = v13 - v14[1];
        if ( a3 )
        {
          v15 = *((_QWORD *)v10 + 122);
          v21 = *(_DWORD *)(v15 + 208);
          v22 = *(_DWORD *)(v15 + 108) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v20, (struct XDCOBJ *)v23, 0x402u, 0x80000000);
          if ( v20 )
          {
            if ( (*(_BYTE *)(v20 + 32) & 0x43) != 0x43 )
              bCvtPts1(v20, a2, 2LL);
            if ( v22 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v10 = v23[0];
        }
        if ( (*(_DWORD *)(*((_QWORD *)v10 + 122) + 108LL) & 1) != 0 )
        {
          v18 = *a2;
          v19 = a2[2];
          if ( *a2 > v19 )
          {
            *a2 = v19;
            a2[2] = v18;
          }
        }
      }
      if ( *((_DWORD *)v11 + 21) != 1 )
      {
        LOBYTE(v5) = *((_DWORD *)v11 + 20) > 0x38u;
        v5 += 2;
LABEL_19:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24, v6, v7);
        DLODCOBJ::~DLODCOBJ((DLODCOBJ *)v25);
        goto LABEL_20;
      }
    }
    else
    {
      v17 = v23[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v17 + 62) && (*((_DWORD *)v17 + 9) & 0x5000) != 0x1000 )
        goto LABEL_19;
    }
    v5 = 1;
    goto LABEL_19;
  }
LABEL_20:
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return v5;
}
