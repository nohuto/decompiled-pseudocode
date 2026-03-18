/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C0027800
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, signed int *a2)
{
  unsigned int v2; // ebx
  signed int v4; // esi
  signed int v5; // edi
  signed int v6; // ebp
  signed int v7; // r14d
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // r10d
  __int64 RectRgnIndirect; // rax
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  bool v16; // zf
  int *v17; // r9
  int v18; // eax
  _DWORD *v19; // r9
  int *v20; // r9
  int v21; // eax
  _DWORD *v22; // r9
  char *v23; // r9
  __int128 v24; // [rsp+20h] [rbp-58h]
  _QWORD v25[8]; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0;
  if ( *a1 )
  {
    v4 = a2[3];
    v5 = a2[2];
    v6 = a2[1];
    v7 = *a2;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v25, *a1, 0, 0);
    v8 = v25[0];
    if ( v25[0] )
    {
      *(_QWORD *)&v24 = __PAIR64__(v6, v7);
      v9 = v7;
      *((_QWORD *)&v24 + 1) = __PAIR64__(v4, v5);
      v10 = v6;
      if ( ((v7 & 0xF8000000) == 0 || (v7 & 0xF8000000) == -134217728)
        && (((v4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v6 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        if ( v7 > v5 )
        {
          v9 = v5;
          LODWORD(v24) = v5;
          v5 = v7;
          DWORD2(v24) = v7;
        }
        if ( v6 > v4 )
        {
          v10 = v4;
          DWORD1(v24) = v4;
          v4 = v6;
          HIDWORD(v24) = v6;
        }
        if ( v9 == v5 || v10 == v4 )
        {
          v15 = *(_QWORD *)(v25[0] + 88LL);
          *(_QWORD *)(v25[0] + 96LL) = 0LL;
          *(_QWORD *)(v8 + 104) = 0LL;
          *(_DWORD *)(v8 + 80) = 16;
          *(_DWORD *)(v8 + 84) = 1;
          *(_DWORD *)v15 = 0;
          v2 = 1;
          *(_DWORD *)(v15 + 4) = 0x80000000;
          *(_QWORD *)(v15 + 8) = 0x7FFFFFFFLL;
          *(_QWORD *)(v8 + 40) = v15 + 16;
        }
        else
        {
          v16 = *(_DWORD *)(v25[0] + 80LL) == 56;
          v17 = *(int **)(v25[0] + 88LL);
          *(_OWORD *)(v25[0] + 96LL) = v24;
          if ( v16 )
          {
            v18 = *v17;
            v2 = 1;
            v17[2] = v10;
            v19 = (int *)((char *)v17 + (unsigned int)(4 * v18 + 16));
            v19[1] = v10;
            v19[2] = v4;
            v19[3] = v9;
            v19[4] = v5;
            v20 = (_DWORD *)((char *)v19 + (unsigned int)(4 * *v19 + 16));
            v21 = *v20;
            v20[1] = v4;
            *(_QWORD *)(v8 + 40) = (char *)v20 + (unsigned int)(4 * v21 + 16);
          }
          else
          {
            *(_DWORD *)(v8 + 80) = 56;
            *(_DWORD *)(v8 + 84) = 3;
            *v17 = 0;
            v17[3] = 0;
            v17[1] = 0x80000000;
            v17[2] = v10;
            v22 = v17 + 4;
            *v22 = 2;
            v22[1] = v10;
            v22[2] = v4;
            v22[3] = v9;
            v22[4] = v5;
            v22[5] = 2;
            v23 = (char *)v22 + (unsigned int)(4 * *v22 + 16);
            *(_DWORD *)v23 = 0;
            *((_DWORD *)v23 + 1) = v4;
            v2 = 1;
            *((_QWORD *)v23 + 1) = 0x7FFFFFFFLL;
            *(_QWORD *)(v8 + 40) = v23 + 16;
          }
        }
      }
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v25);
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v13 = RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  LOBYTE(v14) = 4;
  HmgSetOwner(v13, 0LL, v14);
  return 1LL;
}
