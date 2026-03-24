/*
 * XREFs of ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E1074
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E04EC (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     _SetSystemTimer @ 0x1C002CAB8 (_SetSystemTimer.c)
 */

void __fastcall RefreshMiPIdleNotificationTimer(struct tagWND *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax

  v1 = *((_QWORD *)a1 + 2);
  v3 = *(_QWORD *)(v1 + 1280);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( *(_QWORD *)a1 != v4 )
  {
    v6 = ValidateHwnd(v4);
    if ( v6 )
      FindTimer(v6, 65523LL, 2u, 1, 0LL);
    *(_QWORD *)(*(_QWORD *)(v1 + 1280) + 8LL) = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)(v1 + 1280) + 16LL) = v5 - 101;
    v3 = *(_QWORD *)(v1 + 1280);
  }
  if ( (unsigned int)(v5 - *(_DWORD *)(v3 + 16)) > 0x64 )
  {
    *(_DWORD *)(v3 + 16) = v5;
    SetSystemTimer((__int64)a1, 65523, 1150, (int)MiPIdleTimerFunc, 1);
  }
}
