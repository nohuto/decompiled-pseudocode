__int64 __fastcall DXGADAPTER::GetGpuVersion(DXGADAPTER *this, struct _D3DKMT_GPUVERSION *a2)
{
  __int64 PhysicalAdapterIndex; // rax
  __int64 v3; // r8
  __int64 result; // rax

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 72)) )
  {
    v3 = *((_QWORD *)this + 351) + 344 * PhysicalAdapterIndex;
    result = 0LL;
    *(_OWORD *)a2->BiosVersion = *(_OWORD *)(v3 + 212);
    *(_OWORD *)&a2->BiosVersion[8] = *(_OWORD *)(v3 + 228);
    *(_OWORD *)a2->GpuArchitecture = *(_OWORD *)(v3 + 276);
    *(_OWORD *)&a2->GpuArchitecture[8] = *(_OWORD *)(v3 + 292);
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    return 3221225485LL;
  }
  return result;
}
