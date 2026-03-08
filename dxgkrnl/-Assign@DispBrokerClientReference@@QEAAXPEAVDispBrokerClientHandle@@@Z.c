/*
 * XREFs of ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C0016524
 * Callers:
 *     ??1DispBrokerClient@@QEAA@XZ @ 0x1C0016204 (--1DispBrokerClient@@QEAA@XZ.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0016C7C (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     _lambda_8317567312832b51b45aaef017a7684b_::operator() @ 0x1C01D5A20 (_lambda_8317567312832b51b45aaef017a7684b_--operator().c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01D5B30 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C01D5CF8 (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01DDCF0 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??1DispBrokerClientHandle@@QEAA@XZ @ 0x1C001658C (--1DispBrokerClientHandle@@QEAA@XZ.c)
 */

void __fastcall DispBrokerClientReference::Assign(DispBrokerClientHandle **this, struct DispBrokerClientHandle *a2)
{
  DispBrokerClientHandle *v2; // rdi

  v2 = *this;
  if ( *this != a2 )
  {
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      {
        DispBrokerClientHandle::~DispBrokerClientHandle(v2);
        operator delete(v2);
      }
      *this = 0LL;
    }
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a2);
      *this = a2;
    }
  }
}
