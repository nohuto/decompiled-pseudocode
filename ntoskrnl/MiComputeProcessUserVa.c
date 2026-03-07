__int64 __fastcall MiComputeProcessUserVa(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 result; // rax
  __int16 v12; // ax

  v4 = *(_QWORD **)(a1 + 1680);
  *a4 = 0LL;
  v4 += 39;
  v9 = 0x7FFFFFFF0000LL;
  v4[1] = v4;
  *v4 = v4;
  if ( !(unsigned int)MmGetMinWsPagePriority() && (*(_DWORD *)(v10 + 2172) & 1) == 0 )
  {
    result = MiChargeFullProcessCommitment(v10, 4LL);
    if ( (int)result < 0 )
      return result;
    MiUpdateChargedWsles(a1 + 1664);
  }
  if ( !a2 && a3 && (*(_DWORD *)(a3 + 56) & 0x20) != 0 && (*(_DWORD *)(a1 + 1124) & 0x20000) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)MiSectionControlArea(a3) + 56LL) + 44LL) & 0x20) != 0 )
    {
      if ( *(_QWORD *)(a1 + 1408) )
      {
        v12 = *(_WORD *)(a1 + 2412);
        if ( v12 == 332 || v12 == 452 )
        {
          v9 = 4294901760LL;
          *a4 = 0x100000000LL;
          _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x200u);
        }
      }
    }
    else
    {
      v9 = 2147418112LL;
      *a4 = 0x100000000LL;
    }
  }
  if ( dword_140D1D1E0 )
  {
    if ( v9 > 0x80000000 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x200000u);
  }
  *(_QWORD *)(a1 + 1496) = v9;
  return 0LL;
}
