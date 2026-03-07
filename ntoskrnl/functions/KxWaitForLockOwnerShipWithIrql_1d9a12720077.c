__int64 __fastcall KxWaitForLockOwnerShipWithIrql(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rdi
  bool v3; // al
  unsigned int v4; // ebx
  int v5; // esi
  signed __int64 v6; // rax
  signed __int64 v7; // rcx
  signed __int64 v8; // rtt
  int v10; // [rsp+24h] [rbp-2Ch]
  signed __int64 v11; // [rsp+28h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  v2 = (volatile signed __int64 *)(a1 + 8);
  v13 = 0LL;
  v3 = (*(_QWORD *)(a1 + 8) & 4) != 0;
  *(_QWORD *)(a1 + 8) |= 1uLL;
  v4 = 0;
  BYTE1(v13) = v3;
  v5 = 0;
  v12 = 0LL;
  v10 = 0;
  *a2 = a1;
  while ( 1 )
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      v10 = v5 + 1;
      LOBYTE(v13) = 0;
      if ( (KiVelocityFlags & 0x10000) != 0 && KeGetCurrentIrql() == 2 && (((_BYTE)v5 + 1) & 1) == 0 )
      {
        v6 = *v2;
        LOBYTE(v13) = 1;
        *((_QWORD *)&v12 + 1) = v6;
        if ( (v6 & 1) != 0 )
        {
          do
          {
            if ( BYTE1(v13) )
              v7 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
            else
              v7 = v6 | 4;
            v11 = v7;
            v8 = v6;
            v6 = _InterlockedCompareExchange64(v2, v7, v6);
            LOBYTE(v12) = v6;
            if ( v8 == v6 )
            {
              do
              {
                *((_QWORD *)&v12 + 1) = v7;
                KiHaltOnAddress(v2, (char *)&v12 + 8);
                v6 = *v2;
                v7 = v11;
                *(_QWORD *)&v12 = *v2;
              }
              while ( *v2 == v11 );
            }
            *((_QWORD *)&v12 + 1) = v6;
          }
          while ( (v12 & 1) != 0 );
        }
      }
      else
      {
        HvlNotifyLongSpinWait(v4);
      }
    }
    else
    {
      _mm_pause();
    }
    if ( (*v2 & 1) == 0 )
      break;
    v5 = v10;
  }
  return v4;
}
