__int64 __fastcall PnpCollectOpenHandlesCallBack(const void *a1, __int64 a2, const void *a3, int a4, __int64 a5)
{
  unsigned int *v5; // rdi

  v5 = (unsigned int *)(a2 + 1088);
  if ( *(_BYTE *)(a5 + 36) )
    IopDebugPrint(0x14u, "  DeviceObject:%p ProcessID:%dT FileObject:%p Handle:%dT\n", a1, *(_QWORD *)v5, a3, a4);
  if ( *(_BYTE *)(a5 + 37) )
    PnpAddVetoInformation(*(PVOID *)a5, (_QWORD *)(a5 + 16), *v5);
  ++*(_DWORD *)(a5 + 32);
  return 0LL;
}
