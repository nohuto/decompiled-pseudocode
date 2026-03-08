/*
 * XREFs of ?HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z @ 0x1C006F1F0
 * Callers:
 *     HmgNextOwned @ 0x1C006DD80 (HmgNextOwned.c)
 *     HmgNextGarbageCollectible @ 0x1C0186160 (HmgNextGarbageCollectible.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall HmgpComputeHandleValue(
        const struct OBJECT *a1,
        unsigned __int16 a2,
        struct ENTRYOBJ *const a3)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int64 v6; // rbx

  v4 = *(_QWORD *)a1;
  v5 = *((unsigned __int16 *)a3 + 6) << 16;
  v6 = a2 | (unsigned __int64)v5;
  if ( (_DWORD)v6 == (unsigned int)*(_QWORD *)a1 )
    return (struct HOBJ__ *)(a2 | (unsigned __int64)v5);
  SGDGetSessionState(a1);
  DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 47LL, a3, v4, v6, 0LL, 0LL, 0);
  return 0LL;
}
