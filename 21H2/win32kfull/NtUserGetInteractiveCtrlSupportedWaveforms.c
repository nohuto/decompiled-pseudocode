/*
 * XREFs of NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01FA310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5E60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C0251F5C (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveCtrlSupportedWaveforms(unsigned __int16 a1, volatile void *a2, int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rcx
  ULONG64 v10; // rcx
  __int64 v11; // rcx
  SIZE_T v12; // r14
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v14; // rax
  _DWORD *v15; // rdx
  void *v16; // rdx
  int v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+80h] [rbp+18h] BYREF
  void *Src; // [rsp+88h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v8 = 0;
  v19 = 0;
  Src = 0LL;
  if ( !a3 )
  {
    v9 = 87LL;
LABEL_3:
    UserSetLastError(v9, v6, v7);
    goto LABEL_21;
  }
  ProbeForRead(a3, 4uLL, 4u);
  v12 = *a3;
  v18 = *a3;
  if ( a2 && (int)v12 > 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
    ProbeForWrite(a2, v12, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v14 = InteractiveControlManager::Instance();
  if ( (int)InteractiveControlManager::GetDeviceSupportedWaveforms(v14, a1, (struct _WAVEFORM_INFO **)&Src, &v19) >= 0 )
  {
    v7 = v19;
    if ( (unsigned __int64)v19 >= 0xFFFFFFF )
    {
      v9 = 534LL;
      goto LABEL_3;
    }
    v7 = (unsigned int)(8 * v19);
    if ( (int)v12 > 0 && (int)v12 < (int)v7 )
    {
      v9 = 122LL;
      goto LABEL_3;
    }
    v10 = MmUserProbeAddress;
    v15 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
    if ( a2 && (v16 = Src) != 0LL && v18 >= (int)v7 )
    {
      *a3 = v7;
      memmove((void *)a2, v16, (int)v7);
    }
    else
    {
      *a3 = v7;
    }
    v8 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
