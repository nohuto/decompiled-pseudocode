__int64 __fastcall DpiFdoHandleQueryInterface(__int64 a1, IRP *a2)
{
  __int64 v2; // r13
  __int64 (__fastcall **v3)(PVOID); // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int v7; // ebp
  _QWORD *v8; // rdx
  _QWORD *p_SecurityQos; // r8
  __int64 v10; // rcx
  unsigned int v11; // edi

  v2 = *(_QWORD *)(a1 + 64);
  v3 = &off_1C013AA88;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(v3 - 1);
    p_SecurityQos = &CurrentStackLocation->Parameters.Create.SecurityContext->SecurityQos;
    v10 = *v8 - *p_SecurityQos;
    if ( *v8 == *p_SecurityQos )
      v10 = v8[1] - p_SecurityQos[1];
    if ( !v10 )
    {
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*v3)(
              a1,
              CurrentStackLocation->Parameters.QueryInterface.Size,
              CurrentStackLocation->Parameters.QueryInterface.Version,
              (LARGE_INTEGER)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
              CurrentStackLocation->Parameters.CreatePipe.Parameters);
      if ( v11 != -1073741637 )
        break;
    }
    ++v7;
    v3 += 2;
    if ( v7 >= 5 )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
    }
  }
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return v11;
}
