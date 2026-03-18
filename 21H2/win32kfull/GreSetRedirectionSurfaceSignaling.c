/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C008AE7C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C0089CD0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0084F94 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015D33C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // ebx
  _BYTE v15[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]

  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v15);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      if ( *(_QWORD *)(a1 + 3432) )
      {
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v17);
        v10 = 0LL;
        v18 = 0LL;
        if ( a2 && (LOBYTE(v9) = 18, v11 = HmgShareLockCheck(a2, v9), v18 = v11, (v10 = v11) != 0) )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v16, (struct _EX_PUSH_LOCK *)(v11 + 256));
          v12 = *(_QWORD *)(v10 + 184);
          if ( v12 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v10) )
          {
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 3432))(
                   v12,
                   a3,
                   a2,
                   *(_QWORD *)(v12 + 32)) )
            {
              *(_DWORD *)(v10 + 244) ^= (*(_DWORD *)(v10 + 244) ^ (2 * a5)) & 2;
              EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
            }
            *(_QWORD *)(v10 + 192) = *(_QWORD *)(v12 + 544);
            *(_QWORD *)(v10 + 200) = *(_QWORD *)(v12 + 552);
            *(_DWORD *)(v10 + 208) = *(_DWORD *)(v12 + 100);
            if ( (*(_DWORD *)(v12 + 92) & 0x400) != 0 )
              *(_DWORD *)(v10 + 244) |= 0x100u;
          }
          else
          {
            *(_QWORD *)(v10 + 192) = a3;
            *(_QWORD *)(v10 + 200) = a4;
          }
          v13 = 0;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
          v10 = v18;
        }
        else
        {
          v13 = -1073741811;
        }
        if ( v10 )
          DEC_SHARE_REF_CNT(v10);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
      }
      else
      {
        v13 = -1073741822;
      }
    }
    else
    {
      v13 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v15);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v13;
}
