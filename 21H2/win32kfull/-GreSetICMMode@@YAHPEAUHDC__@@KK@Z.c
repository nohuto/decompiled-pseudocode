/*
 * XREFs of ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C014C758
 * Callers:
 *     NtGdiSetIcmMode @ 0x1C014C740 (NtGdiSetIcmMode.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A69C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetICMMode(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v7; // rax
  unsigned int v8; // r8d
  int v9; // edx
  int v10; // r11d
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  signed __int32 v14; // edx
  __int64 v15; // rcx
  signed __int32 v16; // edx
  __int64 v17; // rax
  signed __int32 v18; // edx
  __int64 v19; // rcx
  signed __int32 v20; // edx
  __int128 v22; // [rsp+28h] [rbp-69h] BYREF
  __int64 v23; // [rsp+38h] [rbp-59h]
  int v24; // [rsp+40h] [rbp-51h]
  _QWORD v25[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v26[32]; // [rsp+58h] [rbp-39h] BYREF
  __int16 v27; // [rsp+78h] [rbp-19h]
  __int64 v28; // [rsp+80h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-9h]
  __int64 v30; // [rsp+90h] [rbp-1h]
  _QWORD v31[6]; // [rsp+98h] [rbp+7h] BYREF

  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  if ( !v31[0] )
  {
    v5 = 0;
    goto LABEL_45;
  }
  v25[1] = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
  v27 = 256;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v25[0] = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v22, (struct XDCOBJ *)v31, 0) )
    goto LABEL_42;
  v6 = *(_DWORD *)(v31[0] + 120LL);
  v7 = *(_QWORD *)(v31[0] + 48LL);
  v8 = v6 & 0xF0000000;
  v9 = (unsigned __int8)v6;
  v10 = v6 & 0xF00;
  if ( a2 == 1 )
  {
    if ( !a3 )
    {
      v10 = 0;
      v9 = v6 & 0xF0;
      goto LABEL_30;
    }
    if ( ((a3 - 256) & 0xFFFFFCFF) == 0 && a3 != 768 )
    {
      v10 = a3;
      v11 = (a3 >> 8) & 0xF;
      if ( (a3 & 0x200) != 0 )
      {
        if ( !v7 )
          goto LABEL_10;
        if ( (*(_DWORD *)(v7 + 1824) & 0x2000000) == 0 || *(_DWORD *)(v31[0] + 32LL) == 1 )
          v11 = 1;
      }
      v9 = v6 & 0xF0 | v11;
      goto LABEL_31;
    }
LABEL_10:
    v5 = 0;
    goto LABEL_42;
  }
  if ( a2 == 2 )
  {
    v9 = (unsigned __int8)v6 | 0x20;
    if ( !a3 )
      v9 = v6 & 0xDF;
    goto LABEL_31;
  }
  if ( (unsigned int)(a2 - 3) > 1 )
    goto LABEL_10;
  if ( ((a3 - 8) & 0xFFFFFFF7) == 0 )
  {
    v8 = 0x20000000;
    goto LABEL_30;
  }
  if ( a3 != 32 && a3 != 773 || !v7 || (*(_DWORD *)(v7 + 1824) & 0x4000000) == 0 )
    goto LABEL_10;
  v9 = (unsigned __int8)v6 | 0x10;
  v8 = 0x20000000;
  if ( *(_DWORD *)(v31[0] + 32LL) != 1 )
  {
    v9 = (unsigned __int8)v6;
    v8 = 0x10000000;
  }
LABEL_30:
  if ( a2 != 4 )
  {
LABEL_31:
    if ( (unsigned __int8)v6 != v9
      || (*(_DWORD *)(v31[0] + 120LL) & 0xF00) != v10
      || (*(_DWORD *)(v31[0] + 120LL) & 0xF0000000) != v8 )
    {
      *(_DWORD *)(v31[0] + 120LL) = v10 | v9 | v8;
      *(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 240LL) = v10 | v9 | v8 | *(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 240LL) & 0xF000;
      if ( (unsigned __int8)v6 != v9 )
      {
        v12 = *(_QWORD *)(v31[0] + 496LL);
        v13 = *(_QWORD *)(v31[0] + 88LL);
        if ( v13 )
        {
          v14 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
          v15 = *(_QWORD *)(v13 + 120);
          v16 = v14 + 1;
          *(_DWORD *)(v13 + 32) = v16;
          if ( v15 != v13 )
            *(_DWORD *)(v15 + 32) = v16;
          if ( v12 )
          {
            v17 = *(_QWORD *)(v12 + 128);
            if ( v17 )
            {
              v18 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
              v19 = *(_QWORD *)(v17 + 120);
              v20 = v18 + 1;
              *(_DWORD *)(v17 + 32) = v20;
              if ( v19 != v17 )
                *(_DWORD *)(v19 + 32) = v20;
            }
          }
        }
      }
    }
  }
LABEL_42:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
  if ( v25[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v25);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
LABEL_45:
  DCOBJ::~DCOBJ((DCOBJ *)v31);
  return v5;
}
