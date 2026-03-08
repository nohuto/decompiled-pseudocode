/*
 * XREFs of ?bUnMap@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C00A32E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bUnMap(SURFACE *this, void *a2, struct DC *a3)
{
  LONG v6; // r8d

  if ( (*((_QWORD *)this + 31) || (*((_DWORD *)this + 29) & 1) != 0)
    && _bittest16((const signed __int16 *)this + 51, 0xBu) )
  {
    KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 39) + 64LL), 0);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 39) + 64LL), UserRequest, 0, 0, 0LL);
    if ( *((_DWORD *)this + 68) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
      && (*((_DWORD *)this + 70))-- == 1 )
    {
      *((_DWORD *)this + 68) = 0;
      v6 = *((_DWORD *)this + 69);
      if ( v6 )
      {
        KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 39), 0, v6, 0);
        *((_DWORD *)this + 69) = 0;
      }
    }
    KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 39) + 64LL), 0);
  }
  return 1LL;
}
