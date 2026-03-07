__int64 __fastcall WmipIoControl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // r15d
  struct _IRP *MasterIrp; // rdi
  unsigned int Length; // esi
  unsigned int LowPart; // r12d
  __int64 Options; // r14
  int Blink_high; // eax
  int AllDataMultiple; // eax
  int v13; // ebx
  __int64 v15; // rdx
  unsigned __int8 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned __int8 v20; // r9
  ACCESS_MASK DesiredAccess[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object_8[2]; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v25[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A8h] [rbp-60h]
  char v28; // [rsp+B8h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DesiredAccess[0] = Length;
  if ( LowPart > 0x224158 )
  {
    switch ( LowPart )
    {
      case 0x224160u:
        goto LABEL_79;
      case 0x228008u:
        v13 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, 0LL);
        if ( v13 < 0 )
          goto LABEL_12;
        v20 = 2;
        break;
      case 0x22800Cu:
        v13 = WmipProbeWnodeSingleItem(MasterIrp, (unsigned int)Options);
        if ( v13 < 0 )
          goto LABEL_12;
        v20 = 3;
        break;
      default:
        switch ( LowPart )
        {
          case 0x228024u:
            v13 = WmipProbeWnodeMethodItem(MasterIrp, (unsigned int)Options, Length);
            if ( v13 < 0 )
              goto LABEL_12;
            v16 = 9;
            goto LABEL_51;
          case 0x22811Cu:
            if ( (_DWORD)Options == 22 )
            {
              AllDataMultiple = WmipTranslateFileHandle(MasterIrp, DesiredAccess);
              goto LABEL_10;
            }
LABEL_71:
            v13 = -1073741823;
            goto LABEL_14;
          case 0x22812Cu:
            if ( Length >= 0x38 && &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
            {
              v19 = *(_DWORD *)&MasterIrp->Type - 1;
              if ( v19 <= 0xFFE && &MasterIrp->Flags + 2 * v19 <= (ULONG *)((char *)MasterIrp + Options) )
              {
                LOBYTE(a4) = 1;
                AllDataMultiple = WmipQueryAllDataMultiple(
                                    0,
                                    0,
                                    (int)a2,
                                    a4,
                                    MasterIrp,
                                    Length,
                                    (__int64)MasterIrp,
                                    (__int64)DesiredAccess);
                goto LABEL_10;
              }
            }
            break;
          case 0x228130u:
            if ( Length >= 0x38 )
            {
              v17 = (unsigned __int64)MasterIrp + Options;
              if ( &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
              {
                v18 = (unsigned int)(*(_DWORD *)&MasterIrp->Type - 1);
                if ( (unsigned int)v18 <= 0xFFE && (unsigned __int64)&MasterIrp->ThreadListEntry + 24 * v18 <= v17 )
                {
                  LOBYTE(v17) = 1;
                  AllDataMultiple = WmipQuerySingleMultiple(
                                      (_DWORD)a2,
                                      v17,
                                      (_DWORD)MasterIrp,
                                      Length,
                                      (__int64)MasterIrp,
                                      *(_DWORD *)&MasterIrp->Type,
                                      0LL,
                                      0LL,
                                      (__int64)DesiredAccess);
                  goto LABEL_10;
                }
              }
            }
            break;
          case 0x228144u:
            if ( (unsigned int)Options < 0x10
              || Length < 0x38
              || *(_DWORD *)&MasterIrp->Type > (unsigned int)(Options - 8) >> 3 )
            {
              v13 = -1073741808;
              goto LABEL_12;
            }
            AllDataMultiple = WmipReceiveNotifications((unsigned int *)MasterIrp, (int *)DesiredAccess, (__int64)a2);
            goto LABEL_10;
          default:
            goto LABEL_56;
        }
LABEL_68:
        v13 = -1073741811;
        goto LABEL_12;
    }
    DesiredAccess[0] = Options;
    AllDataMultiple = WmipQuerySetExecuteSI(0LL, a2, 1, v20, (__int64)MasterIrp, Options, DesiredAccess);
    Length = 0;
    goto LABEL_11;
  }
  switch ( LowPart )
  {
    case 0x224158u:
      if ( Length >= 0x10 )
      {
        AllDataMultiple = WmipEnumerateMofResources(MasterIrp, Length, DesiredAccess);
        goto LABEL_10;
      }
      goto LABEL_68;
    case 0x224000u:
      if ( Length >= 0x48 )
      {
        if ( (unsigned int)Options >= 0x30 )
        {
          Blink_high = HIDWORD(MasterIrp->ThreadListEntry.Blink);
          if ( (Blink_high & 1) != 0 && (_DWORD)Options == *(_DWORD *)&MasterIrp->Type && (Blink_high & 0xFFFFFF7E) == 0 )
          {
            AllDataMultiple = WmipQueryAllData(0LL, a2, 1, (__int64)MasterIrp, Length, DesiredAccess);
LABEL_10:
            Length = DesiredAccess[0];
LABEL_11:
            v13 = AllDataMultiple;
            goto LABEL_12;
          }
        }
        goto LABEL_71;
      }
      goto LABEL_52;
    case 0x224004u:
      if ( Length < 0x38 )
        goto LABEL_52;
      LOBYTE(a4) = 1;
      v13 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, a4);
      if ( v13 < 0 )
        goto LABEL_12;
      v16 = 1;
LABEL_51:
      DesiredAccess[0] = Options;
      AllDataMultiple = WmipQuerySetExecuteSI(0LL, a2, 1, v16, (__int64)MasterIrp, Length, DesiredAccess);
      goto LABEL_10;
    case 0x224108u:
      goto LABEL_24;
    case 0x224124u:
      if ( Length >= 4 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
        Length = 4;
        v13 = 0;
        goto LABEL_14;
      }
      goto LABEL_52;
    case 0x224134u:
LABEL_79:
      if ( Length >= 8 )
      {
        AllDataMultiple = WmipEnumerateGuids(LowPart, MasterIrp, Length, DesiredAccess);
        goto LABEL_10;
      }
      goto LABEL_52;
  }
  if ( LowPart != 2244920 )
  {
    if ( LowPart != 2244924 && LowPart != 2244928 )
    {
LABEL_56:
      v13 = -1073741808;
      goto LABEL_14;
    }
LABEL_24:
    v26 = 0LL;
    v27 = 0;
    Handle = 0LL;
    memset(v25, 0, sizeof(v25));
    DesiredAccess[0] = 0;
    Object = 0LL;
    *(_OWORD *)Object_8 = 0LL;
    v13 = WmipProbeWmiOpenGuidBlock(
            (unsigned int)v25,
            (unsigned int)Object_8,
            (unsigned int)&v28,
            (unsigned int)DesiredAccess,
            (__int64)MasterIrp,
            Options,
            Length);
    if ( v13 >= 0 )
    {
      LOBYTE(v15) = 1;
      v13 = WmipOpenBlock(LowPart, v15, (__int64)v25, DesiredAccess[0], &Object);
      if ( v13 >= 0 )
      {
        v13 = ObOpenObjectByPointer(Object, 0, 0LL, DesiredAccess[0], WmipGuidObjectType, 1, &Handle);
        if ( v13 >= 0 )
        {
          if ( IoIs32bitProcess(0LL) )
            LODWORD(MasterIrp->MdlAddress) = (_DWORD)Handle;
          else
            *(_QWORD *)&MasterIrp->Flags = Handle;
        }
        ObfDereferenceObject(Object);
      }
    }
LABEL_12:
    if ( v13 == 259 || v13 == -1073741536 )
      return (unsigned int)v13;
    goto LABEL_14;
  }
  if ( Length >= 0x10 )
  {
    AllDataMultiple = WmipQueryGuidInfo(MasterIrp);
    Length = 16;
    goto LABEL_11;
  }
LABEL_52:
  v13 = -1073741789;
LABEL_14:
  a2->IoStatus.Status = v13;
  if ( v13 >= 0 )
    v5 = Length;
  a2->IoStatus.Information = v5;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v13;
}
