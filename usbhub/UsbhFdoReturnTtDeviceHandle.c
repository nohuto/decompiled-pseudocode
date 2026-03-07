NTSTATUS __fastcall UsbhFdoReturnTtDeviceHandle(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  __int64 *CurrentStackLocation; // r13
  PDEVICE_OBJECT *v7; // r12
  int v8; // r11d
  __int64 *v9; // r15
  signed int v10; // ebx
  _WORD *v11; // r14
  int v12; // r11d
  __int64 v13; // r10
  int v14; // r11d
  int v15; // r8d
  __int64 v16; // rax
  _IO_STACK_LOCATION *v17; // rax
  _DWORD *v19; // [rsp+70h] [rbp+18h]

  CurrentStackLocation = (__int64 *)a3->Tail.Overlay.CurrentStackLocation;
  v19 = PdoExt(a2);
  v7 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 8, 1950631985, a2, (__int64)a3);
  v9 = (__int64 *)CurrentStackLocation[1];
  v10 = 0;
  v11 = (_WORD *)CurrentStackLocation[4];
  if ( v9 && v11 )
  {
    Log(a1, v8, 1950631986, CurrentStackLocation[2], CurrentStackLocation[1]);
    Log(a1, v12, 1950631987, (__int64)v11, (unsigned __int16)*v11);
    v15 = *((_DWORD *)v7 + 640);
    if ( (v15 & 0x40) != 0 )
    {
      *v9 = UsbhGetDeviceHandle(a1, v13);
      v16 = *((unsigned __int16 *)v19 + 714);
      *v11 = v16;
      Log(a1, 8, 1950631988, *v9, v16);
      v10 = *v9 == 0 ? 0xC0000001 : 0;
    }
    else
    {
      if ( (v15 & 1) == 0 )
      {
        v17 = a3->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
        *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
        v17[-1].FileObject = v17->FileObject;
        v17[-1].Control = 0;
        UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
        return IofCallDriver(v7[151], a3);
      }
      *v9 = 0LL;
      *v11 = 0;
      Log(a1, v14, 1950632050, 0LL, 0LL);
    }
  }
  else
  {
    v10 = -1073741811;
  }
  Log(a1, v8, 1950632024, 0LL, v10);
  a3->IoStatus.Status = v10;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v10;
}
