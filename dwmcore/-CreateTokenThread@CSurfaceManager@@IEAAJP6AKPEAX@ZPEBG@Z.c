/*
 * XREFs of ?CreateTokenThread@CSurfaceManager@@IEAAJP6AKPEAX@ZPEBG@Z @ 0x1800CCBF0
 * Callers:
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800CC15C (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CSurfaceManager::CreateTokenThread(
        CSurfaceManager *this,
        unsigned int (*a2)(void *),
        const unsigned __int16 *a3)
{
  CSurfaceManager *v3; // rdi
  _QWORD *v4; // rbx
  HANDLE EventW; // rax
  HANDLE *v6; // rbx
  HANDLE Thread; // rax
  unsigned int v8; // ebx
  int v10; // r9d
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]

  v3 = this;
  if ( *((_BYTE *)this + 144) )
  {
    v8 = -2147467260;
    v10 = -2147467260;
    dwCreationFlags = 32;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v10, dwCreationFlags, 0LL);
    return v8;
  }
  v4 = (_QWORD *)((char *)this + 128);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v4,
    EventW);
  if ( ((*v4 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v10 = -2147024882;
    dwCreationFlags = 40;
    v8 = -2147024882;
    goto LABEL_9;
  }
  v6 = (HANDLE *)((char *)v3 + 120);
  Thread = CreateThread(0LL, 0LL, CGlobalSurfaceManager::s_TokenThreadMain, v3, 4u, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)v3 + 120,
    Thread);
  this = (CSurfaceManager *)*((_QWORD *)v3 + 15);
  if ( (((unsigned __int64)this + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v10 = -2147024882;
    v8 = -2147024882;
    dwCreationFlags = 51;
    goto LABEL_9;
  }
  SetThreadDescription(this, L"DWM Token Thread");
  SetThreadPriority(*v6, 15);
  ResumeThread(*v6);
  return 0;
}
