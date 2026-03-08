/*
 * XREFs of ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C0363D18
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036A030 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036B9E0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER::GetTargetPartitionId(DXGVIRTUALGPUMANAGER *this, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rbx
  __int64 v7; // rcx

  v3 = *((_DWORD *)this + 3);
  if ( (_DWORD)a2 == 0xFFFF )
  {
    a2 = 0LL;
    if ( v3 )
    {
      v7 = *((_QWORD *)this + 3);
      do
      {
        if ( !*(_QWORD *)(v7 + 8 * a2) )
          break;
        a2 = (unsigned int)(a2 + 1);
      }
      while ( (unsigned int)a2 < v3 );
    }
    if ( (_DWORD)a2 == *((_DWORD *)this + 3) )
    {
      WdLogSingleEntry1(4LL, 2073LL);
      return 2147483674LL;
    }
  }
  else if ( (unsigned int)a2 >= v3 )
  {
    v5 = (unsigned int)a2;
    WdLogSingleEntry2(2LL, (unsigned int)a2, v3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PartitionId is greater that the number of available GPU partitions: 0x%I64x 0x%I64x",
      v5,
      *((unsigned int *)this + 3),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *a3 = a2;
  return 0LL;
}
