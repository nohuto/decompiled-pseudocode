__int64 __fastcall GreWindowResizeStarted(void *a1, HWND a2, int a3, int *a4, _DWORD *a5)
{
  unsigned int v6; // r12d
  _DWORD *v7; // r14
  int v8; // r13d
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  Gre::Base *v11; // rcx
  struct PDEVOBJ *v12; // rdx
  Gre::Base *v13; // rcx
  struct DWMSPRITE *v14; // rsi
  __int64 *v15; // rdi
  __int64 v16; // rax
  bool v17; // bl
  PVOID v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rdi
  void *v24; // rax
  int v25; // ecx
  int v26; // eax
  char v28[8]; // [rsp+60h] [rbp-20h] BYREF
  void *v29; // [rsp+68h] [rbp-18h] BYREF
  struct DWMSPRITE *v30; // [rsp+70h] [rbp-10h] BYREF
  __int64 v31; // [rsp+78h] [rbp-8h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  int v33; // [rsp+D0h] [rbp+50h]
  int *v34; // [rsp+D8h] [rbp+58h]

  v34 = a4;
  v33 = a3;
  Object = a1;
  v6 = 0;
  v7 = *(_DWORD **)(SGDGetSessionState(a1) + 32);
  v8 = v7[2177] & 2;
  LODWORD(Object) = v7[2177] & 1;
  v10 = Gre::Base::Globals(v9);
  v31 = *((_QWORD *)v10 + 15);
  GreAcquireSemaphore(v31);
  if ( IsDwmActive(v11) )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v28, v12, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
    if ( IsDwmActive(v13) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v30, a2);
      v14 = v30;
      if ( v30 )
      {
        v15 = (__int64 *)*((_QWORD *)v30 + 18);
        v17 = 0;
        if ( v15 )
        {
          v16 = v15[23];
          if ( v16 )
          {
            if ( v16 != 24 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v16 - 24)) )
              v17 = 1;
          }
        }
        if ( (_DWORD)Object && v17 || v33 && v8 )
        {
          if ( *((int *)v14 + 29) >= 1 )
            CheckAndProcessWindowResizeComplete(v14, 1, 0LL);
          *(_QWORD *)((char *)v14 + 116) = (unsigned int)v17 + 1;
          if ( v33 && v8 )
          {
            Object = 0LL;
            if ( (unsigned int)UserDCompositionCreateSynchronizationObject(&Object) )
            {
              v18 = Object;
              v29 = 0LL;
              if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v29) < 0 )
              {
                ObfDereferenceObject(v18);
              }
              else
              {
                *((_QWORD *)v14 + 13) = v29;
                *((_QWORD *)v14 + 12) = v18;
                *((_DWORD *)v14 + 30) = 1;
                *((_DWORD *)v14 + 31) = 1;
                v22 = *v15;
                v23 = *(_QWORD *)v14;
                v24 = (void *)UserReferenceDwmApiPort(v20, v19, v21);
                DwmAsyncUpdateSprite(v24, v23, v22, 512, 0LL, 0LL, 0, 0, 0, 0, 0LL);
              }
            }
            v25 = v7[2179];
            v26 = v7[2177] & 8;
          }
          else
          {
            v25 = v7[2178];
            v26 = v7[2177] & 4;
          }
          v6 = 1;
          *v34 = v26;
          *a5 = v25;
        }
        if ( v14 )
          _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v28);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v31);
  return v6;
}
