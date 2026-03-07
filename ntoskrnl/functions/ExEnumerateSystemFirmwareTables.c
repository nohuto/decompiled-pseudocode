__int64 __fastcall ExEnumerateSystemFirmwareTables(int a1, void *a2, int a3, _DWORD *a4)
{
  unsigned int v9; // ebp
  __int64 Pool2; // rax
  _DWORD *v11; // rbx
  int SystemFirmwareTableInformation; // edi
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  if ( !a2 && a3 )
    return 3221225485LL;
  v9 = a3 + 16;
  Pool2 = ExAllocatePool2(256LL, (unsigned int)(a3 + 16), 1413894721LL);
  v11 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 4) = 0;
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_DWORD *)(Pool2 + 12) = a3;
    *(_DWORD *)Pool2 = a1;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((char *)Pool2, 0, v9, &v13);
    if ( (int)(SystemFirmwareTableInformation + 0x80000000) < 0 || SystemFirmwareTableInformation == -1073741789 )
    {
      if ( a4 )
        *a4 = v11[3];
      if ( SystemFirmwareTableInformation >= 0 )
      {
        if ( a2 )
          memmove(a2, v11 + 4, (unsigned int)(v13 - 16));
      }
    }
    ExFreePoolWithTag(v11, 0x54465241u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SystemFirmwareTableInformation;
}
