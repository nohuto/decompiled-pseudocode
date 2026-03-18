/*
 * XREFs of xxxSetScrollBar @ 0x1C00C64F8
 * Callers:
 *     NtUserSetScrollInfo @ 0x1C00C63A0 (NtUserSetScrollInfo.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     _InitPwSB @ 0x1C006884C (_InitPwSB.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00C67A0 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00C6AA0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240ACC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, unsigned int a2, __int64 a3, int a4)
{
  int v5; // esi
  BOOL v8; // r13d
  unsigned __int16 v9; // r12
  char v10; // r15
  __int64 inited; // rcx
  int v12; // ebp
  _DWORD *v14; // r8
  __int64 v15; // rcx
  char v16; // cl
  struct tagSBCALC *v18; // rdx
  __int64 v19; // rcx
  int v20; // [rsp+50h] [rbp-48h] BYREF
  int v21; // [rsp+54h] [rbp-44h]
  int v22; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+18h]
  int v24; // [rsp+B8h] [rbp+20h]

  v23 = a3;
  v5 = a4;
  v22 = 0;
  if ( a4 )
    v5 = IsVisible((__int64)a1);
  if ( a2 == 2 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout((unsigned __int64 *)a1, 0xE9u, v5, a3, 0, 0, 0LL, 1, 1);
  }
  v8 = a2 != 0;
  v9 = a2 != 0 ? 3616 : 3600;
  v10 = v9 & *(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL);
  v21 = v10 != 0;
  v20 = v21;
  if ( (*(_DWORD *)(a3 + 4) & 1) != 0 || v10 || *((_QWORD *)a1 + 19) )
  {
    inited = *((_QWORD *)a1 + 19);
    if ( inited )
    {
      v24 = 0;
    }
    else
    {
      v24 = 1;
      inited = InitPwSB((__int64)a1);
      if ( !inited )
        return 0LL;
    }
    if ( (unsigned int)SBSetParms(
                         (struct tagSBDATA *)(16LL * (a2 != 0) + 4 + inited),
                         (struct tagSCROLLINFO *)a3,
                         &v20,
                         &v22)
      || v24 )
    {
      SetOrClrWF(0, a1, v9, 1);
      v12 = v20;
      if ( v20 )
      {
        SetOrClrWF(1, a1, v9, 1);
      }
      else if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) == 0 )
      {
        v14 = (_DWORD *)*((_QWORD *)a1 + 19);
        if ( v14[1] == v14[2] && v14[5] == v14[6] )
        {
          RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v14);
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
          *((_QWORD *)a1 + 19) = 0LL;
        }
      }
      if ( (*(_DWORD *)(v23 + 4) & 8) != 0 )
      {
        if ( v10 )
        {
          SetOrClrWF(1, a1, v9, 1);
          xxxEnableWndSBArrows(a1, a2, v12 == 0 ? 3 : 0);
        }
      }
      else
      {
        v21 ^= v12;
        if ( v21 )
        {
          v15 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
          if ( v15 && a1 == *(struct tagWND **)(v15 + 8) )
            *(_DWORD *)v15 |= 8u;
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
          return (unsigned int)v22;
        }
      }
      if ( v12 && v5 )
      {
        v16 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
        if ( a2 ? v16 & 2 : v16 & 4 )
          goto LABEL_40;
      }
    }
    else if ( v10 && v5 )
    {
LABEL_40:
      xxxWindowEvent(0x800Eu, a1, v8 - 6, 0, 1);
      v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
      if ( !v19
        || a1 != *(struct tagWND **)(v19 + 8)
        || ((*(_DWORD *)v19 >> 1) & 1) != v8
        || *(__int64 (__usercall **)@<rax>(struct tagWND *@<rcx>, struct tagSBCALC *))(v19 + 48) != xxxTrackThumb )
      {
        xxxDrawThumb(a1, v18, v8);
      }
    }
    return (unsigned int)v22;
  }
  UserSetLastError(1447LL, 0LL);
  return 0LL;
}
