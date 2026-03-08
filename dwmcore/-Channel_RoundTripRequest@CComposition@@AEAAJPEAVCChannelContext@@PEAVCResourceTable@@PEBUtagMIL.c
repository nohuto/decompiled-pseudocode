/*
 * XREFs of ?Channel_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z @ 0x1800FE730
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1801B229C (McTemplateU0qqx_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::Channel_RoundTripRequest(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ROUNDTRIPREQUEST *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v11 = *((unsigned int *)a4 + 1) | 0x100000000uLL;
  v4 = *((_DWORD *)this + 150);
  v5 = v4 + 1;
  if ( v4 + 1 < v4 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_10;
  }
  v6 = 0;
  if ( v5 <= *((_DWORD *)this + 149) )
  {
    *(_OWORD *)(*((_QWORD *)this + 72) + 16LL * v4) = v11;
    *((_DWORD *)this + 150) = v5;
    goto LABEL_4;
  }
  v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 576, 16, 1, &v11);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v6, 0x5D4u, 0LL);
    return v6;
  }
LABEL_4:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqx_EventWriteTransfer(DWORD2(v11), v5, DWORD1(v11), v11, SBYTE8(v11));
  return v6;
}
