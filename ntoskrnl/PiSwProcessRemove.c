void __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  const wchar_t *v5; // r11
  const wchar_t **v7; // r8
  __int64 v8; // rcx
  const wchar_t *v9; // r9
  int v10; // r10d
  const wchar_t *v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  const wchar_t **v17; // r9
  const wchar_t **v18; // rcx
  const wchar_t *v19; // rax
  const wchar_t *v20; // rcx
  const wchar_t **v21; // rdx
  wchar_t *v22; // rcx
  const wchar_t **v23; // r9
  char *v24; // rdx
  __int64 v25; // r8
  int v26; // edx
  struct _DEVICE_OBJECT *v27; // rax
  struct _DEVICE_OBJECT *v28; // rbx
  const wchar_t *v29; // rcx
  const wchar_t **Buffer; // [rsp+60h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 312);
  v5 = 0LL;
  v7 = *(const wchar_t ***)v2;
  Buffer = *(const wchar_t ***)v2;
  v8 = *(_QWORD *)(v4 + 40);
  if ( v8 )
    v5 = *(const wchar_t **)(v8 + 48);
  if ( (byte_140C0E10C & 8) != 0 )
  {
    v9 = &word_1408834C0;
    if ( v7 )
    {
      v10 = *((_DWORD *)v7 + 1);
      v11 = v7[2];
    }
    else
    {
      LOBYTE(v10) = 0;
      v11 = &word_1408834C0;
    }
    if ( v7 )
      v9 = v7[1];
    McTemplateK0zzztdd_EtwWriteTransfer(v8, (__int64)v11, (__int64)v7, v9, v11, v5, a2, v10, *(_DWORD *)(v2 + 8));
  }
  v12 = *(_DWORD *)(v2 + 8);
  if ( (v12 & 0x20) == 0 )
  {
    if ( (v12 & 1) != 0 )
    {
      *(_DWORD *)(v2 + 8) = v12 & 0xFFFFFFFE;
      PiSwDeviceInterfacesUpdateState((__int64)Buffer, 0);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( (*(_DWORD *)(v2 + 8) & 0x48) != 8 )
        PiSwUnassociateDeviceObject(a1);
      if ( (*((_DWORD *)Buffer + 1) & 2) != 0 )
      {
        PiSwBusRelationRemove(Buffer, v13, v14);
        v17 = Buffer;
        if ( Buffer[11] )
        {
          *((_DWORD *)Buffer + 1) &= ~4u;
          PiSwPnPInfoFree((__int64)(Buffer + 3));
          v18 = Buffer;
          v19 = Buffer[11];
          *(_OWORD *)(Buffer + 3) = *(_OWORD *)(v19 + 4);
          *(_OWORD *)(v18 + 5) = *(_OWORD *)(v19 + 12);
          *(_OWORD *)(v18 + 7) = *(_OWORD *)(v19 + 20);
          v20 = Buffer[11];
          *(_OWORD *)(v20 + 4) = 0LL;
          *(_OWORD *)(v20 + 12) = 0LL;
          *(_OWORD *)(v20 + 20) = 0LL;
          v21 = Buffer;
          v22 = (wchar_t *)Buffer[19];
          if ( v22 )
          {
            ExFreePoolWithTag(v22, 0x57706E50u);
            v21 = Buffer;
          }
          *((_DWORD *)v21 + 40) = *((_DWORD *)v21[11] + 16);
          Buffer[19] = (const wchar_t *)*((_QWORD *)Buffer[11] + 7);
          *((_DWORD *)Buffer[11] + 16) = 0;
          *((_QWORD *)Buffer[11] + 7) = 0LL;
          v23 = Buffer;
          v24 = (char *)Buffer[21];
          if ( v24 )
          {
            PnpFreeDevPropertyArray(*((_DWORD *)Buffer + 44), v24, 0x57706E50u);
            v23 = Buffer;
          }
          *((_DWORD *)v23 + 44) = *((_DWORD *)v23[11] + 20);
          Buffer[21] = (const wchar_t *)*((_QWORD *)Buffer[11] + 9);
          *((_DWORD *)Buffer[11] + 20) = 0;
          *((_QWORD *)Buffer[11] + 9) = 0LL;
          *((_DWORD *)Buffer + 41) = *((_DWORD *)Buffer[11] + 17);
          PiSwFreeInterfaceList((_QWORD **)Buffer + 23);
          v26 = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)Buffer[11], (__int64)Buffer, v25);
          if ( v26 < 0 )
          {
            v29 = Buffer[18];
            if ( v29 && _InterlockedExchange64((volatile __int64 *)v29 + 13, 0LL) )
            {
              *((_QWORD *)Buffer[18] + 7) = 0LL;
              *((_DWORD *)Buffer[18] + 12) = v26;
              IofCompleteRequest((PIRP)Buffer[18], 0);
              Buffer[18] = 0LL;
            }
          }
          else
          {
            *((_DWORD *)Buffer + 1) &= ~2u;
            v27 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)Buffer[14], 0x746C6644u);
            v28 = v27;
            if ( v27 )
            {
              IoInvalidateDeviceRelations(v27, SingleBusRelations);
              ObfDereferenceObject(v28);
            }
          }
          PiSwQueuedCreateInfoFree((PVOID)Buffer[11]);
          Buffer[11] = 0LL;
          v17 = Buffer;
        }
        if ( !v17[14] )
        {
          if ( (byte_140C0E10C & 8) != 0 )
            McTemplateK0zz_EtwWriteTransfer(
              v15,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
              v16,
              v17[1],
              v17[2]);
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
}
