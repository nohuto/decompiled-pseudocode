/*
 * XREFs of ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C020B09C
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C020F9AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z @ 0x1C016D756 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C020B268 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 */

__int64 __fastcall SizeRect(struct MOVESIZEDATA *a1, int a2, struct tagMONITOR *a3, unsigned int *a4)
{
  struct tagCHECKPOINT *v4; // r10
  __int16 v5; // edi^2
  int v8; // esi
  int v9; // edx
  __int64 v11; // r8
  __int64 v12; // rbp
  int v13; // r8d
  int v14; // r11d
  signed int v15; // r9d
  int v16; // r8d
  signed int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  struct tagMONITOR *v20; // r8
  int v21; // ecx
  __int64 v22; // rdi
  unsigned int v23; // r8d
  int v24; // r11d
  signed int v25; // r9d
  signed int v26; // eax
  int v27; // ecx
  __int64 v28; // [rsp+50h] [rbp+18h]

  v4 = 0LL;
  v5 = HIWORD(a2);
  v8 = (__int16)a2;
  if ( (*((_DWORD *)a1 + 50) & 0x400) != 0 )
  {
    v9 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
    LODWORD(v28) = v8 - *((_DWORD *)a1 + 42);
    HIDWORD(v28) = v9;
    if ( (_DWORD)v28 == *((_DWORD *)a1 + 66) && v9 == *((_DWORD *)a1 + 67) )
      return 0LL;
    v4 = (struct tagCHECKPOINT *)GetOrUpdateCheckPointIfNotPresent(a1);
    if ( !v4 )
      return 0LL;
    *((_QWORD *)a1 + 33) = v28;
  }
  v11 = dword_1C02F4590[*((int *)a1 + 44)];
  if ( (int)v11 >= 0 )
  {
    *((_DWORD *)a1 + v11 + 10) = v8;
    v12 = v11;
    v13 = v11 ^ 2;
    v14 = *((_DWORD *)a1 + v13 + 10);
    v15 = v14 - v8;
    v16 = v13 & 2;
    if ( !v16 )
      v15 = v8 - v14;
    v17 = *((_DWORD *)a1 + 26);
    if ( v15 < v17
      || (v17 = *((_DWORD *)a1 + 28), v15 > v17)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v17 = abs32(*((_DWORD *)a1 + v12 + 22) - v14), v15 > v17) )
    {
      v18 = -v17;
      if ( !v16 )
        v18 = v17;
      *((_DWORD *)a1 + v12 + 10) = v14 + v18;
    }
  }
  v19 = *((int *)a1 + 44);
  v20 = (struct tagMONITOR *)dword_1C02F4560[v19];
  if ( (int)v20 >= 0 )
  {
    v21 = v5;
    v22 = dword_1C02F4560[v19];
    *((_DWORD *)a1 + (_QWORD)v20 + 10) = v21;
    v23 = (unsigned int)v20 ^ 2;
    v24 = *((_DWORD *)a1 + (int)v23 + 10);
    v25 = v24 - v21;
    v20 = (struct tagMONITOR *)(v23 & 2);
    if ( !(_DWORD)v20 )
      v25 = v21 - v24;
    v26 = *((_DWORD *)a1 + 27);
    if ( v25 < v26
      || (v26 = *((_DWORD *)a1 + 29), v25 > v26)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v26 = abs32(*((_DWORD *)a1 + v22 + 22) - v24), v25 > v26) )
    {
      v27 = -v26;
      if ( !(_DWORD)v20 )
        v27 = v26;
      *((_DWORD *)a1 + v22 + 10) = v24 + v27;
    }
  }
  if ( (*((_DWORD *)a1 + 50) & 0x400) != 0 )
    SnapSizeRect(a1, v4, v20, a4);
  return 1LL;
}
