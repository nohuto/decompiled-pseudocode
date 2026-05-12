/*
 * XREFs of StorPortDeviceBusy @ 0x1C0039160
 * Callers:
 *     StorPortDeviceBusyVrfy @ 0x1C007F190 (StorPortDeviceBusyVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0002E10 (RaidQueueDeferredItem.c)
 *     RaidAdapterFindUnit @ 0x1C0006604 (RaidAdapterFindUnit.c)
 *     WPP_SF_dddd @ 0x1C003D874 (WPP_SF_dddd.c)
 */

char __fastcall StorPortDeviceBusy(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  int v5; // ebp
  int v6; // r12d
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 Unit; // rax
  __int64 v10; // rdx
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int v13; // [rsp+70h] [rbp+8h]

  v5 = a4;
  v6 = (unsigned __int8)a3;
  v7 = **(_QWORD **)(a1 - 16);
  v8 = (unsigned __int8)a2;
  HIBYTE(v13) = 0;
  if ( (qword_1C0069310 & 0x200) != 0 )
    DbgLogRequest(
      v7,
      20,
      retaddr,
      v7,
      a5,
      a4 | (unsigned __int64)(((unsigned __int8)a3 | ((unsigned __int8)a2 << 8)) << 8),
      0LL);
  if ( !v7 )
    return 0;
  LOBYTE(v13) = v8;
  BYTE1(v13) = v6;
  BYTE2(v13) = v5;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v8, v6, v5, a5);
  }
  Unit = RaidAdapterFindUnit(v7, v13);
  if ( !Unit )
    return 0;
  ++*(_DWORD *)(Unit + 2148);
  v10 = Unit + 1456;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1472), 134684676, 134684677) != 134684677 )
    v10 = 0LL;
  if ( !v10 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0069310 & 0x800) != 0 )
      DbgLogRequest(v7, 22, retaddr, 855LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v10 + 32) = 9;
  *(_DWORD *)(v10 + 36) = v13;
  *(_DWORD *)(v10 + 40) = a5;
  RaidQueueDeferredItem((char *)(v7 + 1152), (struct _SLIST_ENTRY *)v10);
  return 1;
}
