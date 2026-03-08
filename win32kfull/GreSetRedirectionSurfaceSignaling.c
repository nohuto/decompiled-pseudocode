/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C001E978
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C001E5D0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C001EC6C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // edi
  _BYTE v17[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v18[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( !(unsigned int)IsDwmActive() )
    return (unsigned int)-1071775733;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17);
  v10 = Gre::Base::Globals(v9);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v10 + 9));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9));
  if ( (unsigned int)IsDwmActive() )
  {
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      if ( *(_QWORD *)(a1 + 3432) )
      {
        v12 = 0LL;
        if ( a2 && (LOBYTE(v11) = 18, v13 = HmgShareLockCheck(a2, v11), (v12 = v13) != 0) )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v18, (struct _EX_PUSH_LOCK *)(v13 + 256));
          v14 = *(_QWORD *)(v12 + 184);
          if ( v14 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v12) )
          {
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 3432))(
                   v14,
                   a3,
                   a2,
                   *(_QWORD *)(v14 + 32)) )
            {
              *(_DWORD *)(v12 + 244) ^= (*(_DWORD *)(v12 + 244) ^ (2 * a5)) & 2;
              EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
            }
            *(_QWORD *)(v12 + 192) = *(_QWORD *)(v14 + 544);
            *(_QWORD *)(v12 + 200) = *(_QWORD *)(v14 + 552);
            *(_DWORD *)(v12 + 208) = *(_DWORD *)(v14 + 100);
            if ( (*(_DWORD *)(v14 + 92) & 0x400) != 0 )
              *(_DWORD *)(v12 + 244) |= 0x100u;
          }
          else
          {
            *(_QWORD *)(v12 + 192) = a3;
            *(_QWORD *)(v12 + 200) = a4;
          }
          v15 = 0;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
        }
        else
        {
          v15 = -1073741811;
          if ( !v12 )
            goto LABEL_15;
        }
        DEC_SHARE_REF_CNT(v12);
      }
      else
      {
        v15 = -1073741822;
      }
    }
    else
    {
      v15 = -1073741790;
    }
  }
  else
  {
    v15 = -1071775733;
  }
LABEL_15:
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17);
  return v15;
}
