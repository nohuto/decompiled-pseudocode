/*
 * XREFs of ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x1C0069D40
 * Callers:
 *     <none>
 * Callees:
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C006A538 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C006C1C8 (-HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0235054 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::AllocateBuffer(
        struct IMessageCallSendHost *a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned int a4,
        void **a5)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // di
  unsigned __int16 v7; // bx
  int v8; // eax
  int v9; // edx
  size_t v10; // r8
  _DWORD *v11; // rbx
  void *v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = 0LL;
  v5 = CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize;
  v6 = a4;
  *a5 = 0LL;
  if ( a4 > v5 )
    CoreMessagingK::Runtime::BugCheck(1280LL, a4, 0LL);
  if ( a4 > 0xFFAF )
    CoreMessagingK::Runtime::BugCheck(1281LL, a4, 0LL);
  v7 = v5 + 80;
  v8 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>(v7, &v13);
  if ( v8 >= 0 )
  {
    v10 = v7;
    v11 = v13;
    memset(v13, 0, v10);
    v11[18] = v6;
    *((_WORD *)v11 + 33) = 1;
    v11[14] = 2;
    *((_WORD *)v11 + 1) = v6 + 80;
    *(_WORD *)v11 = v6 + 40;
    v9 = -v6;
    *((_WORD *)v11 + 2) = 0x8000;
    *a5 = (void *)((unsigned __int64)(v11 + 20) & -(__int64)(v6 != 0));
    v8 = 0;
  }
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)(unsigned int)v8, v9);
}
