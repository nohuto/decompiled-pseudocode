__int64 __fastcall UsbhPdoPnp_QueryId(__int64 a1, IRP *a2)
{
  __int64 v3; // rbp
  _DWORD *v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS Status; // esi
  _DWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int Length; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // ebx
  __int64 v17; // rax
  _DWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  _DWORD *v21; // rbx
  __int64 v22; // rax
  __int64 Pool2; // rax
  unsigned __int64 v24; // rdi
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0LL;
  v5 = PdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  v8 = v5;
  UsbhAcquirePdoUxdLock(v9, a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    v12 = Length - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 2 )
          {
            if ( *((_BYTE *)v8 + 2732) )
            {
              GuidString = 0LL;
              Status = RtlStringFromGUID((const GUID *const)(v8 + 679), &GuidString);
              if ( Status >= 0 )
              {
                Status = 0;
                a2->IoStatus.Information = (unsigned __int64)GuidString.Buffer;
              }
            }
          }
          goto LABEL_9;
        }
        if ( *((_QWORD *)v8 + 267) )
        {
          v17 = 532LL;
          v3 = (v8[355] & 0x200000) != 0 ? 0xC : 0;
        }
        else
        {
          v17 = 536LL;
        }
      }
      else
      {
        v17 = 528LL;
      }
    }
    else
    {
      v17 = 524LL;
    }
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      v18 = PdoExt(a1);
      v19 = (_QWORD *)UsbhIncHubBusy(*((_QWORD *)v8 + 148), (__int64)(v18 + 236), a1, 1346728819, 1);
      KeWaitForSingleObject(v8 + 724, Executive, 0, 0, 0LL);
      UsbhPdoPnp_EnablePdo(a1);
      KeSetEvent((PRKEVENT)(v8 + 724), 0, 0);
      PdoExt(a1);
      UsbhDecHubBusy(*((_QWORD *)v8 + 148), v20, v19);
    }
    v17 = 520LL;
  }
  v21 = &v8[v17];
  if ( !&v8[v17] || (v22 = (unsigned int)v21[1], !(_DWORD)v22) || !*((_QWORD *)v21 + 1) )
  {
LABEL_9:
    if ( !CurrentStackLocation->Parameters.Read.Length )
      Status = -1073741670;
    v15 = Status;
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(256LL, v22 + v3, 1112885333LL);
  v24 = Pool2;
  if ( Pool2 )
  {
    if ( v3 )
    {
      *(_QWORD *)Pool2 = *(_QWORD *)L"MSFT30";
      *(_DWORD *)(Pool2 + 8) = *(_DWORD *)L"30";
    }
    memmove((void *)(Pool2 + v3), *((const void **)v21 + 1), (unsigned int)v21[1]);
    a2->IoStatus.Information = v24;
    v15 = 0;
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_12:
  UsbhReleasePdoUxdLock(v10, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      v15);
  a2->IoStatus.Status = v15;
  IofCompleteRequest(a2, 0);
  return v15;
}
