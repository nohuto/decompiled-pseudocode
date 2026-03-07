void __fastcall PopDiagTraceCoolingExtensionPassiveUpdate(__int64 a1)
{
  REGHANDLE v2; // rdi
  char v3; // al
  char v4; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_PASSIVE_UPDATE) )
    {
      v3 = *(_BYTE *)(a1 + 66);
      UserData.Reserved = 0;
      v9 = 0;
      v4 = v3;
      v5 = a1;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = &v5;
      UserData.Size = 1;
      v8 = 8;
      EtwWrite(v2, &POP_ETW_EVENT_COOLING_EXTENSION_PASSIVE_UPDATE, 0LL, 2u, &UserData);
    }
  }
}
