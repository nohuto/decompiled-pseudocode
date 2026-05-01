/*
 * XREFs of ??$SetForegroundFailed@AEAJPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4PendingViewAction@2@AEAW4PendingViewActionShowFlags@2@@SingleViewExperienceTelemetry@@SAXAEAJ$$QEAPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4PendingViewAction@2@AEAW4PendingViewActionShowFlags@2@@Z @ 0x18014EA04
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180015418 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001604C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800032EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWrit.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180089F04 (-Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall SingleViewExperienceTelemetry::SetForegroundFailed<long &,unsigned short const *,enum CSingleViewShellExperience::ExperienceViewState &,enum CSingleViewShellExperience::PendingViewAction &,enum CSingleViewShellExperience::PendingViewActionShowFlags &>(
        int *a1,
        __int64 *a2,
        int *a3,
        int *a4,
        int *a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  int v13; // edx
  int v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+54h] [rbp-1Ch] BYREF
  int v17; // [rsp+58h] [rbp-18h] BYREF
  int v18; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h] BYREF
  __int64 v20; // [rsp+68h] [rbp-8h] BYREF

  v9 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v9 )
    {
      v16 = *a4;
      v17 = *a3;
      v13 = *a5;
      v20 = *a2;
      v18 = *a1;
      v15 = v13;
      v19 = 0x1000000LL;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v12,
                     (int)&dword_1805A232D,
                     v10,
                     v11,
                     (__int64)&v18,
                     (const WCHAR **)&v20,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v19);
    }
  }
  return (char)v9;
}
