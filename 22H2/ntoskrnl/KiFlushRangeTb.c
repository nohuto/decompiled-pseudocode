/*
 * XREFs of KiFlushRangeTb @ 0x1403C8F30
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x1402BBCB0 (KeFlushMultipleRangeTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C8E4C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1403FEB70 (KiSetUserTbFlushPending.c)
 */

char __fastcall KiFlushRangeTb(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v7; // rbp
  bool v8; // zf
  unsigned __int64 i; // rsi
  _KPROCESS *Process; // rcx
  _KPROCESS *v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-48h]
  __int128 v15; // [rsp+30h] [rbp-38h]

  v5 = (1 << a2) & 0xA;
  if ( v5 )
  {
    if ( KiFlushPcid )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process->AddressPolicy )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v14 = 1LL;
          *((_QWORD *)&v14 + 1) = a1;
          _EAX = 0;
          __asm { invpcid eax, [rsp+68h+var_48] }
        }
        else
        {
          KiSetUserTbFlushPending(Process, a2, a3, a4);
        }
      }
    }
  }
  LOBYTE(_RAX) = 8 * ((a1 >> 10) & 3);
  v7 = 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
  v8 = (a1 & 0x3FF) == 0;
  for ( i = a1 & 0x3FF; ; v8 = i == 0 )
  {
    __invlpg((void *)a1);
    if ( v8 )
      break;
    a1 += v7;
    if ( v5 )
    {
      if ( KiFlushPcid )
      {
        _RAX = KeGetCurrentThread();
        v12 = _RAX->ApcState.Process;
        if ( !v12->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v15 = 1LL;
            *((_QWORD *)&v15 + 1) = a1;
            LODWORD(_RAX) = 0;
            __asm { invpcid eax, [rsp+68h+var_38] }
          }
          else
          {
            LOBYTE(_RAX) = KiSetUserTbFlushPending(v12, a2, a3, a4);
          }
        }
      }
    }
    --i;
  }
  return (char)_RAX;
}
