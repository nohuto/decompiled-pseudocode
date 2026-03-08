/*
 * XREFs of UsbhReadPdoRegistryKeys @ 0x1C0046364
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0056570 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhGetD3Policy @ 0x1C0044C98 (UsbhGetD3Policy.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0045000 (UsbhGetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhReadPdoRegistryKeys(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  wchar_t **v2; // rdi
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // r15d
  void *Pool2; // rax
  void *v9; // rbx
  ULONG v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  int v13; // [rsp+80h] [rbp+40h] BYREF
  int v14; // [rsp+88h] [rbp+48h] BYREF

  v12 = a1;
  v14 = 0;
  v2 = &PdoKeyValues;
  if ( PdoKeyValues )
  {
    do
    {
      v4 = *((_DWORD *)v2 + 2);
      LODWORD(v12) = 0;
      v13 = v4;
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 3 )
        {
          LOBYTE(v11) = *((_BYTE *)v2 + 12);
          if ( (int)UsbhGetPdoRegistryParameter(a2, *v2, &v14, 4u, &v13, &v12, v11) >= 0
            && (_DWORD)v12 == 4
            && v13 == 4
            && v14 )
          {
            ((void (__fastcall *)(struct _DEVICE_OBJECT *, wchar_t *, int *, __int64))v2[3])(a2, *v2, &v14, 4LL);
          }
        }
      }
      else
      {
        v6 = 8LL;
        v7 = 8;
        while ( 1 )
        {
          Pool2 = (void *)ExAllocatePool2(64LL, v6, 1112885333LL);
          v9 = Pool2;
          if ( !Pool2 )
            break;
          LOBYTE(v11) = *((_BYTE *)v2 + 12);
          if ( (UsbhGetPdoRegistryParameter(a2, *v2, Pool2, v7, &v13, &v12, v11) & 0xC0000000) == 0xC0000000 )
            goto LABEL_21;
          if ( v13 != 1 || !(_DWORD)v12 )
            goto LABEL_20;
          if ( (unsigned int)v12 <= v7 )
          {
            ((void (__fastcall *)(struct _DEVICE_OBJECT *, wchar_t *, void *, _QWORD))v2[3])(
              a2,
              *v2,
              v9,
              (unsigned int)v12);
LABEL_20:
            if ( !v9 )
              break;
LABEL_21:
            ExFreePoolWithTag(v9, 0);
            break;
          }
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          v7 = v12;
          v6 = (unsigned int)v12;
        }
      }
      v2 += 4;
    }
    while ( *v2 );
  }
  UsbhGetD3Policy(a2);
  return 0LL;
}
