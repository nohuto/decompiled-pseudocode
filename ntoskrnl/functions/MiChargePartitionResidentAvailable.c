__int64 __fastcall MiChargePartitionResidentAvailable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed __int64 v5; // r11
  unsigned __int64 v6; // rcx
  signed __int64 v7; // r8
  bool v8; // zf
  __int64 v9; // rax
  BOOL v10; // r10d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int CachedResidentAvailable; // edx
  unsigned __int64 v13; // rdx
  struct _KPRCB *v14; // r11
  __int64 v15; // r8
  signed __int32 v16; // eax
  __int64 *v18; // r8
  __int64 v19; // rdi
  unsigned __int32 v20; // eax
  unsigned __int64 v21; // rcx

  if ( a2 + a3 >= a2 || a3 == 0xFFFFFFFFLL )
  {
    v5 = *(_QWORD *)(a1 + 17280);
    v6 = 0LL;
    if ( v5 < 1024 && (_UNKNOWN *)a1 == &MiSystemPartition )
    {
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v18 = KiProcessorBlock;
        v19 = (unsigned int)KeNumberProcessors_0;
        do
        {
          if ( *(_DWORD *)(*v18 + 34460) != -1 )
          {
            v20 = _InterlockedExchange((volatile __int32 *)(*v18 + 34460), -1);
            if ( v20 != -1 )
              v6 += v20;
          }
          ++v18;
          --v19;
        }
        while ( v19 );
      }
      if ( v6 >= a2 )
      {
        v21 = v6 - a2;
        if ( v21 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v21);
        return 3LL;
      }
      a2 -= v6;
    }
    if ( v5 <= 0 )
    {
LABEL_45:
      if ( a3 != 0xFFFFFFFFLL )
      {
LABEL_46:
        ++dword_140C67C2C;
        if ( v6 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v6);
        return 0LL;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), -(__int64)a2);
      return 3LL;
    }
    while ( 1 )
    {
      if ( a2 + a3 > v5 && a3 != 0xFFFFFFFFLL )
        goto LABEL_46;
      v7 = v5 - a2;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 17280), v5 - a2, v5);
      v8 = v5 == v9;
      v5 = v9;
      if ( v8 )
        break;
      if ( v9 <= 0 )
        goto LABEL_45;
    }
    v10 = v7 < 1024;
    if ( (_UNKNOWN *)a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable == -1 )
      {
        if ( v7 < 2048 )
          return (unsigned int)(v10 + 2);
        _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable, 0, -1);
        CachedResidentAvailable = 0;
      }
      else if ( CachedResidentAvailable >= 0x40 || v7 <= 1024 )
      {
        return (unsigned int)(v10 + 2);
      }
      v13 = 128 - CachedResidentAvailable;
      if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 17280), v7 - v13, v7) )
      {
        v14 = KeGetCurrentPrcb();
        v15 = (int)v14->CachedResidentAvailable;
        if ( (_DWORD)v15 != -1 )
        {
          if ( v13 + v15 <= 0x100 && v13 < 0x80000 )
          {
            do
            {
              v16 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v14->CachedResidentAvailable,
                      v13 + v15,
                      v15);
              v8 = (_DWORD)v15 == v16;
              LODWORD(v15) = v16;
              if ( v8 )
                return (unsigned int)(v10 + 2);
            }
            while ( v16 != -1 && v13 + v16 <= 0x100 );
          }
          if ( (int)v15 > 192
            && (_DWORD)v15 == _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v14->CachedResidentAvailable,
                                192,
                                v15) )
          {
            v13 += (int)v15 - 192;
          }
        }
        if ( v13 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v13);
      }
    }
    return (unsigned int)(v10 + 2);
  }
  ++dword_140C67C28;
  return 0LL;
}
