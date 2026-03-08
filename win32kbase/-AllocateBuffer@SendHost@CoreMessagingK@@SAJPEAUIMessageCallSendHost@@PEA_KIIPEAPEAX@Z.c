/*
 * XREFs of ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x1C00821E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C0081668 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C00821B4 (-HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0273D34 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
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
  size_t v9; // r8
  _DWORD *v10; // rbx
  void *v12; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0LL;
  v5 = CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize;
  v6 = a4;
  *a5 = 0LL;
  if ( a4 > v5 )
    CoreMessagingK::Runtime::BugCheck(1280LL, a4, 0LL);
  if ( a4 > 0xFFAF )
    CoreMessagingK::Runtime::BugCheck(1281LL, a4, 0LL);
  v7 = v5 + 80;
  v8 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>(v7, &v12);
  if ( v8 >= 0 )
  {
    v9 = v7;
    v10 = v12;
    memset(v12, 0, v9);
    v10[18] = v6;
    *((_WORD *)v10 + 33) = 1;
    v10[14] = 2;
    *((_WORD *)v10 + 1) = v6 + 80;
    *(_WORD *)v10 = v6 + 40;
    *((_WORD *)v10 + 2) = 0x8000;
    *a5 = (void *)((unsigned __int64)(v10 + 20) & -(__int64)(v6 != 0));
    v8 = 0;
  }
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)(unsigned int)v8);
}
