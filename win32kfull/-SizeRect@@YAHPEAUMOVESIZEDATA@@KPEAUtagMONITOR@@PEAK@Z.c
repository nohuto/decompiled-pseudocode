/*
 * XREFs of ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01EBAF4
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F27AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01EBD54 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 */

__int64 __fastcall SizeRect(struct MOVESIZEDATA *a1, unsigned int a2, struct tagMONITOR *a3, unsigned int *a4)
{
  int v4; // esi
  unsigned int v6; // edi
  struct tagCHECKPOINT *Prop; // r11
  int v9; // eax
  int v10; // ecx
  char v11; // r8
  __int64 v13; // r8
  __int64 v14; // rbp
  int v15; // r8d
  int v16; // r10d
  signed int v17; // r9d
  int v18; // r8d
  signed int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  struct tagMONITOR *v22; // r8
  int v23; // ecx
  __int64 v24; // rdi
  unsigned int v25; // r8d
  int v26; // r10d
  signed int v27; // r9d
  signed int v28; // eax
  int v29; // ecx
  unsigned __int64 v30; // [rsp+80h] [rbp+18h]

  v4 = (__int16)a2;
  v6 = HIWORD(a2);
  Prop = 0LL;
  if ( (*((_DWORD *)a1 + 50) & 0x400) != 0 )
  {
    v9 = (__int16)a2 - *((_DWORD *)a1 + 42);
    v10 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
    v30 = __PAIR64__(v10, v9);
    if ( v9 == *((_DWORD *)a1 + 65) && v10 == *((_DWORD *)a1 + 66) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v11 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v11 = 0;
      }
      if ( (_BYTE)a2 || v11 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          v11,
          39,
          5,
          1,
          39,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      return 0LL;
    }
    Prop = (struct tagCHECKPOINT *)GetProp(
                                     *((_QWORD *)a1 + 2),
                                     *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1),
                                     1u);
    if ( !Prop )
      return 0LL;
    *(_QWORD *)((char *)a1 + 260) = v30;
  }
  v13 = dword_1C03226F8[*((int *)a1 + 44)];
  if ( (int)v13 >= 0 )
  {
    *((_DWORD *)a1 + v13 + 10) = v4;
    v14 = v13;
    v15 = v13 ^ 2;
    v16 = *((_DWORD *)a1 + v15 + 10);
    v17 = v16 - v4;
    v18 = v15 & 2;
    if ( !v18 )
      v17 = v4 - v16;
    v19 = *((_DWORD *)a1 + 26);
    if ( v17 < v19
      || (v19 = *((_DWORD *)a1 + 28), v17 > v19)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v19 = abs32(*((_DWORD *)a1 + v14 + 22) - v16), v17 > v19) )
    {
      v20 = -v19;
      if ( !v18 )
        v20 = v19;
      *((_DWORD *)a1 + v14 + 10) = v16 + v20;
    }
  }
  v21 = *((int *)a1 + 44);
  v22 = (struct tagMONITOR *)dword_1C0322688[v21];
  if ( (int)v22 >= 0 )
  {
    v23 = (__int16)v6;
    v24 = dword_1C0322688[v21];
    *((_DWORD *)a1 + (_QWORD)v22 + 10) = v23;
    v25 = (unsigned int)v22 ^ 2;
    v26 = *((_DWORD *)a1 + (int)v25 + 10);
    v27 = v26 - v23;
    v22 = (struct tagMONITOR *)(v25 & 2);
    if ( !(_DWORD)v22 )
      v27 = v23 - v26;
    v28 = *((_DWORD *)a1 + 27);
    if ( v27 < v28
      || (v28 = *((_DWORD *)a1 + 29), v27 > v28)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v28 = abs32(*((_DWORD *)a1 + v24 + 22) - v26), v27 > v28) )
    {
      v29 = -v28;
      if ( !(_DWORD)v22 )
        v29 = v28;
      *((_DWORD *)a1 + v24 + 10) = v26 + v29;
    }
  }
  if ( (*((_DWORD *)a1 + 50) & 0x400) != 0 )
    SnapSizeRect(a1, Prop, v22, a4);
  return 1LL;
}
