/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect@W4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAMAEAMAEAMAEAM@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAM111@Z @ 0x1800B0928
 * Callers:
 *     ?SetPositioningAnchorRect@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800B7B50 (-SetPositioningAnchorRect@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experienc.c)
 *     ?UpdatePositioningAnchorRect@ShellFeedsExperienceManagerImpl@@AEAAXXZ @ 0x1800B7E78 (-UpdatePositioningAnchorRect@ShellFeedsExperienceManagerImpl@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800014D8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6964 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType,float &,float &,float &,float &>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v17; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+54h] [rbp-1Ch] BYREF
  int v19; // [rsp+58h] [rbp-18h] BYREF
  int v20; // [rsp+5Ch] [rbp-14h] BYREF
  int v21; // [rsp+60h] [rbp-10h] BYREF
  __int64 v22; // [rsp+68h] [rbp-8h] BYREF

  v9 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 0x200000000000LL);
    if ( (_BYTE)v9 )
    {
      v13 = *a4;
      v21 = *a1;
      v17 = *a5;
      v14 = *a3;
      v18 = v13;
      v15 = *a2;
      v19 = v14;
      v20 = v15;
      v22 = 0x1000000LL;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v12,
                     (int)&unk_18057DA4D,
                     v10,
                     v11,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v22);
    }
  }
  return (char)v9;
}
