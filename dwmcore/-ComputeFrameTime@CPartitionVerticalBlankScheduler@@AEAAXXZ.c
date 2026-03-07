void __fastcall CPartitionVerticalBlankScheduler::ComputeFrameTime(CPartitionVerticalBlankScheduler *this)
{
  _QWORD *v1; // rdx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 526);
  v3 = v1[27];
  v1[1] = v1[2] + 1LL;
  **((_QWORD **)this + 526) = *(_QWORD *)(*((_QWORD *)this + 526) + 8LL);
  *(_QWORD *)(*((_QWORD *)this + 526) + 216LL) = *(_QWORD *)(*((_QWORD *)this + 526) + 64LL)
                                               + *(_QWORD *)(*((_QWORD *)this + 526) + 240LL);
  CPartitionVerticalBlankScheduler::CalculatePresentAndGlitchDeadlines(this);
  v4 = *(_QWORD *)(*((_QWORD *)this + 526) + 216LL);
  v5 = *(_QWORD *)(*((_QWORD *)this + 527) + 216LL);
  if ( v4 >= v3 && v4 >= v5 )
    goto LABEL_3;
  if ( v4 >= v3 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) == 0 )
      goto LABEL_6;
LABEL_12:
    McTemplateU0x_EventWriteTransfer(v4, &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES, v5 - v4);
    goto LABEL_6;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
  {
    v5 = v3;
    goto LABEL_12;
  }
LABEL_6:
  v6 = *(_QWORD *)(*((_QWORD *)this + 527) + 216LL);
  if ( v6 <= v3 )
    v6 = v3;
  *(_QWORD *)(*((_QWORD *)this + 526) + 216LL) = v6;
LABEL_3:
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(this);
}
