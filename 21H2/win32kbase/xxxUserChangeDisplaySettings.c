/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1C0064A40
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C00647B0 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C00651C0 (_xxxUserChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065210 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C014A0A0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333@Z @ 0x1C014A2A4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        _OWORD *a1,
        _WORD *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  _WORD *v7; // r13
  char v9; // si
  __int64 v10; // r14
  size_t v11; // r12
  unsigned __int64 v12; // rdx
  PVOID v13; // rdi
  struct _UNICODE_STRING *Pool2; // rbx
  const void *v15; // rdx
  size_t v16; // r13
  PVOID v17; // rdi
  size_t v18; // r14
  unsigned __int64 v19; // rdx
  struct _devicemodeW *v20; // rbx
  __int64 v21; // rsi
  char *v22; // rdi
  char *v23; // rcx
  void *v24; // r12
  unsigned int v25; // r14d
  PVOID v26; // rdi
  __int64 v27; // rbx
  int v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // edx
  PWSTR Buffer; // rdx
  WCHAR *v33; // rcx
  WCHAR v34; // ax
  WCHAR *v35; // rax
  __int64 v36; // rsi
  unsigned int v37; // r8d
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // r9d
  __int64 v42; // rax
  unsigned int v43; // ebx
  __int64 v44; // rax
  char v45; // r14
  __int64 v46; // rcx
  unsigned __int16 v47; // [rsp+74h] [rbp-364h]
  struct _UNICODE_STRING *v49[2]; // [rsp+80h] [rbp-358h] BYREF
  __int128 v50; // [rsp+90h] [rbp-348h]
  struct _devicemodeW *v51; // [rsp+A0h] [rbp-338h]
  __int128 v52; // [rsp+A8h] [rbp-330h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-320h]
  struct tagTHREADINFO *v54; // [rsp+C0h] [rbp-318h]
  unsigned int v55; // [rsp+D0h] [rbp-308h]
  unsigned int v56; // [rsp+D4h] [rbp-304h]
  BOOL v57; // [rsp+D8h] [rbp-300h]
  int v58; // [rsp+DCh] [rbp-2FCh] BYREF
  int v59; // [rsp+E0h] [rbp-2F8h] BYREF
  int v60; // [rsp+E4h] [rbp-2F4h] BYREF
  int v61; // [rsp+E8h] [rbp-2F0h] BYREF
  int v62; // [rsp+ECh] [rbp-2ECh] BYREF
  int v63; // [rsp+F0h] [rbp-2E8h] BYREF
  int v64; // [rsp+F4h] [rbp-2E4h] BYREF
  int v65; // [rsp+F8h] [rbp-2E0h] BYREF
  int v66; // [rsp+FCh] [rbp-2DCh] BYREF
  int v67; // [rsp+100h] [rbp-2D8h] BYREF
  void *v68; // [rsp+108h] [rbp-2D0h]
  __int64 v69; // [rsp+110h] [rbp-2C8h]
  __int64 v70; // [rsp+118h] [rbp-2C0h]
  int v71; // [rsp+120h] [rbp-2B8h]
  __int64 v72; // [rsp+128h] [rbp-2B0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v73; // [rsp+130h] [rbp-2A8h]
  void *v74; // [rsp+138h] [rbp-2A0h]
  struct tagDESKTOP *v75; // [rsp+140h] [rbp-298h]
  _OWORD *v76; // [rsp+148h] [rbp-290h]
  int v77; // [rsp+150h] [rbp-288h]
  __int64 v78; // [rsp+158h] [rbp-280h]
  __int64 v79; // [rsp+160h] [rbp-278h]
  int v80; // [rsp+168h] [rbp-270h]
  void *Src[2]; // [rsp+170h] [rbp-268h]
  __int64 v82; // [rsp+180h] [rbp-258h]
  __int64 v83; // [rsp+188h] [rbp-250h]
  __int64 v84; // [rsp+190h] [rbp-248h]
  PVOID BackTrace[20]; // [rsp+1A0h] [rbp-238h] BYREF
  PVOID v86[20]; // [rsp+240h] [rbp-198h] BYREF
  PVOID v87[20]; // [rsp+2E0h] [rbp-F8h] BYREF
  GUID ActivityId; // [rsp+380h] [rbp-58h] BYREF

  v75 = a3;
  v7 = a2;
  v68 = a2;
  v76 = a1;
  v74 = a5;
  v73 = a7;
  ActivityId = 0LL;
  v72 = MEMORY[0xFFFFF78000000320];
  v70 = v72 * KeQueryTimeIncrement();
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  v9 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = gptiCurrent;
  if ( !a1 )
    goto LABEL_13;
  *(_OWORD *)Src = *a1;
  v10 = LOWORD(Src[0]);
  v11 = LOWORD(Src[0]);
  v12 = LOWORD(Src[0]) + 18LL;
  v80 = 1936876615;
  v84 = 260LL;
  v13 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) == 0x73726447
    && (v42 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v42) != 1936876615 )
    {
      if ( ++v42 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_3;
    }
    if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
    {
      v9 = 1;
      v12 = LOWORD(Src[0]) + 34LL;
    }
    Pool2 = (struct _UNICODE_STRING *)ExAllocatePool2(261LL, v12);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v9 && (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v13,
                                Pool2,
                                BackTrace) )
        {
          ++Pool2;
          goto LABEL_4;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v13,
                                   Pool2,
                                   BackTrace) )
      {
        goto LABEL_4;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    Pool2 = 0LL;
  }
  else
  {
LABEL_3:
    Pool2 = (struct _UNICODE_STRING *)ExAllocatePool2(261LL, v12);
  }
