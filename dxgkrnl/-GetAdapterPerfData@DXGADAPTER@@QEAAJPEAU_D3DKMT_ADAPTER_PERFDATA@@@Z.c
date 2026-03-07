__int64 __fastcall DXGADAPTER::GetAdapterPerfData(DXGADAPTER *this, struct _D3DKMT_ADAPTER_PERFDATA *a2)
{
  __int64 PhysicalAdapterIndex; // r15
  __int64 v5; // rdi
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // r8
  LARGE_INTEGER v8; // rbx
  ULONGLONG *v9; // r12
  int v10; // eax
  unsigned int v11; // r15d
  struct _DXGKARG_QUERYADAPTERINFO v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+88h] [rbp+38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+40h] BYREF

  if ( a2 )
  {
    PhysicalAdapterIndex = a2->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 72) )
    {
      PerformanceFrequency.QuadPart = 0LL;
      v5 = *((_QWORD *)this + 351) + 344 * PhysicalAdapterIndex;
      v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v8 = v6;
      if ( *((_DWORD *)this + 40) == 1
        || 1000 * (v6.QuadPart - *(_QWORD *)(v5 + 176)) / PerformanceFrequency.QuadPart < 450 )
      {
        v11 = 0;
        v9 = (ULONGLONG *)(v5 + 120);
      }
      else
      {
        *((_DWORD *)&v13.Type + 1) = 0;
        *(&v13.InputDataSize + 1) = 0;
        v9 = (ULONGLONG *)(v5 + 120);
        *(_QWORD *)&v13.Flags.0 = 0LL;
        HIDWORD(v13.hKmdProcessHandle) = 0;
        v13.pInputData = &v14;
        v13.pOutputData = (void *)(v5 + 120);
        v14 = PhysicalAdapterIndex;
        v13.Type = DXGKQAITYPE_ADAPTERPERFDATA;
        v13.InputDataSize = 4;
        v13.OutputDataSize = 53;
        v10 = DXGADAPTER::DdiQueryAdapterInfo(this, &v13, v7.QuadPart);
        v11 = v10;
        if ( v10 < 0 )
        {
          WdLogSingleEntry2(3LL, this, v10);
          return v11;
        }
        *(LARGE_INTEGER *)(v5 + 176) = v8;
      }
      a2->MemoryFrequency = *v9;
      a2->MaxMemoryFrequency = *(_QWORD *)(v5 + 128);
      a2->MaxMemoryFrequencyOC = *(_QWORD *)(v5 + 136);
      a2->MemoryBandwidth = *(_QWORD *)(v5 + 144);
      a2->PCIEBandwidth = *(_QWORD *)(v5 + 152);
      a2->FanRPM = *(_DWORD *)(v5 + 160);
      a2->Power = *(_DWORD *)(v5 + 164);
      a2->Temperature = *(_DWORD *)(v5 + 168);
      a2->PowerStateOverride = *(_BYTE *)(v5 + 172);
      return v11;
    }
  }
  WdLogSingleEntry1(3LL, this);
  return 3221225485LL;
}
