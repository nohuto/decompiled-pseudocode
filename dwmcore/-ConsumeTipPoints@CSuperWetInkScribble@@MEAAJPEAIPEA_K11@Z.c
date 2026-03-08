/*
 * XREFs of ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z @ 0x1802B54E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800AB7E0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EF9A8 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18019FE48 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?PopAll@CSharedCircularQueue@@QEAAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180250980 (-PopAll@CSharedCircularQueue@@QEAAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 */

__int64 __fastcall CSuperWetInkScribble::ConsumeTipPoints(
        CSuperWetInkScribble *this,
        unsigned int *a2,
        unsigned __int64 *a3,
        LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // esi
  gsl::details *v12; // rcx
  int v13; // ebx
  unsigned __int64 *v14; // r12
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v20; // [rsp+30h] [rbp-50h]
  unsigned int v21; // [rsp+34h] [rbp-4Ch] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v28; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 *v29; // [rsp+D0h] [rbp+50h]
  LARGE_INTEGER *v30; // [rsp+D8h] [rbp+58h]

  v30 = a4;
  v29 = a3;
  v5 = *((_QWORD *)this + 7);
  v26 = 0LL;
  v25 = 0LL;
  v8 = *(_DWORD **)(v5 + 24);
  v20 = v8[2];
  v9 = v8[3] * v20;
  if ( v9 )
    std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(&v25, v9);
  v10 = v25;
  v11 = *((_DWORD *)this + 6);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v24, DWORD2(v25) - (int)v25);
  if ( v24[0] == -1LL || !v10 && v24[0] )
  {
    gsl::details::terminate(v12);
    JUMPOUT(0x1802B56A6LL);
  }
  v24[1] = v10;
  CSharedCircularQueue::PopAll(v8, (__int64)v24, v11, &v28, &v21);
  v13 = 0;
  if ( v28 )
  {
    v14 = a5;
    while ( 1 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 2) + 32LL))(
              *((_QWORD *)this + 2),
              v10 + v20 * (v28 - v13 - 1),
              v20,
              v14,
              v29);
      v16 = v15;
      if ( v15 < 0 )
        break;
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      *v30 = PerformanceCount;
      if ( (unsigned int)dword_1803E0798 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1803E0798, 2LL) )
        {
          v23 = *v14;
          v24[0] = v18;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (__int64)&dword_1803E0798,
            byte_18037FA29,
            v17,
            v18,
            (__int64)v24,
            (__int64)&v23);
        }
      }
      if ( ++v13 >= v28 )
        goto LABEL_13;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v15);
    std::vector<unsigned char>::_Tidy((__int64)&v25);
    return v16;
  }
  else
  {
LABEL_13:
    *a2 = v21;
    std::vector<unsigned char>::_Tidy((__int64)&v25);
    return 0LL;
  }
}
