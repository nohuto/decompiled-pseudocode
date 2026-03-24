/*
 * XREFs of GreAdjustSpriteDirtyAccum @ 0x1C00F2658
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00F1598 (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0017434 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B94F8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BCDE8 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BCE1C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C027DD28 (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 */

__int64 __fastcall GreAdjustSpriteDirtyAccum(
        HDEV a1,
        HWND a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  unsigned int v6; // edi
  struct _POINTL *v7; // r12
  struct _RECTL *v10; // rbx
  __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v15[8]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-18h] BYREF
  struct _RECTL *v18; // [rsp+B8h] [rbp+58h] BYREF

  v18 = a4;
  v6 = 0;
  v7 = a5;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v18, a2);
    v10 = v18;
    if ( v18 )
    {
      v11 = *(__int64 **)&v18[10].right;
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v15, (struct _EX_PUSH_LOCK *)&v18[5].right);
      if ( v11[10] )
      {
        v18 = (struct _RECTL *)v11[10];
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
        if ( v18 )
        {
          if ( v17[0] )
          {
            if ( v16[0] )
            {
              if ( RGNOBJ::bOffset((RGNOBJ *)&v18, v7) )
              {
                RGNOBJ::vSet((RGNOBJ *)v17, a3);
                if ( RGNOBJ::bMerge((RGNOBJ *)v16, (struct RGNOBJ *)&v18, (struct RGNOBJ *)v17, 8u) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)v16, (struct RGNOBJ *)&v18);
                  v6 = 1;
                  v12 = *v11;
                  v11[10] = (__int64)v18;
                  EtwTraceLifetimeAccum(v12, 1LL);
                }
              }
            }
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v15);
      DEC_SHARE_REF_CNT(v10, v13);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  else
  {
    return (unsigned int)GdiAdjustSpriteDirtyAccum(a1, a2, a3, a4, a5, a6);
  }
  return v6;
}
