__int64 __fastcall CoreMessagingK::ServerPorts::CreateAlpcPort(
        void *const a1,
        struct _UNICODE_STRING *a2,
        struct CoreMessagingK::ServerPortInfo *a3)
{
  int v6; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-71h] BYREF
  _DWORD v10[2]; // [rsp+38h] [rbp-61h] BYREF
  __int64 v11; // [rsp+40h] [rbp-59h]
  struct _UNICODE_STRING *v12; // [rsp+48h] [rbp-51h]
  int v13; // [rsp+50h] [rbp-49h]
  int v14; // [rsp+54h] [rbp-45h]
  void *v15; // [rsp+58h] [rbp-41h]
  __int64 v16; // [rsp+60h] [rbp-39h]
  _QWORD v17[10]; // [rsp+70h] [rbp-29h] BYREF

  v10[1] = 0;
  v14 = 0;
  Handle = 0LL;
  v6 = CoreMessagingK::ServerPorts::EnsureAlpcCallbackRegistered();
  if ( v6 >= 0 )
  {
    v11 = 0LL;
    v16 = 0LL;
    v10[0] = 48;
    v13 = 512;
    v12 = a2;
    v15 = a1;
    memset(v17, 0, 0x48uLL);
    LODWORD(v17[0]) = 1179648;
    v17[2] = 0xFFFFLL;
    v6 = ZwAlpcCreatePort(&Handle, v10, v17);
    if ( v6 >= 0 )
    {
      v9[0] = CoreMessagingK::ServerPorts::s_CallbackObject;
      v9[1] = Handle;
      v6 = ZwAlpcSetInformation(Handle, 9LL, v9);
      if ( v6 < 0 )
      {
        ZwClose(Handle);
      }
      else
      {
        v6 = 0;
        *((_QWORD *)a3 + 1) = Handle;
        CoreMessagingK::ServerPorts::DrainPort(a3);
      }
    }
  }
  return (unsigned int)v6;
}
