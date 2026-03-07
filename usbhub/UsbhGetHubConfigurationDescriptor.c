__int64 __fastcall UsbhGetHubConfigurationDescriptor(__int64 a1, unsigned __int16 **a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 Descriptor; // rbx
  __int64 v7; // r9
  unsigned int v8; // r10d
  __int64 v9; // r9
  int v10; // r10d
  unsigned int v11; // ebx
  __int64 Pool2; // rax
  unsigned __int16 *v13; // rdi
  int v15; // [rsp+20h] [rbp-48h]
  unsigned __int16 v16; // [rsp+78h] [rbp+10h] BYREF

  v4 = -1;
  FdoExt(a1);
  *a2 = 0LL;
  v5 = 255LL;
  v16 = 255;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(64LL, v5, 1112885333LL);
    v13 = (unsigned __int16 *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    Descriptor = (int)UsbhGetDescriptor(a1, &v16, Pool2, 2, v15, 0);
    Log(a1, 8, 1734894385, v16, Descriptor);
    if ( (Descriptor & 0xC0000000) == 0xC0000000 )
      break;
    if ( v8 < 9 )
    {
      LODWORD(Descriptor) = -1073741823;
      UsbhException(a1, 0, 13, (int)v13, v8, -1073741823, -1, usbfile_hub_c, 3945, 0);
      if ( !v13 )
        return (unsigned int)Descriptor;
      break;
    }
    Log(a1, 8, 1734894386, v7, v13[1]);
    if ( v13[1] <= (unsigned __int16)v10 )
    {
      Log(a1, 8, 1734894387, (__int64)v13, Descriptor);
      *a2 = v13;
      return (unsigned int)Descriptor;
    }
    if ( !v4 )
    {
      LODWORD(Descriptor) = -1073741823;
      UsbhException(a1, 0, 13, (int)v13, v10, -1073741823, -1, usbfile_hub_c, 3963, 0);
      break;
    }
    ++v4;
    Log(a1, 8, 1734894418, v9, Descriptor);
    v16 = v13[1];
    v11 = v16;
    ExFreePoolWithTag(v13, 0);
    v5 = v11;
  }
  ExFreePoolWithTag(v13, 0);
  return (unsigned int)Descriptor;
}