LABEL_4:
  v49[0] = Pool2;
  if ( !Pool2 )
  {
    xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(v49);
    return 0xFFFFFFFFLL;
  }
  if ( qword_1C029BD10 )
  {
    qword_1C029BD10(Pool2, &v49[1], Win32FreePool);
    Pool2 = v49[0];
  }
  Pool2->Buffer = &Pool2[1].Length;
  v49[0]->Length = v10;
  v49[0]->MaximumLength = v10 + 2;
  if ( (_WORD)v10 )
  {
    v15 = Src[1];
    if ( (char *)Src[1] + v10 > (void *)MmUserProbeAddress || (char *)Src[1] + v10 < Src[1] )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v49[0]->Buffer, v15, v11);
  }
  v49[0]->Buffer[v11 >> 1] = 0;
LABEL_13:
  if ( !v7 )
  {
    v21 = 16LL;
    goto LABEL_27;
  }
  if ( ((unsigned __int8)v7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v47 = v7[34];
  v16 = (unsigned __int16)v7[35];
  if ( (unsigned __int16)(v47 - 188) <= 0x20u )
  {
    v71 = 1936876615;
    v82 = 260LL;
    v17 = gpLeakTrackingAllocator;
    v18 = v16;
    v19 = v16 + 220;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
      || (v44 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_18:
      v20 = (struct _devicemodeW *)ExAllocatePool2(261LL, v19);
      v21 = 16LL;
LABEL_19:
      v51 = v20;
      if ( v20 )
      {
        if ( qword_1C029BD10 )
          qword_1C029BD10(v20, &v52, Win32FreePool);
        v22 = (char *)v68;
        if ( v47 + (_DWORD)v16 )
        {
          v23 = (char *)v68 + v47 + (unsigned int)v16;
          if ( (unsigned __int64)v23 > MmUserProbeAddress || v23 < v68 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v51, v22, v47);
        memmove(&v51[1], &v22[v47], v18);
        v51->dmSize = 220;
        v51->dmDriverExtra = v16;
        v7 = v68;
LABEL_27:
        v24 = v74;
        v25 = xxxUserChangeDisplaySettingsInternal(v49[0], v51, v75, a4, v74, a6, v73);
        v77 = 1682142037;
        v83 = 260LL;
        v26 = gpLeakTrackingAllocator;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64437355) != 0x64437355
          || (v46 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
        {
LABEL_28:
          v27 = ExAllocatePool2(260LL, 144LL);
          goto LABEL_29;
        }
        while ( *((_DWORD *)gpLeakTrackingAllocator + v46) != 1682142037 )
        {
          if ( ++v46 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_28;
        }
        v27 = ExAllocatePool2(260LL, 160LL);
        if ( !v27 )
          goto LABEL_56;
        memset(v87, 0, sizeof(v87));
        RtlCaptureStackBackTrace(0, 0x14u, v87, 0LL);
        if ( (unsigned __int64)(v27 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v26,
                                  v27,
                                  v87) )
          {
            v27 += 16LL;
LABEL_29:
            if ( v27 )
            {
              *(_DWORD *)v27 = 4;
              *(_DWORD *)(v27 + 4) = 144;
              *(_DWORD *)(v27 + 40) = 0;
              *(_QWORD *)(v27 + 32) = 0LL;
              *(_OWORD *)(v27 + 8) = 0LL;
              *(_QWORD *)(v27 + 24) = 0LL;
              *(_QWORD *)(v27 + 56) = v70;
              if ( !v7 || (v28 = 1, !v51) )
                v28 = 0;
              v29 = v28 | *(_DWORD *)(v27 + 140) & 0xFFFFFFFE;
              *(_DWORD *)(v27 + 140) = v29;
              if ( !v76 || !v49[0] || !v49[0]->Length || (v30 = 2, !v49[0]->Buffer) )
                v30 = 0;
              v31 = (v24 == 0LL ? 8 : 0) | (a6 == KernelMode ? 4 : 0) | v30 & 0xFFFFFFF3 | v29 & 0xFFFFFFF1;
              *(_DWORD *)(v27 + 140) = v31;
              *(_DWORD *)(v27 + 48) = a4;
              *(_DWORD *)(v27 + 52) = v25;
              if ( (v31 & 2) != 0 )
              {
                Buffer = v49[0]->Buffer;
                v33 = (WCHAR *)(v27 + 108);
                do
                {
                  if ( v21 == -2147483630 )
                    break;
                  v34 = *Buffer;
                  if ( !*Buffer )
                    break;
                  ++Buffer;
                  *v33++ = v34;
                  --v21;
                }
                while ( v21 );
                v35 = v33 - 1;
                if ( v21 )
                  v35 = v33;
                *v35 = 0;
                if ( !v21 )
                  *(_WORD *)(v27 + 108) = 0;
              }
              if ( (*(_DWORD *)(v27 + 140) & 1) != 0 && v51->dmSize >= 0xB4u )
              {
                *(_DWORD *)(v27 + 64) = v51->dmFields;
                *(_QWORD *)(v27 + 68) = *(_QWORD *)&v51->dmOrientation;
                *(_DWORD *)(v27 + 76) = v51->dmBitsPerPel;
                *(_DWORD *)(v27 + 80) = v51->dmPelsWidth;
                *(_DWORD *)(v27 + 84) = v51->dmPelsHeight;
                *(_DWORD *)(v27 + 88) = v51->dmDisplayFrequency;
                *(_DWORD *)(v27 + 92) = v51->dmDriverExtra;
                *(_DWORD *)(v27 + 96) = v51->dmDisplayOrientation;
                *(_DWORD *)(v27 + 100) = v51->dmDisplayFixedOutput;
                *(_DWORD *)(v27 + 104) = v51->dmDisplayFlags;
              }
              ((void (__fastcall *)(__int64))qword_1C0296790)(v27);
              v69 = MEMORY[0xFFFFF78000000320];
              v36 = v69 * KeQueryTimeIncrement();
              EtwActivityIdControl(3u, &ActivityId);
              v37 = dword_1C0288378;
              if ( (unsigned int)dword_1C0288378 > 5 && tlgKeywordOn((__int64)&dword_1C0288378, 0x200000000004LL) )
              {
                v78 = v36;
                v79 = v70;
                v55 = v25;
                v56 = a4;
                v57 = v7 == 0LL;
                v69 = v27 + 108;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
                  v38,
                  &unk_1C025B3BB,
                  &ActivityId);
                v37 = dword_1C0288378;
              }
              if ( (*(_DWORD *)(v27 + 140) & 1) != 0
                && v37 > 5
                && tlgKeywordOn((__int64)&dword_1C0288378, 0x200000000004LL) )
              {
                v58 = *(_DWORD *)(v27 + 104);
                v59 = *(_DWORD *)(v27 + 100);
                v60 = *(_DWORD *)(v27 + 96);
                v61 = *(_DWORD *)(v27 + 92);
                v62 = *(_DWORD *)(v27 + 88);
                v63 = *(_DWORD *)(v27 + 84);
                v64 = *(_DWORD *)(v27 + 80);
                v65 = *(_DWORD *)(v27 + 72);
                v66 = *(_DWORD *)(v27 + 68);
                v67 = *(_DWORD *)(v27 + 64);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v39,
                  (unsigned int)&unk_1C025B32E,
                  (unsigned int)&ActivityId,
                  v40,
                  (__int64)&v67,
                  (__int64)&v66,
                  (__int64)&v65,
                  (__int64)&v64,
                  (__int64)&v63,
                  (__int64)&v62,
                  (__int64)&v61,
                  (__int64)&v60,
                  (__int64)&v59,
                  (__int64)&v58);
              }
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                (void *)v27);
            }
LABEL_56:
            xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(v49);
            return v25;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v26,
                                     v27,
                                     v87) )
        {
          goto LABEL_29;
        }
        ExFreePoolWithTag((PVOID)v27, 0);
        v27 = 0LL;
        goto LABEL_29;
      }
      v43 = -1;
      goto LABEL_99;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v44) != 1936876615 )
    {
      if ( ++v44 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_18;
    }
    v45 = 0;
    if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
    {
      v45 = 1;
      v21 = 16LL;
      v19 = v16 + 236;
    }
    else
    {
      v21 = 16LL;
    }
    v20 = (struct _devicemodeW *)ExAllocatePool2(261LL, v19);
    if ( v20 )
    {
      memset(v86, 0, sizeof(v86));
      RtlCaptureStackBackTrace(0, 0x14u, v86, 0LL);
      if ( v45 && (unsigned __int64)((unsigned __int16)v20 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v17,
                                v20,
                                v86) )
        {
          v20 = (struct _devicemodeW *)((char *)v20 + 16);
LABEL_95:
          v18 = v16;
          goto LABEL_19;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v17,
                                   v20,
                                   v86) )
      {
        goto LABEL_95;
      }
      ExFreePoolWithTag(v20, 0);
    }
    v20 = 0LL;
    goto LABEL_95;
  }
  v43 = -2;
LABEL_99:
  xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(v49);
  return v43;
}
