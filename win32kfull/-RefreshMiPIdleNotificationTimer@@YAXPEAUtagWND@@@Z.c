/*
 * XREFs of ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01439F8
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01433FC (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006384 (_SetSystemTimer.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 */

void __fastcall RefreshMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rcx

  v1 = *((_QWORD *)a1 + 2);
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 1352) + 8LL);
  if ( *(_QWORD *)a1 != v4 )
  {
    v5 = (void *)ValidateHwnd(v4);
    if ( v5 )
      FindTimer(v5, (void *)0xFFF3, 2u, 1, 0LL);
    *(_QWORD *)(*(_QWORD *)(v1 + 1352) + 8LL) = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)(v1 + 1352) + 16LL) = v3 - 101;
  }
  v6 = *(_QWORD *)(v1 + 1352);
  if ( (unsigned int)(v3 - *(_DWORD *)(v6 + 16)) > 0x64 )
  {
    *(_DWORD *)(v6 + 16) = v3;
    SetSystemTimer((__int64)a1, 65523, 1150, (int)MiPIdleTimerFunc, 1);
  }
}
