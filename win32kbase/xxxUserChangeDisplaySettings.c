__int64 __fastcall xxxUserChangeDisplaySettings(
        _OWORD *a1,
        _WORD *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  unsigned __int64 v10; // rdx
  size_t v11; // rbx
  struct _UNICODE_STRING *QuotaZInit; // rcx
  const void *v13; // rdx
  size_t v14; // rbx
  size_t v15; // rdi
  struct _devicemodeW *v16; // r9
  unsigned int v17; // ebx
  ULONG64 v18; // rcx
  unsigned int v20; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v21; // rdi
  int v22; // edx
  __int64 Pool2; // rbx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  unsigned int v26; // r10d
  __int64 v27; // r11
  int v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  __int64 dmDisplayFlags; // rcx
  bool v32; // cf
  PWSTR Buffer; // rdx
  WCHAR v34; // ax
  _WORD *v35; // rax
  __int64 DxgkWin32kInterface; // rax
  unsigned __int64 v37; // rsi
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r9
  _BYTE v43[4]; // [rsp+70h] [rbp-218h] BYREF
  unsigned __int16 v44; // [rsp+74h] [rbp-214h]
  __int16 v45; // [rsp+78h] [rbp-210h]
  unsigned int v46; // [rsp+7Ch] [rbp-20Ch]
  unsigned int v47; // [rsp+80h] [rbp-208h] BYREF
  struct _UNICODE_STRING *v48[2]; // [rsp+90h] [rbp-1F8h] BYREF
  __int128 v49; // [rsp+A0h] [rbp-1E8h]
  struct _devicemodeW *v50; // [rsp+B0h] [rbp-1D8h]
  __int128 v51; // [rsp+B8h] [rbp-1D0h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-1C0h]
  struct tagTHREADINFO *v53; // [rsp+D0h] [rbp-1B8h]
  unsigned int v54; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned int v55; // [rsp+E4h] [rbp-1A4h] BYREF
  BOOL v56; // [rsp+E8h] [rbp-1A0h] BYREF
  int v57; // [rsp+ECh] [rbp-19Ch] BYREF
  int v58; // [rsp+F0h] [rbp-198h] BYREF
  int v59; // [rsp+F4h] [rbp-194h] BYREF
  int v60; // [rsp+F8h] [rbp-190h] BYREF
  int v61; // [rsp+FCh] [rbp-18Ch] BYREF
  int v62; // [rsp+100h] [rbp-188h] BYREF
  int v63; // [rsp+104h] [rbp-184h] BYREF
  int v64; // [rsp+108h] [rbp-180h] BYREF
  int v65; // [rsp+10Ch] [rbp-17Ch] BYREF
  int v66; // [rsp+110h] [rbp-178h] BYREF
  unsigned __int64 v67; // [rsp+118h] [rbp-170h] BYREF
  void *v68; // [rsp+120h] [rbp-168h]
  const WCHAR *v69[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v70; // [rsp+140h] [rbp-148h] BYREF
  __int64 v71; // [rsp+148h] [rbp-140h]
  __int64 v72; // [rsp+150h] [rbp-138h]
  __int64 v73; // [rsp+158h] [rbp-130h] BYREF
  _OWORD *v74; // [rsp+160h] [rbp-128h]
  unsigned __int64 v75; // [rsp+168h] [rbp-120h] BYREF
  __int64 v76; // [rsp+170h] [rbp-118h] BYREF
  void *Src[2]; // [rsp+178h] [rbp-110h]
  PVOID BackTrace[20]; // [rsp+190h] [rbp-F8h] BYREF
  GUID ActivityId; // [rsp+230h] [rbp-58h] BYREF

  v46 = a4;
  v74 = a1;
  v68 = a5;
  ActivityId = 0LL;
  v72 = MEMORY[0xFFFFF78000000320];
  v71 = v72 * KeQueryTimeIncrement();
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = gptiCurrent;
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
    v11 = LOWORD(Src[0]);
    QuotaZInit = (struct _UNICODE_STRING *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                             (NSInstrumentation::CLeakTrackingAllocator *)MmUserProbeAddress,
                                             v10,
                                             LOWORD(Src[0]) + 18LL,
                                             0x73726447u);
    v48[0] = QuotaZInit;
    if ( !QuotaZInit )
      goto LABEL_16;
    if ( qword_1C02D65C8 )
    {
      qword_1C02D65C8(QuotaZInit, &v48[1], Win32FreePool);
      QuotaZInit = v48[0];
    }
    QuotaZInit->Buffer = &QuotaZInit[1].Length;
    v48[0]->Length = v11;
    v48[0]->MaximumLength = v11 + 2;
    if ( (_WORD)v11 )
    {
      v13 = Src[1];
      if ( (char *)Src[1] + v11 > (void *)MmUserProbeAddress || (char *)Src[1] + v11 < Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v48[0]->Buffer, v13, v11);
    }
    v10 = v11 >> 1;
    v48[0]->Buffer[v11 >> 1] = 0;
  }
  if ( a2 )
  {
    v44 = 0;
    v45 = 0;
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v44 = a2[34];
    v14 = v44;
    v15 = (unsigned __int16)a2[35];
    v45 = a2[35];
    if ( (unsigned __int16)(v44 - 188) > 0x20u )
    {
      v17 = -2;
      goto LABEL_25;
    }
    v16 = (struct _devicemodeW *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                   (NSInstrumentation::CLeakTrackingAllocator *)0xBC,
                                   v10,
                                   v15 + 220,
                                   0x73726447u);
    v50 = v16;
    if ( !v16 )
    {
LABEL_16:
      v17 = -1;
LABEL_25:
      xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(v48);
      return v17;
    }
    if ( qword_1C02D65C8 )
    {
      qword_1C02D65C8(v16, &v51, Win32FreePool);
      v16 = v50;
    }
    if ( v44 + (_DWORD)v15 )
    {
      v18 = (ULONG64)a2 + v44 + (unsigned int)v15;
      if ( v18 > MmUserProbeAddress || v18 < (unsigned __int64)a2 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v16 = v50;
      }
    }
    memmove(v16, a2, v14);
    memmove(&v50[1], (char *)a2 + v14, v15);
    v50->dmSize = 220;
    v50->dmDriverExtra = v15;
  }
  v20 = xxxUserChangeDisplaySettingsInternal(v48[0], v50, a3, v46, v68, a6, a7);
  v47 = 1682142037;
  v70 = 260LL;
  v21 = gpLeakTrackingAllocator;
  v73 = 144LL;
  v22 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 144LL, 1682142037LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v21 + 14);
    goto LABEL_29;
  }
  if ( v22 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64437355u) )
    {
      v25 = (_QWORD *)ExAllocatePool2(v70 & 0xFFFFFFFFFFFFFFFDuLL, 160LL, v47);
      Pool2 = (__int64)v25;
      if ( !v25
        || (_InterlockedIncrement64((volatile signed __int64 *)v21 + 14),
            *v25 = 1682142037LL,
            Pool2 = (__int64)(v25 + 2),
            v25 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v21 + 1),
          (const void *)0x64437355);
      }
      goto LABEL_29;
    }
    goto LABEL_32;
  }
  if ( v22 != 2 )
  {
    v24 = 16LL;
    goto LABEL_46;
  }
  v67 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x64437355u, &v67) )
  {
    v69[0] = (const WCHAR *)&v70;
    v69[1] = (const WCHAR *)&v47;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v21,
              (__int64)v69,
              &v73);
    goto LABEL_29;
  }
  Pool2 = ExAllocatePool2(v27, 160LL, v26);
  if ( Pool2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v21 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    v24 = 16LL;
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v21,
                              Pool2,
                              v67,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_47;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v21,
                                 Pool2,
                                 v67,
                                 BackTrace) )
    {
      goto LABEL_47;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v21 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
LABEL_46:
    Pool2 = 0LL;
    goto LABEL_47;
  }
