/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x1406BEC0C
 * Callers:
 *     EtwpRealtimeDeliverBuffer @ 0x1406BEAC8 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140710C90 (EtwpRealtimeNotifyConsumers.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     EtwpFindUserBufferSpace @ 0x1406BEE00 (EtwpFindUserBufferSpace.c)
 *     EtwpFreeUserBufferSpace @ 0x140941C2C (EtwpFreeUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // r9
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdx
  _DWORD *v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  int v12; // ecx
  unsigned int v14; // ecx
  int UserBufferSpace; // [rsp+20h] [rbp-78h]
  void *v16; // [rsp+28h] [rbp-70h] BYREF
  signed __int64 v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  __int64 v19; // [rsp+40h] [rbp-58h]
  char *v20; // [rsp+48h] [rbp-50h]
  _OWORD v21[3]; // [rsp+50h] [rbp-48h] BYREF

  v18 = a2;
  v19 = a3;
  memset(v21, 0, sizeof(v21));
  v16 = 0LL;
  if ( *(_WORD *)(a3 + 54) == 6 )
  {
    v14 = *(_DWORD *)(a2 + 84) + 1;
    *(_DWORD *)(a2 + 84) = v14;
    if ( (a1[3] & 0x10000000) != 0 || v14 > 2 )
      return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 1112LL)) )
    return 3221225738LL;
  KiStackAttachProcess(*(_KPROCESS **)(a2 + 24), 0LL, (__int64)v21, v6);
  **(_DWORD **)(a2 + 136) = a1[64];
  **(_DWORD **)(a2 + 144) = a1[69];
  v7 = (unsigned int)(4 * a1[63]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v7 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v7, a2, *(unsigned int *)(a3 + 48), &v16);
    if ( UserBufferSpace >= 0 )
    {
      memmove(v16, (const void *)a3, *(unsigned int *)(a3 + 48));
      v8 = *(volatile signed __int32 **)(a2 + 72);
      v9 = (char *)v16 + 32;
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v20 = (char *)v16 + 32;
        LODWORD(v10) = *v8;
        do
        {
          *v9 = v10;
          v12 = v10;
          LODWORD(v10) = _InterlockedCompareExchange(v8, (signed __int32)v9, v10);
        }
        while ( (_DWORD)v10 != v12 );
        v10 = (unsigned int)v10;
      }
      else
      {
        _m_prefetchw((const void *)v8);
        v10 = *(_QWORD *)v8;
        do
        {
          *(_QWORD *)v9 = v10;
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, (signed __int64)v9, v10);
        }
        while ( v10 != v11 );
      }
      v17 = v10;
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !v17 )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    UserBufferSpace = -1073741764;
  }
  KiUnstackDetachProcess((__int64)v21, 0);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 1112LL));
  return (unsigned int)UserBufferSpace;
}
