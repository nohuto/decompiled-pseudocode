LONG_PTR __fastcall PspRemoveCpuRateControl(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 1224) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1536), 0xFFFFFFDF);
  KeRemoveSchedulingGroup((unsigned __int16 *)(*(_QWORD *)(a1 + 1224) + 128LL));
  result = PspFreeRateControl(*(PVOID *)(a1 + 1224));
  *(_QWORD *)(a1 + 1224) = 0LL;
  if ( PsCpuFairShareEnabled )
  {
    result = *(_QWORD *)(a1 + 1296);
    if ( result == a1 )
    {
      v3 = *(void **)(a1 + 1328);
      if ( v3 )
      {
        result = ObfDereferenceObjectWithTag(v3, 0x624A7350u);
        *(_QWORD *)(a1 + 1328) = 0LL;
      }
    }
  }
  return result;
}
