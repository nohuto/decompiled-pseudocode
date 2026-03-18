/*
 * XREFs of UsbhPdoPnp_QueryId @ 0x1C0054FF0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 *     memmove @ 0x1C001F540 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C00548CC (UsbhPdoPnp_EnablePdo.c)
 *     UsbhAcquirePdoUxdLock @ 0x1C0058F64 (UsbhAcquirePdoUxdLock.c)
 *     UsbhReleasePdoUxdLock @ 0x1C005A3E8 (UsbhReleasePdoUxdLock.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryId(__int64 a1, IRP *a2)
{
  __int64 v3; // rbp
  _DWORD *v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS Status; // esi
  _DWORD *v8; // r14
  __int64 v9; // rcx
  unsigned int Length; // ecx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rax
  _DWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  _DWORD *v18; // rbx
  __int64 v19; // rax
  __int64 Pool2; // rax
  unsigned __int64 v21; // rdi
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
    v11 = Length - 1;
    if ( (_DWORD)v11 )
    {
      v11 = (unsigned int)(v11 - 1);
      if ( (_DWORD)v11 )
      {
        v11 = (unsigned int)(v11 - 1);
        if ( (_DWORD)v11 )
        {
          if ( (_DWORD)v11 == 2 )
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
          v14 = 532LL;
          v3 = (v8[355] & 0x200000) != 0 ? 0xC : 0;
        }
        else
        {
          v14 = 536LL;
        }
      }
      else
      {
        v14 = 528LL;
      }
    }
    else
    {
      v14 = 524LL;
    }
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      v15 = PdoExt(a1);
      v16 = (_QWORD *)UsbhIncHubBusy(*((_QWORD *)v8 + 148), (__int64)(v15 + 236), a1, 1346728819, 1);
      KeWaitForSingleObject(v8 + 724, Executive, 0, 0, 0LL);
      UsbhPdoPnp_EnablePdo(a1);
      KeSetEvent((PRKEVENT)(v8 + 724), 0, 0);
      PdoExt(a1);
      UsbhDecHubBusy(*((_QWORD *)v8 + 148), v17, v16);
    }
    v14 = 520LL;
  }
  v18 = &v8[v14];
  if ( !&v8[v14] || (v19 = (unsigned int)v18[1], !(_DWORD)v19) || !*((_QWORD *)v18 + 1) )
  {
LABEL_9:
    if ( !CurrentStackLocation->Parameters.Read.Length )
      Status = -1073741670;
    v12 = Status;
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(256LL, v19 + v3, 1112885333LL);
  v21 = Pool2;
  if ( Pool2 )
  {
    if ( v3 )
    {
      *(_QWORD *)Pool2 = *(_QWORD *)L"MSFT30";
      *(_DWORD *)(Pool2 + 8) = *(_DWORD *)L"30";
    }
    memmove((void *)(Pool2 + v3), *((const void **)v18 + 1), (unsigned int)v18[1]);
    a2->IoStatus.Information = v21;
    v12 = 0;
  }
  else
  {
    v12 = -1073741670;
  }
LABEL_12:
  UsbhReleasePdoUxdLock(v11, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      v12);
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 0);
  return v12;
}
