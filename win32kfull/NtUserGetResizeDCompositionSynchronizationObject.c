/*
 * XREFs of NtUserGetResizeDCompositionSynchronizationObject @ 0x1C00DFD20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0012568 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00DFDF0 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall NtUserGetResizeDCompositionSynchronizationObject(HWND a1, _QWORD *a2)
{
  __int64 v4; // rbx
  NTSTATUS v5; // edi
  CompositionObject *v6; // rsi
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF
  struct CompositionObject *v9; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  KeEnterCriticalRegion();
  v5 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v9 = 0LL;
    if ( (unsigned int)GetResizeDCompositionSynchronizationObject(a1, &v9) )
    {
      v6 = v9;
      if ( v9 )
      {
        v5 = CompositionObject::CreateHandle(v9, 1u, 0, 0, &Handle);
        CompositionObject::Release(v6);
      }
    }
  }
  if ( v5 < 0 )
  {
    if ( Handle )
      ObCloseHandle(Handle, 1);
    UserSetLastStatus(v5, 0);
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = Handle;
  }
  KeLeaveCriticalRegion();
  LOBYTE(v4) = v5 >= 0;
  return v4;
}
