/*
 * XREFs of ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x18009F130
 * Callers:
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x18009FA38 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009EE3C (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800A029C (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 */

void __fastcall LampArrayRawInputProvider::OnLampArrayRemoved(LampArrayRawInputProvider *this, struct PnpDevice *a2)
{
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v4; // r8
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *i; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v6; // rdx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v7; // rax

  if ( *((_DWORD *)a2 + 28) == 65625 )
  {
    v4 = (LampArrayRawInputProvider *)((char *)this + 48);
    for ( i = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)*((_QWORD *)this + 6);
          i != v4;
          i = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)i )
    {
      v6 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)i;
      if ( a2 == *(struct PnpDevice **)(*((_QWORD *)i + 2) + 16LL) )
      {
        if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v6 + 1) != i
          || (v7 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)*((_QWORD *)i + 1), *v7 != i) )
        {
          __fastfail(3u);
        }
        *v7 = v6;
        *((_QWORD *)v6 + 1) = v7;
        --*((_QWORD *)this + 8);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(i);
        return;
      }
    }
  }
  else if ( IsEdition(6176LL) )
  {
    ConsumerControlManager::QueueAddRemoveDevice(*((ConsumerControlManager **)this + 31), a2, 0);
  }
}
