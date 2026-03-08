/*
 * XREFs of GreSetDCOwnerEx @ 0x1C0041580
 * Callers:
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     CreateCacheDC @ 0x1C003DC40 (CreateCacheDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B5B70 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00DEED0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00432EC (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004B670 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgDecProcessHandleCount @ 0x1C004FDA0 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C004FEB0 (HmgIncProcessHandleCountEx.c)
 *     HmgAllocateDcAttr @ 0x1C00500EC (HmgAllocateDcAttr.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C00502A0 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C005162C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0052474 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C0053788 (HmgFreeDcAttr.c)
 *     GreIncQuotaCount @ 0x1C00A58C0 (GreIncQuotaCount.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00A6424 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00A6464 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00DDFD0 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C00DE090 (Feature_3160330556__private_IsEnabledDeviceUsage.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DE7E0 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DE9A0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

__int64 __fastcall GreSetDCOwnerEx(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ebx
  BOOL v6; // r14d
  unsigned int v7; // edi
  struct _DC_ATTR *DcAttr; // rsi
  struct OBJECT *v9; // rax
  __int64 v10; // r12
  struct OBJECT *v11; // r13
  bool v12; // bl
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned __int64 CurrentProcessWin32Process; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v29; // eax
  _BYTE v30[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v31; // [rsp+38h] [rbp-48h]
  char v32; // [rsp+40h] [rbp-40h]
  __int64 v33; // [rsp+48h] [rbp-38h]
  char v34; // [rsp+50h] [rbp-30h]
  struct _RECTL v35; // [rsp+58h] [rbp-28h] BYREF
  __int64 v36; // [rsp+68h] [rbp-18h] BYREF
  int v37; // [rsp+70h] [rbp-10h]
  __int64 v38; // [rsp+C0h] [rbp+40h] BYREF
  int v39; // [rsp+D0h] [rbp+50h]
  unsigned int v40; // [rsp+D8h] [rbp+58h]

  v40 = a4;
  v39 = a3;
  v5 = a1;
  v6 = a3 == 0;
  v7 = 0;
  DcAttr = 0LL;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  GreAcquireHmgrSemaphore(a1);
  v36 = 0LL;
  v37 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v36, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v37 )
  {
    v9 = HANDLELOCK::pObj((HANDLELOCK *)&v36);
    v10 = v36;
    v11 = v9;
    if ( *(_BYTE *)(v36 + 14) != 1 || *(_WORD *)(v36 + 12) != HIWORD(v5) )
      goto LABEL_47;
    if ( *((_WORD *)v9 + 6) )
    {
      if ( *((struct _KTHREAD **)v9 + 2) != KeGetCurrentThread() )
        goto LABEL_47;
      v10 = v36;
    }
    if ( a2 == -2147483630 )
      goto LABEL_40;
    if ( (*(_DWORD *)(v10 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      if ( (unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
      {
        DC::AcquireDcVisRgnShared(v11);
        v12 = GrepValidateVisRgn(v11, *((struct REGION **)v11 + 142), (struct ERECTL *)&v35);
        if ( v32 )
          GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v31 + 1112));
        if ( !v12 )
        {
          DC::AcquireDcVisRgnExclusive(v11);
          v38 = *((_QWORD *)v11 + 142);
          if ( v38 )
            RGNOBJ::vSet((RGNOBJ *)&v38, &v35);
          if ( v34 )
            GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v33 + 1112));
        }
      }
      else
      {
        GrepValidateVisRgn(v11, *((struct REGION **)v11 + 142));
      }
    }
    if ( !a2 )
    {
LABEL_40:
      v20 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
      if ( v20 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v22 = SGDGetSessionState(v21);
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v30, (struct _EX_PUSH_LOCK *)(*(_QWORD *)(v22 + 24) + 2336LL));
        FreeDCAttributes(v11);
        HANDLELOCK::Pid((HANDLELOCK *)&v36, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        v7 = 1;
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v30);
      }
      else
      {
        v29 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
        if ( v29 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v36, a2);
          v7 = 1;
        }
        else if ( !v29 && !a2 )
        {
          v7 = 1;
          goto LABEL_47;
        }
      }
      if ( a2 != -2147483630 )
        goto LABEL_43;
    }
    else if ( a2 == -2147483646 )
    {
      v14 = (unsigned int)PsGetCurrentProcessId();
      v15 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
      v16 = v14 & 0xFFFFFFFC;
      if ( v15 == v16 || v15 == -2147483630 || !v15 )
      {
        v17 = 0;
        v7 = 1;
        if ( v15 != v16 )
        {
          v7 = HmgIncProcessHandleCountEx(v16, v13, v40);
          if ( v7 )
          {
            v17 = 1;
          }
          else
          {
            if ( !v39 )
              goto LABEL_43;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
            if ( CurrentProcessWin32Process )
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            GreIncQuotaCount((struct _W32PROCESS *)CurrentProcessWin32Process);
            v17 = 1;
            v7 = 1;
          }
        }
        if ( !*(_QWORD *)(v10 + 16) )
        {
          if ( DcAttr )
          {
            SetupDCAttributes(v11, DcAttr);
            DcAttr = 0LL;
          }
          else if ( !v39 )
          {
            v7 = 0;
            if ( v17 )
              HmgDecProcessHandleCount(v16);
            goto LABEL_43;
          }
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v36, v16);
      }
LABEL_43:
      if ( v7 && v6 && (unsigned int)GreSetBrushOwner(**((HBRUSH **)v11 + 17), a2) )
        GreSetBrushOwner(**((HBRUSH **)v11 + 18), a2);
    }
LABEL_47:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v36);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v36);
  GreReleaseHmgrSemaphore(v25, v24, v26, v27);
  if ( DcAttr )
    HmgFreeDcAttr(DcAttr);
  return v7;
}
