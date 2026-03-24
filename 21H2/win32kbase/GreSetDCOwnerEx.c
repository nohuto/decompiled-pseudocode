/*
 * XREFs of GreSetDCOwnerEx @ 0x1C0037AB0
 * Callers:
 *     DestroyCacheDC @ 0x1C00074F0 (DestroyCacheDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0007A18 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0039C70 (GetMonitorDC.c)
 *     InitUserScreen @ 0x1C006A78C (InitUserScreen.c)
 *     CreateCacheDC @ 0x1C006AE00 (CreateCacheDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CBFF0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C001C970 (GreSetBrushOwner.c)
 *     HmgFreeDcAttr @ 0x1C002B44C (HmgFreeDcAttr.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C002B518 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     HmgAllocateDcAttr @ 0x1C002B568 (HmgAllocateDcAttr.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C002B6CC (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002F590 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002FE60 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0030210 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003209C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0032248 (HmgDecProcessHandleCount.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00348E0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0045F3C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0045F70 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GreIncQuotaCount @ 0x1C009AA00 (GreIncQuotaCount.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00C8228 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00C9980 (HmgIncProcessHandleCountEx.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00C9CDC (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB718 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

__int64 __fastcall GreSetDCOwnerEx(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ebx
  BOOL v6; // r12d
  unsigned int v7; // edi
  struct _DC_ATTR *DcAttr; // r13
  _DWORD *v9; // r14
  struct OBJECT *EntryObject; // r15
  bool v11; // bl
  BOOL v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  bool v19; // cf
  unsigned int v20; // ebx
  unsigned int CurrentProcessId; // eax
  unsigned int v22; // ecx
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v26; // [rsp+38h] [rbp-31h]
  char v27; // [rsp+40h] [rbp-29h]
  __int64 v28; // [rsp+48h] [rbp-21h]
  char v29; // [rsp+50h] [rbp-19h]
  struct _RECTL v30; // [rsp+58h] [rbp-11h] BYREF
  _DWORD *v31; // [rsp+68h] [rbp-1h] BYREF
  int v32; // [rsp+70h] [rbp+7h]
  struct _RECTL *v33; // [rsp+D0h] [rbp+67h] BYREF
  int v34; // [rsp+D8h] [rbp+6Fh]
  int v35; // [rsp+E0h] [rbp+77h]
  unsigned int v36; // [rsp+E8h] [rbp+7Fh]

  v36 = a4;
  v35 = a3;
  v5 = a1;
  v6 = a3 == 0;
  v7 = 0;
  DcAttr = 0LL;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  GreAcquireHmgrSemaphore(a1);
  v31 = 0LL;
  v32 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v31, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v32 )
  {
    v9 = v31;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v31 & 0xFFFFFF);
    if ( *((_BYTE *)v9 + 14) == 1 && *((_WORD *)v9 + 6) == HIWORD(v5) )
    {
      if ( !*((_WORD *)EntryObject + 6) )
      {
LABEL_10:
        if ( a2 == -2147483630 )
          goto LABEL_37;
        if ( (v9[2] & 0xFFFFFFFE) == 0x80000012 )
        {
          DC::AcquireDcVisRgnShared(EntryObject);
          v11 = GrepValidateVisRgn(EntryObject, *((struct REGION **)EntryObject + 143), (struct ERECTL *)&v30);
          if ( v27 )
            CPushLock::ReleaseLock((CPushLock *)(v26 + 1112));
          if ( !v11 )
          {
            DC::AcquireDcVisRgnExclusive(EntryObject);
            v33 = (struct _RECTL *)*((_QWORD *)EntryObject + 143);
            if ( v33 )
              RGNOBJ::vSet(&v33, &v30);
            if ( v29 )
              CPushLock::ReleaseLock((CPushLock *)(v28 + 1112));
          }
        }
        if ( !a2 )
        {
LABEL_37:
          v20 = v9[2] & 0xFFFFFFFE;
          if ( v20 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v25, (struct _EX_PUSH_LOCK *)&gDCOwnershipChangeLock);
            FreeDCAttributes(EntryObject);
            HANDLELOCK::Pid((HANDLELOCK *)&v31, a2);
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
            HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
            v7 = 1;
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v25);
          }
          else
          {
            v22 = v9[2] & 0xFFFFFFFE;
            if ( v22 != -2147483630 )
            {
              v12 = v6;
              if ( !v22 && !a2 )
              {
                v7 = 1;
                v12 = 0;
              }
              goto LABEL_45;
            }
            HANDLELOCK::Pid((HANDLELOCK *)&v31, a2);
            v7 = 1;
          }
          goto LABEL_41;
        }
        v12 = v6;
        if ( a2 != -2147483646 )
        {
LABEL_45:
          if ( a2 != -2147483630 && v7 && v12 && (unsigned int)GreSetBrushOwner(**((HBRUSH **)EntryObject + 17), a2) )
            GreSetBrushOwner(**((HBRUSH **)EntryObject + 18), a2);
          goto LABEL_50;
        }
        v14 = (unsigned int)PsGetCurrentProcessId();
        v15 = v9[2] & 0xFFFFFFFE;
        v16 = v14 & 0xFFFFFFFC;
        if ( v15 == v16 || v15 == -2147483630 || !v15 )
        {
          v34 = 0;
          v7 = 1;
          if ( v15 == v16 )
          {
LABEL_29:
            if ( !*((_QWORD *)v9 + 2) )
            {
              if ( DcAttr )
              {
                SetupDCAttributes(EntryObject, DcAttr);
                DcAttr = 0LL;
              }
              else
              {
                v19 = v35 != 0;
                v35 = -v35;
                v7 &= -v19;
              }
            }
            if ( v7 )
            {
              HANDLELOCK::Pid((HANDLELOCK *)&v31, v16);
            }
            else if ( v34 )
            {
              HmgDecProcessHandleCount(v16);
            }
            goto LABEL_41;
          }
          v7 = HmgIncProcessHandleCountEx(v16, v13, v36);
          if ( v7 )
          {
LABEL_28:
            v34 = 1;
            goto LABEL_29;
          }
          if ( v35 )
          {
            CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v17);
            GreIncQuotaCount(CurrentProcessWin32Process);
            v7 = 1;
            goto LABEL_28;
          }
        }
LABEL_41:
        v12 = v6;
        goto LABEL_45;
      }
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
      {
        v9 = v31;
        goto LABEL_10;
      }
    }
LABEL_50:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v31);
  GreReleaseHmgrSemaphore(v23);
  if ( DcAttr )
    HmgFreeDcAttr((__int64)DcAttr);
  return v7;
}
