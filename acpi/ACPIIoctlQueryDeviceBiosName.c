__int64 __fastcall ACPIIoctlQueryDeviceBiosName(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v5; // esi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rbx
  struct _UNICODE_STRING Src; // [rsp+20h] [rbp-18h] BYREF

  a2->IoStatus.Information = 0LL;
  Src = 0LL;
  v5 = ACPIQueryDeviceBiosNameEx(a1, 1, &Src);
  if ( v5 >= 0 )
  {
    v6 = Src.Length + 2;
    if ( *(_DWORD *)(a3 + 8) >= v6 )
    {
      v7 = v6;
      memmove(a2->AssociatedIrp.MasterIrp, Src.Buffer, v6);
      a2->IoStatus.Information = v7;
    }
    else
    {
      v5 = -1073741789;
    }
  }
  if ( Src.Buffer )
  {
    ExFreePoolWithTag(Src.Buffer, 0x53706341u);
    Src = 0LL;
  }
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v5;
}
