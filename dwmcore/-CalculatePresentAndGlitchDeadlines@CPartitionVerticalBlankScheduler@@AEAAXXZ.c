void __fastcall CPartitionVerticalBlankScheduler::CalculatePresentAndGlitchDeadlines(
        CPartitionVerticalBlankScheduler *this)
{
  int v2; // ebx
  char v3; // bp
  int v4; // edi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  int v6; // r8d
  struct IMonitorTarget *v7; // r14
  char *v8; // rcx
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD v12[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v13; // [rsp+38h] [rbp-90h]
  _DWORD v14[20]; // [rsp+40h] [rbp-88h] BYREF

  v2 = 0;
  v3 = 1;
  v4 = 0;
  *(_DWORD *)(*((_QWORD *)this + 526) + 52LL) = 0;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8)
                                                                                                + 216LL));
  v7 = PrimaryMonitorTarget;
  if ( PrimaryMonitorTarget )
  {
    v3 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)PrimaryMonitorTarget + 8LL))(PrimaryMonitorTarget);
    v8 = (char *)v7 + *(int *)(*((_QWORD *)v7 + 1) + 12LL) + 8;
    if ( (*(unsigned __int8 (__fastcall **)(char *, _DWORD *))(*(_QWORD *)v8 + 48LL))(v8, v14) )
    {
      v9 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v7 + 104LL))(v7);
      v4 = v14[0] / v9;
      if ( !(v14[0] / v9) && v9 == 1 )
        v4 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, 0LL) == -1;
      *(_DWORD *)(*((_QWORD *)this + 526) + 52LL) = v14[7] + 1;
      if ( v4 )
      {
        *(_QWORD *)(*((_QWORD *)this + 526) + 216LL) += *(_QWORD *)(*((_QWORD *)this + 526) + 240LL);
        *(_BYTE *)(*((_QWORD *)this + 526) + 224LL) = 1;
      }
    }
  }
  v10 = *((_QWORD *)this + 526);
  if ( *(_BYTE *)(v10 + 172) && !v3 )
    v2 = *(_DWORD *)(v10 + 44) + (v4 != 0) + 1;
  *(_DWORD *)(v10 + 48) = v2;
  v11 = *((_QWORD *)this + 526);
  v12[0] = *(_DWORD *)(v11 + 44);
  v12[1] = *(_DWORD *)(v11 + 48);
  v13 = *(_QWORD *)(v11 + 232);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McTemplateU0qNR0_EventWriteTransfer(v11, (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, v6, 16, (__int64)v12);
}
