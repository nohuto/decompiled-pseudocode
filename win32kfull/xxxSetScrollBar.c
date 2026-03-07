__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, unsigned int a2, __int64 a3, int a4)
{
  int v4; // ebp
  int v5; // esi
  BOOL v9; // r15d
  char v10; // r12
  __int64 inited; // rcx
  int v12; // ebp
  bool v14; // zf
  _DWORD *v15; // r8
  __int64 v16; // rcx
  char v17; // cl
  int v18; // ecx
  struct tagSBCALC *v19; // rdx
  __int64 v20; // rcx
  int v21; // [rsp+50h] [rbp-48h] BYREF
  int v22; // [rsp+54h] [rbp-44h]
  unsigned __int16 v23; // [rsp+A8h] [rbp+10h]
  int v24; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a4;
  v24 = 0;
  if ( a4 )
    v5 = IsVisible(a1);
  if ( a2 != 2 )
  {
    v9 = a2 != 0;
    v23 = a2 != 0 ? 3616 : 3600;
    v10 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & (a2 != 0 ? 32 : 16);
    v22 = v10 != 0;
    v21 = v22;
    if ( (*(_DWORD *)(a3 + 4) & 1) == 0 && !v10 && !*((_QWORD *)a1 + 19) )
    {
      UserSetLastError(1447);
      return 0LL;
    }
    inited = *((_QWORD *)a1 + 19);
    if ( !inited )
    {
      inited = InitPwSB(a1);
      if ( !inited )
        return 0LL;
      v4 = 1;
    }
    if ( (unsigned int)SBSetParms(
                         (struct tagSBDATA *)(16LL * (a2 != 0) + 4 + inited),
                         (struct tagSCROLLINFO *)a3,
                         &v21,
                         &v24)
      || v4 )
    {
      SetOrClrWF(0, (__int64 *)a1, v23, 1);
      v12 = v21;
      if ( v21 )
      {
        SetOrClrWF(1, (__int64 *)a1, v23, 1);
      }
      else if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) == 0 )
      {
        v15 = (_DWORD *)*((_QWORD *)a1 + 19);
        if ( v15[1] == v15[2] && v15[5] == v15[6] )
        {
          RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v15);
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
          *((_QWORD *)a1 + 19) = 0LL;
        }
      }
      if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
      {
        if ( v10 )
        {
          SetOrClrWF(1, (__int64 *)a1, v23, 1);
          xxxEnableWndSBArrows(a1, a2, v12 == 0 ? 3 : 0);
        }
      }
      else
      {
        v22 ^= v12;
        if ( v22 )
        {
          v16 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
          if ( v16 && a1 == *(struct tagWND **)(v16 + 8) )
            *(_DWORD *)v16 |= 8u;
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
          return (unsigned int)v24;
        }
      }
      if ( v12 && v5 )
      {
        v17 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
        if ( a2 )
          v18 = v17 & 2;
        else
          v18 = v17 & 4;
        v14 = v18 == 0;
        goto LABEL_17;
      }
    }
    else if ( v10 )
    {
      v14 = v5 == 0;
LABEL_17:
      if ( !v14 )
      {
        xxxWindowEvent(0x800Eu, a1, v9 - 6, 0, 1);
        v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
        if ( !v20
          || a1 != *(struct tagWND **)(v20 + 8)
          || ((*(_DWORD *)v20 >> 1) & 1) != v9
          || *(__int64 (__usercall **)@<rax>(struct tagWND *@<rcx>, struct tagSBCALC *))(v20 + 48) != xxxTrackThumb )
        {
          xxxDrawThumb(a1, v19, v9);
        }
      }
    }
    return (unsigned int)v24;
  }
  _InterlockedAdd(&glSendMessage, 1u);
  return xxxSendTransformableMessageTimeout(a1, 0xE9u, v5, (__int128 *)a3, 0, 0, 0LL, 1, 1);
}
