/*
 * XREFs of GreAdjustSpriteDirtyAccum @ 0x1C0009F60
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C0096A48 (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C000A650 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C027C79C (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 */

__int64 __fastcall GreAdjustSpriteDirtyAccum(
        HDEV a1,
        HWND a2,
        struct _RECTL *a3,
        __int64 a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // edi
  struct _RECTL *v7; // rbx
  HDEV v9; // r14
  int v10; // r12d
  int v11; // eax
  Gre::Base *v12; // rcx
  struct _RECTL *v13; // r9
  struct _POINTL *v14; // r13
  struct Gre::Base::SESSION_GLOBALS *v15; // rsi
  __int64 v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+58h] BYREF

  v26 = a4;
  v6 = 0;
  v7 = a3;
  v9 = a1;
  v10 = 1;
  v11 = IsDwmActive();
  v14 = a5;
  if ( !v11 )
    return (unsigned int)GdiAdjustSpriteDirtyAccum(v9, a2, v7, v13, v14, a6);
  v15 = Gre::Base::Globals(v12);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v15 + 9));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v15 + 9));
  if ( (unsigned int)IsDwmActive() )
  {
    v10 = 0;
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v26, a2);
    v16 = v26;
    if ( v26 )
    {
      v17 = *(__int64 **)(v26 + 144);
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v23, (struct _EX_PUSH_LOCK *)(v26 + 88));
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v22, (struct _EX_PUSH_LOCK *)(v17 + 32));
      if ( v17[10] )
      {
        v26 = v17[10];
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v21);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
        if ( v26 )
        {
          if ( v21 )
          {
            if ( v20 )
            {
              if ( RGNOBJ::bOffset((RGNOBJ *)&v26, v14) )
              {
                RGNOBJ::vSet((RGNOBJ *)&v21, a3);
                if ( RGNOBJ::bMerge((RGNOBJ *)&v20, (struct RGNOBJ *)&v26, (struct RGNOBJ *)&v21, 8u) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)&v20, (struct RGNOBJ *)&v26);
                  v6 = 1;
                  v18 = *v17;
                  v17[10] = v26;
                  EtwTraceLifetimeAccum(v18, 1LL);
                }
              }
            }
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v22);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v23);
      v9 = a1;
      if ( v16 )
        DEC_SHARE_REF_CNT(v16);
    }
    v7 = a3;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v15 + 9));
  if ( v10 )
    return (unsigned int)GdiAdjustSpriteDirtyAccum(v9, a2, v7, v13, v14, a6);
  return v6;
}
