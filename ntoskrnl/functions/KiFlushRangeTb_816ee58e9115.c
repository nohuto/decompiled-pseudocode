char __fastcall KiFlushRangeTb(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v6; // rbp
  bool v7; // zf
  unsigned __int64 i; // rsi
  _KPROCESS *Process; // rcx
  _KPROCESS *v11; // rcx
  __int128 v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+30h] [rbp-38h]

  v4 = (1 << a2) & 0xA;
  if ( v4 )
  {
    if ( KiFlushPcid )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process->AddressPolicy )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v13 = 1LL;
          *((_QWORD *)&v13 + 1) = a1;
          _EAX = 0;
          __asm { invpcid eax, [rsp+68h+var_48] }
        }
        else
        {
          KiSetUserTbFlushPending(Process, a2, a3);
        }
      }
    }
  }
  LOBYTE(_RAX) = 8 * ((a1 >> 10) & 3);
  v6 = 4096LL << (9 * ((unsigned __int8)(a1 >> 10) & 3u));
  v7 = (a1 & 0x3FF) == 0;
  for ( i = a1 & 0x3FF; ; v7 = i == 0 )
  {
    __invlpg((void *)a1);
    if ( v7 )
      break;
    a1 += v6;
    if ( v4 )
    {
      if ( KiFlushPcid )
      {
        _RAX = KeGetCurrentThread();
        v11 = _RAX->ApcState.Process;
        if ( !v11->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v14 = 1LL;
            *((_QWORD *)&v14 + 1) = a1;
            LODWORD(_RAX) = 0;
            __asm { invpcid eax, [rsp+68h+var_38] }
          }
          else
          {
            LOBYTE(_RAX) = KiSetUserTbFlushPending(v11, a2, a3);
          }
        }
      }
    }
    --i;
  }
  return (char)_RAX;
}
