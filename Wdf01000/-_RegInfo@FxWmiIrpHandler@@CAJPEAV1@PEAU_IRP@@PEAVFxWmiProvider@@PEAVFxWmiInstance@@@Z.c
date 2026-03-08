/*
 * XREFs of ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002B210
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 */

__int64 __fastcall FxWmiIrpHandler::_RegInfo(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx
  FxDeviceBase *m_DeviceBase; // r13
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r14
  int Blink_high; // r8d
  unsigned __int16 *p_m_ParentObject; // rsi
  unsigned int v11; // edx
  __int64 i; // rax
  unsigned int v13; // r12d
  _UNICODE_STRING *p_m_RegistryPath; // r15
  unsigned int v15; // ecx
  unsigned int v16; // edi
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 MinorFunction; // r9
  unsigned int v19; // r15d
  __int64 v20; // rdx
  unsigned int v21; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rax
  _WORD *v23; // rcx
  unsigned __int16 *v24; // rcx
  PIRP v25; // rax
  unsigned __int8 v27; // [rsp+20h] [rbp-68h]
  unsigned int v28; // [rsp+24h] [rbp-64h]
  unsigned int LowPart; // [rsp+28h] [rbp-60h]
  unsigned int v30; // [rsp+30h] [rbp-58h]
  _LIST_ENTRY *v31; // [rsp+38h] [rbp-50h]
  _UNICODE_STRING *v32; // [rsp+40h] [rbp-48h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  PIRP v34; // [rsp+98h] [rbp+10h]

  v34 = Irp;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  m_DeviceBase = This->m_DeviceBase;
  irql = 0;
  v28 = 0;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  FxNonPagedObject::Lock(This, &irql, (unsigned __int8)Provider);
  p_m_ParentObject = 0LL;
  v11 = 32 * This->m_NumProviders + 24;
  v30 = v11;
  if ( m_DeviceBase[1].m_ChildEntry.Flink )
  {
    p_m_ParentObject = (unsigned __int16 *)&m_DeviceBase[1].m_ParentObject;
  }
  else
  {
    for ( i = *(_QWORD *)&m_DeviceBase[1].m_ObjectFlags; i; i = *(_QWORD *)(i + 224) )
    {
      if ( *(_QWORD *)(i + 272) )
      {
        p_m_ParentObject = (unsigned __int16 *)(i + 264);
        break;
      }
    }
    m_DeviceBase = This->m_DeviceBase;
  }
  v13 = 32 * This->m_NumProviders + 26;
  p_m_RegistryPath = &m_DeviceBase->m_Driver->m_RegistryPath;
  v32 = p_m_RegistryPath;
  if ( p_m_ParentObject )
    v13 += *p_m_ParentObject;
  v15 = v13 + p_m_RegistryPath->Length;
  if ( v15 < v13 || (v16 = v15 + 2, v15 + 2 < v15) )
  {
    v5 = -1073741675;
    FxNonPagedObject::Unlock(This, irql, Blink_high);
  }
  else
  {
    Parameters->NamedPipeType = v16;
    if ( v16 > LowPart )
    {
      v28 = 4;
    }
    else
    {
      Parameters->ReadMode = 0;
      Parameters->MaximumInstances = v11;
      Parameters->CompletionMode = v13;
      Parameters->InboundQuota = This->m_NumProviders;
      Flink = This->m_ProvidersListHead.Flink;
      v28 = v16;
      v31 = Flink;
      MinorFunction = v34->Tail.Overlay.CurrentStackLocation->MinorFunction;
      v27 = MinorFunction;
      if ( This->m_NumProviders )
      {
        v19 = 0;
        do
        {
          v20 = 32LL * v19;
          *(_LIST_ENTRY *)((char *)&Parameters->DefaultTimeout.LowPart + v20) = Flink[3];
          *(unsigned int *)((char *)&Parameters[1].ReadMode + v20) = (unsigned int)Flink[2].Flink;
          Blink_high = HIDWORD(Flink[4].Blink);
          if ( (Blink_high & 4) != 0 )
          {
            v21 = 528384;
          }
          else
          {
            v21 = (HIDWORD(Flink[4].Blink) & 2 | 0x40u) >> 1;
            if ( (Blink_high & 1) != 0 )
              v21 |= 0x40u;
          }
          if ( BYTE2(Flink[5].Blink) )
          {
            v21 |= 0x10000u;
            BYTE2(Flink[5].Blink) = 0;
          }
          *(unsigned int *)((char *)&Parameters[1].NamedPipeType + v20) = v21;
          m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
          *(_QWORD *)((char *)&Parameters[1].CompletionMode + v20) = m_DeviceObject;
          if ( MinorFunction == 11 )
          {
            ObfReferenceObject(m_DeviceObject);
            Flink = v31;
            MinorFunction = v27;
          }
          Flink = Flink->Flink;
          ++v19;
          v31 = Flink;
        }
        while ( v19 < This->m_NumProviders );
        p_m_RegistryPath = v32;
      }
    }
    FxNonPagedObject::Unlock(This, irql, Blink_high);
    if ( v16 <= LowPart )
    {
      v23 = (_WORD *)((char *)Parameters + v30);
      if ( p_m_ParentObject )
      {
        *v23 = *p_m_ParentObject;
        memmove(v23 + 1, *((const void **)p_m_ParentObject + 1), *p_m_ParentObject);
      }
      else
      {
        *v23 = 0;
      }
      v24 = (unsigned __int16 *)((char *)Parameters + v13);
      *v24 = p_m_RegistryPath->Length;
      memmove(v24 + 1, p_m_RegistryPath->Buffer, p_m_RegistryPath->Length);
    }
  }
  v25 = v34;
  v34->IoStatus.Information = v28;
  v25->IoStatus.Status = v5;
  IofCompleteRequest(v25, 0);
  return v5;
}
