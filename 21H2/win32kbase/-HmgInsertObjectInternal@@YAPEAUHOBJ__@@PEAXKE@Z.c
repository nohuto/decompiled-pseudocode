/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0028DD0
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0028D70 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0032610 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     NtGdiCreateRectRgn @ 0x1C008E4C0 (NtGdiCreateRectRgn.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0097060 (--0PATHMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     EtwTraceGdiCreateHandle @ 0x1C001E804 (EtwTraceGdiCreateHandle.c)
 *     HmgDecProcessHandleCount @ 0x1C001ECFC (HmgDecProcessHandleCount.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C001F220 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C001F710 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C001F890 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     W32GetCurrentThread @ 0x1C0023364 (W32GetCurrentThread.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C008F798 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0167F3C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     HmgIncProcessHandleCountEx @ 0x1C016C18C (HmgIncProcessHandleCountEx.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct OBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v4; // r14
  unsigned __int64 v7; // rbx
  __int64 CurrentThread; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  GdiHandleManager *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char EtwGdiHandleType; // al
  int v16; // r8d
  int v17; // r9d
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThread = W32GetCurrentThread();
  if ( CurrentThread )
  {
    v10 = *(_QWORD *)(CurrentThread + 72);
    if ( v10 )
      LODWORD(v7) = *(_DWORD *)(v10 + 8);
  }
  GreAcquireHmgrSemaphore(v9);
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCountEx((unsigned int)v7, v11, 0LL) )
  {
    v19 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v12, &v19) )
    {
      v4 = ENTRYOBJ::hSetup(a1, a3, a2, v19);
      if ( a3 == 5 )
      {
        v13 = *((_QWORD *)a1 + 85);
        v14 = 0LL;
      }
      else
      {
        if ( a3 != 16 )
        {
LABEL_12:
          if ( (a2 & 8) != 0 )
            LODWORD(v7) = 0;
          EtwGdiHandleType = GetEtwGdiHandleType(a3);
          EtwTraceGdiCreateHandle((int)v4, EtwGdiHandleType, v7);
          goto LABEL_22;
        }
        v13 = *((_QWORD *)a1 + 17);
        v14 = 2LL;
      }
      TrackObjectReferenceInitialization(v14, v13, *((unsigned int *)a1 + 2));
      goto LABEL_12;
    }
    if ( (a2 & 8) == 0 )
      HmgDecProcessHandleCount(v7);
    if ( !gGDISessionLimitReachedAtLeastOnce )
    {
      v12 = gpHandleManager;
      if ( *((_DWORD *)gpHandleManager + 1) >= *((_DWORD *)gpHandleManager + 2) )
      {
        gGDISessionLimitReachedAtLeastOnce = 1;
        if ( (unsigned int)dword_1C028D6F0 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL) )
          {
            v19 = gMaxGdiHandleCount;
            v20 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1C028D6F0,
              (unsigned int)&unk_1C025C06D,
              v16,
              v17,
              (__int64)&v19,
              (__int64)&v20);
          }
        }
      }
    }
  }
LABEL_22:
  GreReleaseHmgrSemaphore(v12);
  return v4;
}
