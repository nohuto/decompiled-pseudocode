__int64 __fastcall PopFxAcpiDispatchNotification(__int64 a1)
{
  char v1; // bl
  int v3; // r9d
  int v4; // ecx
  _QWORD *v5; // r10
  void *v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  char v10; // [rsp+60h] [rbp+20h] BYREF
  char v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  v9 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v11 = 0;
  v10 = 0;
  if ( (unsigned __int8)PopFxAcpiValidateParameters() )
  {
    v5 = *(_QWORD **)(a1 + 16);
    switch ( *(_DWORD *)a1 )
    {
      case 1:
        v4 = PopFxAcpiPrepareDevice(*v5, *(_QWORD *)(a1 + 16), &v9, &v11);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(a1 + 40) = v9;
          *(_BYTE *)(a1 + 48) = v11;
        }
        break;
      case 2:
        PopPluginAcpiNotificationStrict(*(_QWORD *)(a1 + 40), 2uLL, *(_QWORD *)(a1 + 16));
        v4 = 0;
        break;
      case 3:
        v4 = PopFxAcpiRegisterDevice(*v5, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 16), &v12, &v13);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(a1 + 48) = v12;
          *(_QWORD *)(a1 + 56) = v13;
        }
        break;
      default:
        v6 = *(void **)(a1 + 8);
        if ( *(_DWORD *)a1 != 4 )
        {
          v7 = PopFxAcpiForwardNotification((_DWORD)v6, *(_DWORD *)a1, *(_QWORD *)(a1 + 16), v3, (__int64)&v10);
          v1 = v10;
          v4 = v7;
          goto LABEL_15;
        }
        v4 = PopFxAcpiUnregisterDevice(v6);
        break;
    }
    v1 = 1;
    goto LABEL_15;
  }
  v4 = -1073741823;
LABEL_15:
  *(_BYTE *)(a1 + 32) = v1;
  return (unsigned int)v4;
}
