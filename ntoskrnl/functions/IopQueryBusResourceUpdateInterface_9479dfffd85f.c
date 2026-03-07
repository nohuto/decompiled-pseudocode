__int64 __fastcall IopQueryBusResourceUpdateInterface(_QWORD *Object, USHORT **a2)
{
  USHORT *Pool2; // rax
  USHORT *v5; // rbx
  int Interface; // edi

  Pool2 = (USHORT *)ExAllocatePool2(256LL, 40LL, 538996816LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Interface = PnpQueryInterface(Object, (ULONG_PTR)&GUID_BUS_RESOURCE_UPDATE_INTERFACE, 0, 0x28u, 0LL, Pool2);
  if ( Interface >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)Interface;
  }
}
