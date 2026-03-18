/*
 * XREFs of GreSfmOpenCompositorRef @ 0x1C007B044
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C007ADC0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C007C7E0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00D5418 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmOpenCompositorRef(Gre::Base *a1, HLSURF a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdi
  int v6; // eax
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+48h] [rbp-10h]
  Gre::Base *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = a1;
  v3 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v3 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v3 + 9), 7LL);
  v4 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( (unsigned int)IsDwmActive() )
    {
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v8);
      v9 = 0LL;
      v10 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v8, a2);
      v5 = v9;
      if ( v9 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v11, (struct _EX_PUSH_LOCK *)(v9 + 256));
        v6 = *(_DWORD *)(v5 + 244);
        if ( (v6 & 8) != 0 )
        {
          if ( (v6 & 0x10) != 0 )
            *(_DWORD *)(v5 + 244) = v6 & 0xFFFFFFEF;
          ++*(_DWORD *)(v5 + 248);
        }
        else
        {
          v4 = -2147020579;
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
      }
      else
      {
        v4 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v8);
    }
    else
    {
      v4 = -1071775733;
    }
  }
  else
  {
    v4 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 9));
  return v4;
}
