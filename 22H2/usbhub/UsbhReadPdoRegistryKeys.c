/*
 * XREFs of UsbhReadPdoRegistryKeys @ 0x1C0046E00
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0057340 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhGetD3Policy @ 0x1C00456A4 (UsbhGetD3Policy.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0045A10 (UsbhGetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhReadPdoRegistryKeys(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  wchar_t **v2; // rbx
  int v4; // eax
  int v5; // eax
  unsigned int i; // r15d
  PVOID PoolWithTag; // rax
  void *v8; // rdi
  unsigned int v9; // esi
  ULONG v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+40h] BYREF
  int v14; // [rsp+88h] [rbp+48h] BYREF

  v12 = a1;
  v14 = 0;
  v2 = &PdoKeyValues;
  if ( PdoKeyValues )
  {
    do
    {
      v4 = *((_DWORD *)v2 + 2);
      v13 = 0;
      LODWORD(v12) = v4;
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 3 )
        {
          LOBYTE(v11) = *((_BYTE *)v2 + 12);
          if ( (int)UsbhGetPdoRegistryParameter(a2, *v2, &v14, 4u, &v12, &v13, v11) >= 0
            && v13 == 4
            && (_DWORD)v12 == 4
            && v14 )
          {
            ((void (__fastcall *)(struct _DEVICE_OBJECT *, wchar_t *, int *, __int64))v2[3])(a2, *v2, &v14, 4LL);
          }
        }
      }
      else
      {
        for ( i = 8; ; i = v9 )
        {
          PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), i, 0x42554855u);
          v8 = PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, i);
          LOBYTE(v11) = *((_BYTE *)v2 + 12);
          if ( (UsbhGetPdoRegistryParameter(a2, *v2, v8, i, &v12, &v13, v11) & 0xC0000000) == 0xC0000000 )
            goto LABEL_17;
          if ( (_DWORD)v12 != 1 )
            goto LABEL_17;
          v9 = v13;
          if ( !v13 )
            goto LABEL_17;
          if ( v13 <= i )
          {
            ((void (__fastcall *)(struct _DEVICE_OBJECT *, wchar_t *, void *, _QWORD))v2[3])(a2, *v2, v8, v13);
LABEL_17:
            ExFreePoolWithTag(v8, 0);
            break;
          }
          ExFreePoolWithTag(v8, 0);
        }
      }
      v2 += 4;
    }
    while ( *v2 );
  }
  UsbhGetD3Policy(a2);
  return 0LL;
}
