__int64 __fastcall NtUserGetInteractiveCtrlSupportedWaveforms(__int64 a1, volatile void *a2, int *a3)
{
  unsigned __int16 v5; // r15
  int v6; // ebx
  int v7; // ecx
  ULONG64 v8; // rcx
  __int64 v9; // rcx
  SIZE_T v10; // rsi
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v12; // rax
  int v13; // r8d
  _DWORD *v14; // rdx
  void *v15; // rdx
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+80h] [rbp+18h] BYREF
  void *Src; // [rsp+88h] [rbp+20h] BYREF

  v5 = a1;
  EnterSharedCrit(a1, a2, a3);
  v6 = 0;
  v18 = 0;
  Src = 0LL;
  if ( !a3 )
  {
    v7 = 87;
LABEL_3:
    UserSetLastError(v7);
    goto LABEL_21;
  }
  ProbeForRead(a3, 4uLL, 4u);
  v10 = *a3;
  v17 = *a3;
  if ( a2 && (int)v10 > 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
    ProbeForWrite(a2, v10, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v12 = InteractiveControlManager::Instance(v9);
  if ( (int)InteractiveControlManager::GetDeviceSupportedWaveforms(v12, v5, (struct _WAVEFORM_INFO **)&Src, &v18) >= 0 )
  {
    if ( (unsigned __int64)v18 >= 0xFFFFFFF )
    {
      v7 = 534;
      goto LABEL_3;
    }
    v13 = 8 * v18;
    if ( (int)v10 > 0 && (int)v10 < v13 )
    {
      v7 = 122;
      goto LABEL_3;
    }
    v8 = MmUserProbeAddress;
    v14 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
    if ( a2 && (v15 = Src) != 0LL && v17 >= v13 )
    {
      *a3 = v13;
      memmove((void *)a2, v15, v13);
    }
    else
    {
      *a3 = v13;
    }
    v6 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