LABEL_32:
  Pool2 = 0LL;
LABEL_29:
  v24 = 16LL;
LABEL_47:
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 4;
    *(_DWORD *)(Pool2 + 4) = 144;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_OWORD *)(Pool2 + 8) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 56) = v71;
    if ( !a2 || (v28 = 1, !v50) )
      v28 = 0;
    v29 = v28 | *(_DWORD *)(Pool2 + 140) & 0xFFFFFFFE;
    *(_DWORD *)(Pool2 + 140) = v29;
    if ( !v74 || !v48[0] || !v48[0]->Length || (v30 = 2, !v48[0]->Buffer) )
      v30 = 0;
    dmDisplayFlags = a6 == KernelMode ? 4 : 0;
    v32 = v68 != 0LL;
    v68 = (void *)-(__int64)v68;
    Buffer = (PWSTR)((v32 ? 0 : 8) | (a6 == KernelMode ? 4 : 0) | v30 & 0xFFFFFFF3 | v29 & 0xFFFFFFF1);
    *(_DWORD *)(Pool2 + 140) = (_DWORD)Buffer;
    *(_DWORD *)(Pool2 + 48) = v46;
    *(_DWORD *)(Pool2 + 52) = v20;
    if ( ((unsigned __int8)Buffer & 2) != 0 )
    {
      Buffer = v48[0]->Buffer;
      dmDisplayFlags = Pool2 + 108;
      do
      {
        if ( v24 == -2147483630 )
          break;
        v34 = *Buffer;
        if ( !*Buffer )
          break;
        ++Buffer;
        *(_WORD *)dmDisplayFlags = v34;
        dmDisplayFlags += 2LL;
        --v24;
      }
      while ( v24 );
      v35 = (_WORD *)(dmDisplayFlags - 2);
      if ( v24 )
        v35 = (_WORD *)dmDisplayFlags;
      *v35 = 0;
      if ( !v24 )
        *(_WORD *)(Pool2 + 108) = 0;
    }
    if ( (*(_DWORD *)(Pool2 + 140) & 1) != 0 )
    {
      dmDisplayFlags = 180LL;
      if ( v50->dmSize >= 0xB4u )
      {
        *(_DWORD *)(Pool2 + 64) = v50->dmFields;
        *(_QWORD *)(Pool2 + 68) = *(_QWORD *)&v50->dmOrientation;
        *(_DWORD *)(Pool2 + 76) = v50->dmBitsPerPel;
        *(_DWORD *)(Pool2 + 80) = v50->dmPelsWidth;
        *(_DWORD *)(Pool2 + 84) = v50->dmPelsHeight;
        *(_DWORD *)(Pool2 + 88) = v50->dmDisplayFrequency;
        *(_DWORD *)(Pool2 + 92) = v50->dmDriverExtra;
        *(_DWORD *)(Pool2 + 96) = v50->dmDisplayOrientation;
        *(_DWORD *)(Pool2 + 100) = v50->dmDisplayFixedOutput;
        dmDisplayFlags = v50->dmDisplayFlags;
        *(_DWORD *)(Pool2 + 104) = dmDisplayFlags;
      }
    }
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(dmDisplayFlags, Buffer);
    (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 304))(Pool2);
    v69[0] = (const WCHAR *)MEMORY[0xFFFFF78000000320];
    v37 = (unsigned __int64)v69[0] * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v38 = dword_1C02C4098;
    if ( (unsigned int)dword_1C02C4098 > 5 && tlgKeywordOn((__int64)&dword_1C02C4098, 0x200000000004LL) )
    {
      v43[0] = a6;
      v75 = v37;
      v76 = v71;
      v54 = v20;
      v55 = v46;
      v56 = a2 == 0LL;
      v69[0] = (const WCHAR *)(Pool2 + 108);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v39,
        byte_1C02943F6,
        &ActivityId,
        v40,
        v69,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v76,
        (__int64)&v75,
        (__int64)v43);
      v38 = dword_1C02C4098;
    }
    if ( (*(_DWORD *)(Pool2 + 140) & 1) != 0 && v38 > 5 && tlgKeywordOn((__int64)&dword_1C02C4098, 0x200000000004LL) )
    {
      v57 = *(_DWORD *)(Pool2 + 104);
      v58 = *(_DWORD *)(Pool2 + 100);
      v59 = *(_DWORD *)(Pool2 + 96);
      v60 = *(_DWORD *)(Pool2 + 92);
      v61 = *(_DWORD *)(Pool2 + 88);
      v62 = *(_DWORD *)(Pool2 + 84);
      v63 = *(_DWORD *)(Pool2 + 80);
      v64 = *(_DWORD *)(Pool2 + 72);
      v65 = *(_DWORD *)(Pool2 + 68);
      v66 = *(_DWORD *)(Pool2 + 64);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v41,
        byte_1C0294369,
        &ActivityId,
        v42,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  }
  xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(v48);
  return v20;
}
