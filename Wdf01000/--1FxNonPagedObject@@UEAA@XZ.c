/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30
 * Callers:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C0002EE8 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??1FxDmaEnabler@@UEAA@XZ @ 0x1C001AB5C (--1FxDmaEnabler@@UEAA@XZ.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C001AC70 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C0023110 (--1FxDpc@@UEAA@XZ.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x1C0028180 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C0028B70 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??1FxWmiIrpHandler@@UEAA@XZ @ 0x1C0029B20 (--1FxWmiIrpHandler@@UEAA@XZ.c)
 *     ??_GFxCompanionTarget@@UEAAPEAXI@Z @ 0x1C002DD30 (--_GFxCompanionTarget@@UEAAPEAXI@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C0038CC8 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C003F3F0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C003FE58 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C0040834 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C0040DE4 (--1FxTimer@@UEAA@XZ.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C0041CE0 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0042BDC (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C004F03C (--1FxCollection@@UEAA@XZ.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C00526D0 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C0059894 (--1FxUsbPipe@@MEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x1C005C440 (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C005E93C (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0061FD8 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C006344C (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0070ED0 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1C007E644 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??1FxPkgGeneral@@UEAA@XZ @ 0x1C0084DA4 (--1FxPkgGeneral@@UEAA@XZ.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1C0089240 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C001ACB0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxNonPagedObject::~FxNonPagedObject(FxNonPagedObject *this, unsigned int a2)
{
  _LIST_ENTRY *Blink; // rcx

  this->__vftable = (FxNonPagedObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_ChildEntry.Blink;
    if ( Blink )
    {
      FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Blink, a2);
      this[-1].m_ChildEntry.Blink = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this);
}
