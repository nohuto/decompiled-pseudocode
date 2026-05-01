/*
 * XREFs of ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x1804F6110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1804D9EEC (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveWindowFactory::v_OnAfterSetAppWindow(CImmersiveWindowFactory *this)
{
  int CallingProcessHandle; // esi
  DWORD ProcessId; // ebx
  char *v4; // rcx
  LPVOID v5; // rbx
  DWORD dwProcessId; // [rsp+60h] [rbp+20h] BYREF
  HANDLE Process; // [rsp+68h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+70h] [rbp+30h] BYREF

  if ( !*((_DWORD *)this + 33) )
  {
    Process = 0LL;
    CallingProcessHandle = CallerIdentity::GetCallingProcessHandle((__int64)this, 0, &Process);
    if ( CallingProcessHandle < 0 )
      ProcessId = dwProcessId;
    else
      ProcessId = GetProcessId(Process);
    v4 = (char *)Process;
    Process = 0LL;
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v4);
    if ( CallingProcessHandle >= 0
      && GetWindowThreadProcessId(*((HWND *)this + 12), &dwProcessId)
      && ProcessId == dwProcessId )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      if ( CoCreateInstance(
             &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
             0LL,
             0x404u,
             &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
             &ppv) >= 0 )
      {
        Process = 0LL;
        v5 = ppv;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Process);
        if ( (*(int (__fastcall **)(LPVOID, GUID *, GUID *, HANDLE *))(*(_QWORD *)v5 + 24LL))(
               v5,
               &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b,
               &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b,
               &Process) >= 0 )
          (*(void (__fastcall **)(HANDLE, _QWORD))(*(_QWORD *)Process + 40LL))(Process, *((_QWORD *)this + 12));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Process);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    }
  }
}
