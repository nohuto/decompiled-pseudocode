void __fastcall KiLogControlProtectionKernelModeReturnMismatch(unsigned int a1, __int64 a2)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  if ( (_BYTE)KiKernelCetLogging )
  {
    _InterlockedAdd(&dword_140D1F234, 1u);
    if ( *(_DWORD *)(a2 + 28) )
      _InterlockedAdd(&dword_140D1F23C, 1u);
    if ( !KeGetPcr()->Prcb.CombinedNmiMceActive && KeGetCurrentIrql() < 0xFu )
    {
      if ( *(_DWORD *)(a2 + 28) && !_InterlockedCompareExchange(&dword_140D1F238, 1, 0) )
      {
LABEL_12:
        EtwTimLogControlProtectionKernelModeReturnMismatch(a1);
      }
      else
      {
        v2 = dword_140D1F22C;
        while ( v2 < dword_140D1F230 )
        {
          v3 = v2;
          v2 = _InterlockedCompareExchange(&dword_140D1F22C, v2 + 1, v2);
          if ( v3 == v2 )
            goto LABEL_12;
        }
      }
    }
  }
}
