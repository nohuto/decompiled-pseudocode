/*
 * XREFs of ?WaitForLsa@@YAJXZ @ 0x180001B38
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002E80 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x180003BD0 (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 WaitForLsa(void)
{
  unsigned int v0; // edi
  HANDLE EventW; // rbx
  signed int LastError; // eax
  signed int v3; // ecx

  v0 = 0;
  EventW = CreateEventW(0LL, 1, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
  if ( EventW )
    goto LABEL_9;
  if ( GetLastError() != 183 )
    return v0;
  SetLastError(0);
  EventW = OpenEventW(0x100000u, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
  if ( EventW )
  {
LABEL_9:
    WaitForSingleObject(EventW, 0xFFFFFFFF);
    CloseHandle(EventW);
  }
  else
  {
    LastError = GetLastError();
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = LastError;
    if ( v3 >= 0 )
      v3 = -2003304445;
    v0 = v3;
    DoStackCaptureDirect(v3, 0x1ADu);
  }
  return v0;
}
