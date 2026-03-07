__int64 __fastcall CoreUICallReceive(
        struct IMessageCallReceiveHost *a1,
        __int64 a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        __int64 a5,
        void *a6,
        unsigned int a7)
{
  int v7; // edx
  int v8; // eax
  bool v10; // [rsp+20h] [rbp-1E8h]
  unsigned int v11; // [rsp+28h] [rbp-1E0h]
  _BYTE v12[80]; // [rsp+40h] [rbp-1C8h] BYREF
  int v13; // [rsp+90h] [rbp-178h]
  int v14; // [rsp+C0h] [rbp-148h]
  int v15; // [rsp+C4h] [rbp-144h]
  __int64 (__fastcall **v16)(__int64, unsigned __int64); // [rsp+D8h] [rbp-130h]
  char v17; // [rsp+E0h] [rbp-128h] BYREF

  v14 = 26;
  v15 = 2;
  v7 = CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
         (CoreMessaging::Calling::ReceiveProcessor *)v12,
         a1,
         a3,
         a4,
         v10,
         v11,
         a6,
         a7);
  if ( v7 >= 0 )
  {
    v8 = (*v16)(a5, (unsigned __int64)&v17 & -(__int64)(v13 != 0));
    v7 = 0;
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  return (unsigned int)v7;
}
