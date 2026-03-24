/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0035F00
 * Callers:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0023260 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0025620 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C00357D0 (GreCreateRectRgnIndirect.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0035EA0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C0080D10 (NtGdiCreateRectRgn.c)
 * Callees:
 *     EtwTraceGdiCreateHandle @ 0x1C0001540 (EtwTraceGdiCreateHandle.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0001560 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002CFC0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C00335E0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C00336B8 (HmgDecProcessHandleCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C0081DB4 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00C9C1C (HmgIncProcessHandleCountEx.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C013AB1C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct OBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v4; // r14
  unsigned __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  GdiHandleManager *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  char EtwGdiHandleType; // al
  int v18; // r8d
  int v19; // r9d
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *(_QWORD *)(ThreadWin32Thread + 72);
  else
    v10 = 0LL;
  if ( v10 )
    LODWORD(v7) = *(_DWORD *)(v10 + 8);
  GreAcquireHmgrSemaphore(v9);
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCountEx((unsigned int)v7, v11, 0LL) )
  {
    v22 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v12, &v22) )
    {
      v4 = ENTRYOBJ::hSetup(a1, a3, a2, v22);
      if ( a3 == 5 )
      {
        v15 = *((_QWORD *)a1 + 85);
        v16 = 0LL;
      }
      else
      {
        if ( a3 != 16 )
        {
LABEL_14:
          if ( (a2 & 8) != 0 )
            LODWORD(v7) = 0;
          EtwGdiHandleType = GetEtwGdiHandleType(a3);
          EtwTraceGdiCreateHandle((int)v4, EtwGdiHandleType, v7);
          goto LABEL_24;
        }
        v15 = *((_QWORD *)a1 + 17);
        v16 = 2LL;
      }
      TrackObjectReferenceInitialization(v16, v15, *((unsigned int *)a1 + 2));
      goto LABEL_14;
    }
    if ( (a2 & 8) == 0 )
      HmgDecProcessHandleCount(v7);
    if ( !gGDISessionLimitReachedAtLeastOnce )
    {
      v12 = gpHandleManager;
      if ( *((_DWORD *)gpHandleManager + 1) >= *((_DWORD *)gpHandleManager + 2) )
      {
        gGDISessionLimitReachedAtLeastOnce = 1;
        if ( (unsigned int)dword_1C0249250 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0249250, 0x400000000000LL, v13, v14) )
          {
            v23 = gMaxGdiHandleCount;
            v21 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1C0249250,
              (unsigned int)&unk_1C02192A8,
              v18,
              v19,
              (__int64)&v23,
              (__int64)&v21);
          }
        }
      }
    }
  }
LABEL_24:
  GreReleaseHmgrSemaphore(v12);
  return v4;
}
