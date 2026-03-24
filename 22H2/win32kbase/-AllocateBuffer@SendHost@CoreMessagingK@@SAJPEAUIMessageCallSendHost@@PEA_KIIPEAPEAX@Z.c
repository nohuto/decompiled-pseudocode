/*
 * XREFs of ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x1C00A4200
 * Callers:
 *     <none>
 * Callees:
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C004E444 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C00A42C0 (-HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01FF124 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::AllocateBuffer(
        struct IMessageCallSendHost *a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned int a4,
        void **a5)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // di
  int v8; // eax
  int v9; // edx
  size_t v10; // r8
  _WORD *v11; // rdi
  void *v12; // rax
  void *v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = 0LL;
  v5 = CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize;
  v6 = a4;
  *a5 = 0LL;
  if ( a4 > v5 )
    CoreMessagingK::Runtime::BugCheck(1280LL, a4, 0LL);
  if ( a4 > 0xFFAF )
    CoreMessagingK::Runtime::BugCheck(1281LL, a4, 0LL);
  v7 = v5 + 80;
  v8 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>(v7, &v14);
  if ( v8 >= 0 )
  {
    v10 = v7;
    v11 = v14;
    memset(v14, 0, v10);
    v11[33] = 1;
    *((_DWORD *)v11 + 14) = 2;
    *((_DWORD *)v11 + 18) = v6;
    v11[1] = v6 + 80;
    *v11 = v6 + 40;
    v11[2] = 0x8000;
    if ( v6 )
      v12 = v11 + 40;
    else
      v12 = 0LL;
    *a5 = v12;
    v8 = 0;
  }
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)(unsigned int)v8, v9);
}
