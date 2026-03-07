__int64 __fastcall KxWaitForLockOwnerShip(signed __int64 a1, signed __int64 *a2)
{
  volatile signed __int64 *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // esi
  int v6; // esi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  int i; // [rsp+24h] [rbp-2Ch]
  signed __int64 v11; // [rsp+28h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  v2 = (volatile signed __int64 *)(a1 + 8);
  v13 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  if ( (v3 & 4) != 0 )
    BYTE1(v13) = 1;
  *v2 |= 1uLL;
  v4 = 0;
  *a2 = a1;
  v5 = 0;
  for ( i = 0; ; v5 = i )
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      v6 = v5 + 1;
      LOBYTE(v13) = 0;
      i = v6;
      if ( (KiVelocityFlags & 0x10000) != 0 && KeGetCurrentIrql() == 2 && (v6 & 1) == 0 )
      {
        v8 = *v2;
        LOBYTE(v13) = 1;
        *((_QWORD *)&v12 + 1) = v8;
        if ( (v8 & 1) != 0 )
        {
          do
          {
            if ( BYTE1(v13) )
              a1 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
            else
              a1 = v8 | 4;
            v11 = a1;
            v9 = v8;
            v8 = _InterlockedCompareExchange64(v2, a1, v8);
            LOBYTE(v12) = v8;
            if ( v9 == v8 )
            {
              do
              {
                *((_QWORD *)&v12 + 1) = a1;
                KiHaltOnAddress(v2, (char *)&v12 + 8);
                v8 = *v2;
                a1 = v11;
                *(_QWORD *)&v12 = *v2;
              }
              while ( *v2 == v11 );
            }
            *((_QWORD *)&v12 + 1) = v8;
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
  }
  return v4;
}
