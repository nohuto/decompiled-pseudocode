/*
 * XREFs of UsbhGetHubConfigurationDescriptor @ 0x1C002CC90
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C002A738 (UsbhConfigureUsbHub.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhGetDescriptor @ 0x1C002C3D0 (UsbhGetDescriptor.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubConfigurationDescriptor(__int64 a1, unsigned __int16 **a2)
{
  int v4; // ebp
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v8; // rdi
  __int64 Descriptor; // rbx
  __int64 v10; // r9
  unsigned int v11; // r10d
  __int64 v12; // r9
  unsigned __int16 v13; // bx
  int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+48h] [rbp-20h]
  unsigned __int16 v18; // [rsp+78h] [rbp+10h] BYREF

  v4 = -1;
  FdoExt(a1);
  *a2 = 0LL;
  v5 = 255;
  v18 = 255;
  while ( 1 )
  {
    v6 = v5;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), v5, 0x42554855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, v6);
    Descriptor = (int)UsbhGetDescriptor(a1, &v18, (__int64)v8, 2, v15, 0);
    Log(a1, 8, 1734894385, v18, Descriptor);
    if ( (Descriptor & 0xC0000000) == 0xC0000000 )
      goto LABEL_12;
    if ( v11 < 9 )
    {
      LOBYTE(v17) = 0;
      v16 = 3945;
      goto LABEL_11;
    }
    Log(a1, 8, 1734894386, v10, v8[1]);
    if ( v8[1] <= (unsigned __int16)v11 )
    {
      Log(a1, 8, 1734894387, (__int64)v8, Descriptor);
      *a2 = v8;
      return (unsigned int)Descriptor;
    }
    if ( !v4 )
    {
      LOBYTE(v17) = 0;
      v16 = 3963;
LABEL_11:
      LODWORD(Descriptor) = -1073741823;
      UsbhException(a1, 0, 13, (int)v8, v11, -1073741823, -1, usbfile_hub_c, v16, v17);
LABEL_12:
      ExFreePoolWithTag(v8, 0);
      return (unsigned int)Descriptor;
    }
    ++v4;
    Log(a1, 8, 1734894418, v12, Descriptor);
    v18 = v8[1];
    v13 = v18;
    ExFreePoolWithTag(v8, 0);
    v5 = v13;
  }
}
