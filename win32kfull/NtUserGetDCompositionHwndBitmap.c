/*
 * XREFs of NtUserGetDCompositionHwndBitmap @ 0x1C0014480
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C0014578 (-GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDCompositionHwndBitmap(HWND a1, _QWORD *a2)
{
  signed int WindowCompositionVisualBitmap; // ebx
  __int64 v5; // rdi
  struct CompositionObject *v7; // [rsp+78h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  WindowCompositionVisualBitmap = a2 == 0LL ? 0xC000000D : 0;
  v5 = 0LL;
  if ( a2 )
  {
    v7 = 0LL;
    WindowCompositionVisualBitmap = GetWindowCompositionVisualBitmap(a1, &v7);
    if ( WindowCompositionVisualBitmap >= 0 )
    {
      WindowCompositionVisualBitmap = CompositionObject::CreateHandle(v7, 1u, 0, 1, &Handle);
      CompositionObject::Release(v7);
    }
  }
  if ( WindowCompositionVisualBitmap >= 0 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = Handle;
  }
  KeLeaveCriticalRegion();
  LOBYTE(v5) = WindowCompositionVisualBitmap >= 0;
  return v5;
}
