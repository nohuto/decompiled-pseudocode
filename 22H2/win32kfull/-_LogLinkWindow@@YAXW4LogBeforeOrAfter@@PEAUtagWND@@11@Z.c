/*
 * XREFs of ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0222A1C
 * Callers:
 *     LinkWindow @ 0x1C006FC60 (LinkWindow.c)
 *     UnlinkWindow @ 0x1C007E8D8 (UnlinkWindow.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

int __fastcall _LogLinkWindow(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  int v8; // r10d
  __int64 v9; // r11
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = &retaddr;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    LODWORD(v4) = IsTopLevelWindow((__int64)a2);
    if ( (_DWORD)v4 )
    {
      if ( !v8 )
        ++giLinkWindowLogIndex;
      v10 = giLinkWindowLogIndex;
      v11 = giLinkWindowLogIndex % guiLinkWindowLogSize;
      v12 = v9 + 136 * v11;
      if ( v8 )
      {
        *(_QWORD *)(v12 + 48) = a2[12];
        *(_QWORD *)(v12 + 56) = a2[11];
        v4 = (_UNKNOWN **)a2[15];
        *(_QWORD *)(v12 + 72) = v4;
      }
      else
      {
        memset((void *)(v9 + 136 * v11), 0, 0x88uLL);
        *(_DWORD *)v12 = v10;
        *(_QWORD *)(v12 + 8) = a2;
        *(_QWORD *)(v12 + 16) = a3;
        *(_QWORD *)(v12 + 24) = a4;
        *(_QWORD *)(v12 + 32) = a2[12];
        *(_QWORD *)(v12 + 40) = a2[11];
        *(_QWORD *)(v12 + 80) = gptiCurrent;
        *(_QWORD *)(v12 + 64) = a2[15];
        LODWORD(v4) = RtlWalkFrameChain((PVOID *)(v12 + 88), 6u, 0x100u);
      }
    }
  }
  return (int)v4;
}
