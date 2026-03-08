/*
 * XREFs of ?ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C030FC58
 * Callers:
 *     ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0379070 (-VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByHostLuid(
        DXGGLOBAL *this,
        struct _LUID a2,
        unsigned __int64 *a3)
{
  DWORD LowPart; // ebx
  char *v6; // r9
  char *v7; // rdx
  char *v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGGLOBAL *)((char *)this + 720), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v6 = (char *)this + 768;
  v7 = (char *)*((_QWORD *)this + 96);
  while ( v7 != v6 && v7 )
  {
    v8 = v7;
    v7 = *(char **)v7;
    if ( *((_DWORD *)v8 + 1143) == LowPart && *((_DWORD *)v8 + 1144) == HighPart )
    {
      _m_prefetchw(v8 + 24);
      v9 = *((_QWORD *)v8 + 3);
      while ( v9 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v9 + 1, v9);
        if ( v10 == v9 )
        {
          *a3 = -1LL;
          goto LABEL_12;
        }
      }
    }
  }
  v8 = 0LL;
LABEL_12:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return (struct DXGADAPTER *)v8;
}
