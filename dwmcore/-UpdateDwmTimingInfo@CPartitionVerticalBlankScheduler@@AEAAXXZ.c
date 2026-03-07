void __fastcall CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // r8
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+8h] [rbp+8h]

  v1 = *((_QWORD *)this + 526);
  *((_QWORD *)this + 535) = *(_QWORD *)(v1 + 72);
  *(_QWORD *)((char *)this + 4260) = *(_QWORD *)(v1 + 64);
  *(_QWORD *)((char *)this + 4268) = *(_QWORD *)(v1 + 16);
  *((_DWORD *)this + 1074) = *(_DWORD *)(v1 + 32);
  *((_DWORD *)this + 1069) = *(_DWORD *)(v1 + 44);
  *(_QWORD *)((char *)this + 4300) = *(_QWORD *)(v1 + 8);
  *((_QWORD *)this + 536) = *(_QWORD *)v1;
  LODWORD(v9) = g_qpcFrequency.LowPart;
  HIDWORD(v9) = *(_DWORD *)(v1 + 232);
  *(_QWORD *)((char *)this + 4236) = v9;
  *(_QWORD *)((char *)this + 4244) = *(_QWORD *)(v1 + 240);
  LODWORD(v9) = g_qpcFrequency.LowPart;
  HIDWORD(v9) = *(_DWORD *)(v1 + 232);
  *(_QWORD *)((char *)this + 4252) = v9;
  v3 = *((_QWORD *)this + 578);
  *((_DWORD *)this + 1088) = 0;
  *((_QWORD *)this + 543) = v3;
  v4 = *((_DWORD *)this + 1050);
  if ( v4 != -1 )
  {
    v5 = (unsigned __int64)v4 << 8;
    *(_QWORD *)((char *)this + 4308) = *(_QWORD *)((char *)this + v5 + 96);
    *((_DWORD *)this + 1079) = *(_DWORD *)((char *)this + v5 + 128);
  }
  v6 = *((_DWORD *)this + 1051);
  if ( v6 != -1 )
  {
    v7 = (unsigned __int64)v6 << 8;
    *((_QWORD *)this + 540) = *(_QWORD *)((char *)this + v7 + 96);
    *(_QWORD *)((char *)this + 4332) = *(_QWORD *)((char *)this + v7 + 104);
  }
  v8 = *(unsigned int *)(v1 + 112);
  *((_DWORD *)this + 1082) = v8;
  *((_DWORD *)this + 1085) = *(_DWORD *)(v1 + 116);
  *(_QWORD *)((char *)this + 4532) = *(_QWORD *)((char *)this + 4524);
  *(_QWORD *)((char *)this + 4524) = v8;
}
