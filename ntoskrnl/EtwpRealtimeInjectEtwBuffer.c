/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x1406A2090
 * Callers:
 *     EtwpRealtimeDeliverBuffer @ 0x1406A1F30 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140790D3C (EtwpRealtimeNotifyConsumers.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpFindUserBufferSpace @ 0x1406A1E50 (EtwpFindUserBufferSpace.c)
 *     EtwpFreeUserBufferSpace @ 0x1409ED07C (EtwpFreeUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  _KPROCESS **v6; // rdi
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdx
  _DWORD *v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  int v12; // ecx
  unsigned int v14; // ecx
  int UserBufferSpace; // [rsp+20h] [rbp-88h]
  void *v16; // [rsp+28h] [rbp-80h] BYREF
  signed __int64 v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+48h] [rbp-60h]
  char *v21; // [rsp+50h] [rbp-58h]
  $115DCDF994C6370D29323EAB0E0C9502 v22; // [rsp+58h] [rbp-50h] BYREF

  v20 = a2;
  v19 = a3;
  memset(&v22, 0, sizeof(v22));
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
  v6 = (_KPROCESS **)(a2 + 24);
  v18 = a2 + 24;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 1112LL)) )
    return 3221225738LL;
  KiStackAttachProcess(*v6, 0, (__int64)&v22);
  **(_DWORD **)(a2 + 136) = a1[60];
  **(_DWORD **)(a2 + 144) = a1[65];
  v7 = (unsigned int)(4 * a1[59]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v7 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v7, a2, *(_DWORD *)(a3 + 48), &v16);
    if ( UserBufferSpace >= 0 )
    {
      memmove(v16, (const void *)a3, *(unsigned int *)(a3 + 48));
      v8 = *(volatile signed __int32 **)(a2 + 72);
      v9 = (char *)v16 + 32;
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v21 = (char *)v16 + 32;
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
  KiUnstackDetachProcess(&v22);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&(*v6)[1].ProfileListHead.Blink);
  return (unsigned int)UserBufferSpace;
}
