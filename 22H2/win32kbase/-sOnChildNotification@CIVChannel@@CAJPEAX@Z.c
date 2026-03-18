/*
 * XREFs of ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x1C01F3C70
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x1C01F3B08 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 */

__int64 __fastcall CIVChannel::sOnChildNotification(_DWORD *a1)
{
  CIVChannel *v2; // rbx
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rdx

  v2 = (CIVChannel *)qword_1C02975E8[a1[4]];
  v3 = 0;
  if ( isRootPartition() )
  {
    v4 = a1[2];
    v5 = (unsigned int)a1[3];
    if ( v4 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v2 + 10);
      (*((void (__fastcall **)(_QWORD, __int64))v2 + 2))(*(_QWORD *)v2, v5);
    }
    else if ( v4 == 3 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v2 + 10);
    }
  }
  else if ( a1[2] == 2 )
  {
    return (unsigned int)CIVChannel::Reconnect(v2);
  }
  return v3;
}
