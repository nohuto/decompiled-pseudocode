/*
 * XREFs of GreSetDCOwnerEx @ 0x1C002C0D0
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C005188C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 *     CreateCacheDC @ 0x1C006AA00 (CreateCacheDC.c)
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00DBCF0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0017700 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0017740 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     HmgDecProcessHandleCount @ 0x1C001ECFC (HmgDecProcessHandleCount.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001EEA0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C001F14C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022AE0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0022D20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0024CD8 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     HmgAllocateDcAttr @ 0x1C002631C (HmgAllocateDcAttr.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C0026498 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C002655C (HmgFreeDcAttr.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     GreSetBrushOwner @ 0x1C00630E0 (GreSetBrushOwner.c)
 *     GreIncQuotaCount @ 0x1C00AC6C0 (GreIncQuotaCount.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D9320 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C00D9428 (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DA978 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DB63C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C016C18C (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall GreSetDCOwnerEx(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ebx
  BOOL v6; // r14d
  unsigned int v7; // edi
  struct _DC_ATTR *DcAttr; // rsi
  _DWORD *v9; // r12
  struct OBJECT *EntryObject; // r13
  bool v11; // bl
  __int64 v12; // rdx
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  unsigned int v21; // ebx
  unsigned int CurrentProcessId; // eax
  __int64 v23; // rcx
  unsigned int v25; // eax
  _BYTE v26[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v27; // [rsp+38h] [rbp-31h]
  char v28; // [rsp+40h] [rbp-29h]
  __int64 v29; // [rsp+48h] [rbp-21h]
  char v30; // [rsp+50h] [rbp-19h]
  struct _RECTL v31; // [rsp+58h] [rbp-11h] BYREF
  _DWORD *v32; // [rsp+68h] [rbp-1h] BYREF
  int v33; // [rsp+70h] [rbp+7h]
  struct _RECTL *v34; // [rsp+D0h] [rbp+67h] BYREF
  int v35; // [rsp+D8h] [rbp+6Fh]
  int v36; // [rsp+E0h] [rbp+77h]
  unsigned int v37; // [rsp+E8h] [rbp+7Fh]

  v37 = a4;
  v36 = a3;
  v5 = a1;
  v6 = a3 == 0;
  v7 = 0;
  DcAttr = 0LL;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  GreAcquireHmgrSemaphore(a1);
  v32 = 0LL;
  v33 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v32, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0LL, 0, 0);
  if ( v33 )
  {
    v9 = v32;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v32 & 0xFFFFFF);
    if ( *((_BYTE *)v9 + 14) != 1 || *((_WORD *)v9 + 6) != HIWORD(v5) )
      goto LABEL_47;
    if ( *((_WORD *)EntryObject + 6) )
    {
      if ( *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
        goto LABEL_47;
      v9 = v32;
    }
    if ( a2 == -2147483630 )
      goto LABEL_40;
    if ( (v9[2] & 0xFFFFFFFE) == 0x80000012 )
    {
      if ( (unsigned int)Feature_3093221692__private_IsEnabled() )
      {
        DC::AcquireDcVisRgnShared(EntryObject);
        v11 = GrepValidateVisRgn(EntryObject, *((struct REGION **)EntryObject + 142), (struct ERECTL *)&v31);
        if ( v28 )
          GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v27 + 1112));
        if ( !v11 )
        {
          DC::AcquireDcVisRgnExclusive(EntryObject);
          v34 = (struct _RECTL *)*((_QWORD *)EntryObject + 142);
          if ( v34 )
            RGNOBJ::vSet(&v34, &v31);
          if ( v30 )
            GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v29 + 1112));
        }
      }
      else
      {
        GrepValidateVisRgn(EntryObject, *((struct REGION **)EntryObject + 142));
      }
    }
    if ( !a2 )
    {
LABEL_40:
      v21 = v9[2] & 0xFFFFFFFE;
      if ( v21 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v26, (struct _EX_PUSH_LOCK *)&gDCOwnershipChangeLock);
        FreeDCAttributes(EntryObject);
        HANDLELOCK::Pid((HANDLELOCK *)&v32, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        v7 = 1;
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v26);
      }
      else
      {
        v25 = v9[2] & 0xFFFFFFFE;
        if ( v25 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v32, a2);
          v7 = 1;
        }
        else if ( !v25 && !a2 )
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
      v13 = (unsigned int)PsGetCurrentProcessId();
      v14 = v9[2] & 0xFFFFFFFE;
      v15 = v13 & 0xFFFFFFFC;
      if ( v14 == v15 || v14 == -2147483630 || !v14 )
      {
        v35 = 0;
        v7 = 1;
        if ( v14 != v15 )
        {
          v7 = HmgIncProcessHandleCountEx(v15, v12, v37);
          if ( v7 )
          {
            v35 = 1;
          }
          else
          {
            if ( !v36 )
              goto LABEL_43;
            CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v17, v16, v18, v19);
            GreIncQuotaCount(CurrentProcessWin32Process);
            v7 = 1;
            v35 = 1;
          }
        }
        if ( !*((_QWORD *)v9 + 2) )
        {
          if ( DcAttr )
          {
            SetupDCAttributes(EntryObject, DcAttr);
            DcAttr = 0LL;
          }
          else if ( !v36 )
          {
            v7 = 0;
            if ( v35 )
              HmgDecProcessHandleCount(v15);
            goto LABEL_43;
          }
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v32, v15);
      }
LABEL_43:
      if ( v7 && v6 && (unsigned int)GreSetBrushOwner(**((HBRUSH **)EntryObject + 17), a2) )
        GreSetBrushOwner(**((HBRUSH **)EntryObject + 18), a2);
    }
LABEL_47:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v32);
  GreReleaseHmgrSemaphore(v23);
  if ( DcAttr )
    HmgFreeDcAttr((__int64)DcAttr);
  return v7;
}
