/*
 * XREFs of ??1ConsumerControlManager@@EEAA@XZ @ 0x18009FB1C
 * Callers:
 *     ??_GConsumerControlManager@@EEAAPEAXI@Z @ 0x18009FD20 (--_GConsumerControlManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009EE3C (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009FCC8 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 */

void __fastcall ConsumerControlManager::~ConsumerControlManager(ConsumerControlManager *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rcx
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry **v5; // rdi
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v6; // rcx
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry **v7; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v8; // rdi
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v9; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v10; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v11; // rdi
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v12; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v13; // rax

  *(_QWORD *)this = &ConsumerControlManager::`vftable';
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 15);
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (ConsumerControlManager::ConsumerControlDeviceCommandListEntry **)((char *)this + 64);
  while ( 1 )
  {
    v6 = *v5;
    v7 = *(ConsumerControlManager::ConsumerControlDeviceCommandListEntry ***)*v5;
    if ( *((ConsumerControlManager::ConsumerControlDeviceCommandListEntry ***)*v5 + 1) != v5 || v7[1] != v6 )
LABEL_21:
      __fastfail(3u);
    *v5 = (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v7;
    v7[1] = (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v5;
    if ( v6 == (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v5 )
      break;
    ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(v6, v3);
    --*((_QWORD *)this + 10);
  }
  v8 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)((char *)this + 40);
  while ( 1 )
  {
    v9 = *v8;
    v10 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v8;
    if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v8 + 1) != v8 || v10[1] != v9 )
      goto LABEL_21;
    *v8 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v10;
    v10[1] = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v8;
    if ( v9 == (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v8 )
      break;
    ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v9);
    --*((_QWORD *)this + 7);
  }
  v11 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)((char *)this + 16);
  while ( 1 )
  {
    v12 = *v11;
    v13 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v11;
    if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v11 + 1) != v11 || v13[1] != v12 )
      goto LABEL_21;
    *v11 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v13;
    v13[1] = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v11;
    if ( v12 == (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v11 )
      break;
    ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v12);
    --*((_QWORD *)this + 4);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
