__int64 __fastcall MiGetSlabStandbyListWorker(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !v4 )
      return 0LL;
    v4 ^= a2;
  }
  if ( v4 )
  {
    v6 = 0LL;
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
    v7 = *(_QWORD *)a2;
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v7 )
      v7 ^= a2;
    if ( v7 )
    {
      v8 = a3[1];
      do
      {
        if ( v8 <= *(_QWORD *)(v7 + 32) )
        {
          if ( v8 >= *(_QWORD *)(v7 + 24) )
            break;
          v9 = *(_QWORD *)v7;
        }
        else
        {
          v9 = *(_QWORD *)(v7 + 8);
        }
        if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v9 )
          v7 ^= v9;
        else
          v7 = v9;
      }
      while ( v7 );
      if ( v7 )
      {
        v6 = v7;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 136));
        if ( (unsigned int)(*(_DWORD *)(v7 + 136) + *(_DWORD *)(v7 + 132)) >= 0x200 )
          _InterlockedOr((volatile signed __int32 *)(a2 + 88), 1u);
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
    if ( v6 )
    {
      MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(*a3, v6);
      result = 1LL;
      a3[2] = a2 + 112;
      return result;
    }
  }
  return 0LL;
}
