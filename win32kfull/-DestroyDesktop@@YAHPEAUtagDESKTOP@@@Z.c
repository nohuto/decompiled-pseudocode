/*
 * XREFs of ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0094B64
 * Callers:
 *     UnmapDesktop @ 0x1C003CEA0 (UnmapDesktop.c)
 * Callees:
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1C0095610 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     _PostThreadMessage @ 0x1C009575C (_PostThreadMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qS @ 0x1C00957C8 (WPP_RECORDER_AND_TRACE_SF_qS.c)
 *     UnpackAffectedThreadList @ 0x1C00CE1E4 (UnpackAffectedThreadList.c)
 */

__int64 __fastcall DestroyDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  bool v8; // bl
  bool v9; // di
  int v10; // r8d
  int v11; // edx
  void *v13; // rcx

  v2 = *((_QWORD *)a1 + 5);
  if ( (*((_DWORD *)a1 + 12) & 8) != 0 )
    return 0LL;
  v3 = (_QWORD *)*((_QWORD *)a1 + 30);
  if ( v3 )
  {
    v13 = (void *)v3[1];
    if ( v13 )
    {
      Win32FreePool(v13);
      v3[1] = 0LL;
    }
    Win32FreePool(v3);
    *((_QWORD *)a1 + 30) = 0LL;
  }
  if ( a1 == (struct tagDESKTOP *)gpdeskRecalcQueueAttach )
    UnpackAffectedThreadList();
  v4 = v2 + 16;
  v5 = *(_QWORD *)(v2 + 16);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v2 + 16);
    do
    {
      v5 = v6;
      if ( (struct tagDESKTOP *)v6 == a1 )
        break;
      v4 = v6 + 32;
      v5 = *(_QWORD *)(v6 + 32);
      v6 = v5;
    }
    while ( v5 );
  }
  if ( v5 )
  {
    LockObjectAssignment(v4, *((_QWORD *)a1 + 4));
    UnlockObjectAssignment((char *)a1 + 32);
  }
  v7 = *(_QWORD *)(v2 + 56);
  LockObjectAssignment((char *)a1 + 32, *(_QWORD *)(v7 + 48));
  LockObjectAssignment(v7 + 48, a1);
  PostThreadMessage(*(_QWORD *)(v7 + 16), 796LL, 2LL);
  *((_DWORD *)a1 + 12) |= 8u;
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    GetDesktopName(a1);
    LOBYTE(v10) = v9;
    LOBYTE(v11) = v8;
    WPP_RECORDER_AND_TRACE_SF_qS(WPP_GLOBAL_Control->AttachedDevice, v11, v10, (_DWORD)gFullLog);
  }
  return 1LL;
}
