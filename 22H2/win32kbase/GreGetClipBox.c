/*
 * XREFs of GreGetClipBox @ 0x1C003B540
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0070940 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00245D0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C003B748 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C003B780 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C003C4C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003C54C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C003CED8 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     bCvtPts1 @ 0x1C003E640 (bCvtPts1.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C013E4C4 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, int *a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // rax
  DC *v7; // r10
  struct REGION *v8; // rax
  DC *v9; // r10
  struct REGION *v10; // rsi
  int v11; // r8d
  int v12; // r9d
  int v13; // r11d
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // ecx
  float *v19; // [rsp+28h] [rbp-69h] BYREF
  int v20; // [rsp+30h] [rbp-61h]
  int v21; // [rsp+34h] [rbp-5Dh]
  DC *v22[6]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v23[32]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v24[2]; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v25[8]; // [rsp+98h] [rbp+7h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( v22[0] )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v24);
    v5 = 1;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v22, 1);
    if ( (v23[24] & 1) != 0 )
    {
      if ( DC::prgnRao(v22[0]) )
        v8 = DC::prgnRao(v7);
      else
        v8 = DC::prgnVisSnap(v7);
      v10 = v8;
      *(_OWORD *)a2 = *((_OWORD *)v8 + 6);
      v11 = a2[2];
      if ( *a2 >= v11 || (v12 = a2[1], v13 = a2[3], v12 >= v13) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v14 = (_DWORD *)((char *)v9 + 1024);
        if ( (*((_DWORD *)v9 + 10) & 1) == 0 )
          v14 = (_DWORD *)((char *)v9 + 1016);
        *a2 -= *v14;
        a2[2] = v11 - *v14;
        a2[1] = v12 - v14[1];
        a2[3] = v13 - v14[1];
        if ( a3 )
        {
          v15 = *((_QWORD *)v9 + 122);
          v20 = *(_DWORD *)(v15 + 208);
          v21 = *(_DWORD *)(v15 + 108) & 1;
          EXFORMOBJ::vInit(&v19, v22, 1026, 0x80000000);
          if ( v19 )
          {
            if ( ((_BYTE)v19[8] & 0x43) != 0x43 )
              bCvtPts1(v19, a2, 2LL);
            if ( v21 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v9 = v22[0];
        }
        if ( (*(_DWORD *)(*((_QWORD *)v9 + 122) + 108LL) & 1) != 0 )
        {
          v16 = *a2;
          v17 = a2[2];
          if ( *a2 > v17 )
          {
            *a2 = v17;
            a2[2] = v16;
          }
        }
      }
      if ( *((_DWORD *)v10 + 21) != 1 )
        v5 = (*((_DWORD *)v10 + 20) > 0x38u) + 2;
    }
    else
    {
      v6 = v22[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v6 + 62) )
        v5 = (*((_DWORD *)v6 + 9) & 0x5000) == 4096;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
    if ( v24[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v24);
    PopThreadGuardedObject(v25);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v5;
}
