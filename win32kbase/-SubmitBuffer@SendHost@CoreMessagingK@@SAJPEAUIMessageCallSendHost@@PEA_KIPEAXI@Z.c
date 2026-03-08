/*
 * XREFs of ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0082070
 * Callers:
 *     <none>
 * Callees:
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C0081668 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C008186C (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C00821B4 (-HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1C00822A0 (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     CoreUICallReceive @ 0x1C00832C8 (CoreUICallReceive.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0273D34 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::SubmitBuffer(
        struct IMessageCallSendHost *a1,
        unsigned __int64 *a2,
        __int64 a3,
        char *a4)
{
  char *v4; // rsi
  unsigned __int16 v5; // cx
  int v6; // eax
  struct AlpcBufferK *v7; // rbx
  int v8; // edi
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  void *v11; // rax
  int v12; // eax
  int v13; // edx
  unsigned __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  struct AlpcBufferK *v16; // [rsp+48h] [rbp-20h] BYREF
  void *v17; // [rsp+50h] [rbp-18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v4 = a4 - 80;
  v15 = 0LL;
  LOBYTE(v18) = 0;
  v17 = &CoreMessagingK::ReceiveHost::s_Vtbl;
  if ( (unsigned __int64)CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80 < 0x200 )
    v5 = 512;
  else
    v5 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80;
  v6 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>(v5, (void **)&v16);
  v7 = v16;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize + 80LL;
    if ( v9 < 0x200 )
      LOWORD(v9) = 512;
    v15 = (unsigned __int16)v9;
    v8 = ZwAlpcSendWaitReceivePort(CoreMessagingK::RegistrarClient::s_Port, 0x20000LL, v4, 0LL, v16, &v15, 0LL, 0LL);
    if ( v8 >= 0 )
    {
      CoreMessagingK::SendHost::ValidateReceiveBuffer(v7, v15);
      v10 = *((_DWORD *)v7 + 18);
      if ( v10 )
        v11 = (char *)v7 + 80;
      else
        v11 = 0LL;
      v12 = CoreUICallReceive((struct IMessageCallReceiveHost *)&v17, (__int64)&v18, v11, v10);
      if ( v12 )
        CoreMessagingK::Runtime::BugCheck(1282LL, v12, 0LL);
      CoreMessagingK::BufferCache::Free(v4);
      v8 = 0;
    }
  }
  CoreMessagingK::BufferCache::Free((char *)v7);
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)(unsigned int)v8, v13);
}
