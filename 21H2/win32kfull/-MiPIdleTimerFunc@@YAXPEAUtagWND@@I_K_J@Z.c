/*
 * XREFs of ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E0B70
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     _PostTransformableMessage @ 0x1C003F958 (_PostTransformableMessage.c)
 *     IsMiPEnabledForWindow @ 0x1C01E1E88 (IsMiPEnabledForWindow.c)
 */

void __fastcall MiPIdleTimerFunc(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // r9
  int v8; // eax

  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 1280);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)a1 )
        *(_QWORD *)(v5 + 8) = 0LL;
    }
  }
  FindTimer((__int64)a1, a3, 2u, 1, 0LL);
  if ( v3 )
  {
    v6 = *(_DWORD **)(v3 + 1280);
    if ( v6 )
    {
      if ( (*v6 & 1) != 0 && (unsigned int)IsMiPEnabledForWindow(a1) )
      {
        *(_DWORD *)(*(_QWORD *)(v3 + 1280) + 32LL) = GetNextFrameId();
        *(_DWORD *)(*(_QWORD *)(v3 + 1280) + 88LL) = (MEMORY[0xFFFFF78000000320]
                                                    * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)(v3 + 1280) + 112LL) = 0;
        *(LARGE_INTEGER *)(*(_QWORD *)(v3 + 1280) + 104LL) = KeQueryPerformanceCounter(0LL);
        v7 = *(_QWORD *)(v3 + 1280);
        v8 = *(_DWORD *)(v7 + 36);
        if ( (v8 & 0x10000) != 0 )
        {
          *(_DWORD *)(v7 + 36) = v8 & 0xFFFEFFFF;
          *(_DWORD *)(*(_QWORD *)(v3 + 1280) + 36LL) |= 0x20000u;
          v7 = *(_QWORD *)(v3 + 1280);
        }
        PostTransformableMessage(
          a1,
          0x245u,
          ((unsigned __int64)(*(_WORD *)(v7 + 36) & 0xE1F7) << 16) | 1,
          *(_QWORD *)(v7 + 376),
          0);
      }
    }
  }
}
