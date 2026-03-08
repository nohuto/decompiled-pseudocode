/*
 * XREFs of ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0007488
 * Callers:
 *     NtGdiSetIcmMode @ 0x1C0007470 (NtGdiSetIcmMode.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00D922C (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetICMMode(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v7; // rax
  unsigned int v8; // r10d
  int v9; // edx
  int v10; // r8d
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // edx
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  int v18; // [rsp+48h] [rbp-38h]
  _QWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v20; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  __int64 v23; // [rsp+78h] [rbp-8h]
  __int64 v24; // [rsp+C8h] [rbp+48h] BYREF

  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( !v15[0] )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v15);
    return 0LL;
  }
  v19[1] = 0LL;
  v16 = 0LL;
  v20 = 256;
  v17 = 0LL;
  v18 = 0;
  v19[0] = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)v15, 0) )
    goto LABEL_13;
  v6 = *(_DWORD *)(v15[0] + 120LL);
  v7 = *(_QWORD *)(v15[0] + 48LL);
  v8 = v6 & 0xF0000000;
  v9 = (unsigned __int8)v6;
  v10 = v6 & 0xF00;
  if ( a2 == 1 )
  {
    if ( !a3 )
    {
      v10 = 0;
      v9 = v6 & 0xF0;
LABEL_10:
      if ( (unsigned __int8)v6 != v9
        || (*(_DWORD *)(v15[0] + 120LL) & 0xF0000000) != v8
        || (*(_DWORD *)(v15[0] + 120LL) & 0xF00) != v10 )
      {
        *(_DWORD *)(v15[0] + 120LL) = v10 | v9 | v8;
        *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL) + 240LL) = v10 | v9 | v8 | *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL)
                                                                                     + 240LL) & 0xF000;
        if ( (unsigned __int8)v6 != v9 )
        {
          v12 = *(_QWORD *)(v15[0] + 496LL);
          v24 = *(_QWORD *)(v15[0] + 88LL);
          if ( v24 )
          {
            XEPALOBJ::vUpdateTime((XEPALOBJ *)&v24);
            if ( v12 )
            {
              v24 = *(_QWORD *)(v12 + 128);
              if ( v24 )
                XEPALOBJ::vUpdateTime((XEPALOBJ *)&v24);
            }
          }
        }
      }
      goto LABEL_13;
    }
    if ( a3 != 256 && a3 != 512 && a3 != 1024 )
      goto LABEL_25;
    v10 = a3;
    v14 = (a3 >> 8) & 0xF;
    if ( (a3 & 0x200) != 0 )
    {
      if ( !v7 )
        goto LABEL_25;
      if ( (*(_DWORD *)(v7 + 1792) & 0x2000000) == 0 || *(_DWORD *)(v15[0] + 32LL) == 1 )
        v14 = 1;
    }
    v9 = v6 & 0xF0 | v14;
LABEL_8:
    if ( !v5 )
      goto LABEL_13;
    goto LABEL_9;
  }
  if ( a2 == 2 )
  {
    v9 = (unsigned __int8)v6 | 0x20;
    if ( !a3 )
      v9 = v6 & 0xDF;
    goto LABEL_10;
  }
  if ( (unsigned int)(a2 - 3) > 1 )
    goto LABEL_25;
  if ( a3 == 16 || a3 == 8 )
  {
    v8 = 0x20000000;
    goto LABEL_8;
  }
  if ( a3 != 32 && a3 != 773 )
  {
LABEL_25:
    v5 = 0;
    goto LABEL_13;
  }
  if ( !v7 || (v8 = 0x10000000, (*(_DWORD *)(v7 + 1792) & 0x4000000) == 0) )
  {
    v5 = 0;
    goto LABEL_8;
  }
  v9 = (unsigned __int8)v6 | 0x10;
  v13 = 0x20000000;
  if ( *(_DWORD *)(v15[0] + 32LL) != 1 )
  {
    v13 = 0x10000000;
    v9 = (unsigned __int8)v6;
  }
  v8 = v13;
LABEL_9:
  if ( a2 != 4 )
    goto LABEL_10;
LABEL_13:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
  if ( v19[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v19);
  if ( v15[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  return v5;
}
