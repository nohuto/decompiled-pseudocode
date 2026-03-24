/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1C0019180
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C0018E30 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     _xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0019814 (_xxxUserChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00198CC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C011E58C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333333@Z @ 0x1C011E790 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
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
  _OWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _devicemodeW *v12; // r9
  __int64 v13; // rdi
  size_t v14; // rbx
  PCUNICODE_STRING v15; // rcx
  const void *v16; // rdx
  size_t v17; // rdi
  ULONG64 v18; // rcx
  void *v19; // rdi
  unsigned int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  BOOL v26; // eax
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rdx
  _WORD *v31; // rcx
  char *v32; // r8
  __int16 v33; // ax
  _WORD *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // r9d
  unsigned int v42; // ebx
  unsigned __int16 v43; // [rsp+74h] [rbp-134h]
  PCUNICODE_STRING String1[2]; // [rsp+80h] [rbp-128h] BYREF
  __int128 v46; // [rsp+90h] [rbp-118h]
  struct _devicemodeW *v47; // [rsp+A0h] [rbp-108h]
  __int128 v48; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-F0h]
  struct tagTHREADINFO *v50; // [rsp+C0h] [rbp-E8h]
  unsigned int v51; // [rsp+D0h] [rbp-D8h]
  unsigned int v52; // [rsp+D4h] [rbp-D4h]
  BOOL v53; // [rsp+D8h] [rbp-D0h]
  int v54; // [rsp+DCh] [rbp-CCh] BYREF
  int v55; // [rsp+E0h] [rbp-C8h] BYREF
  int v56; // [rsp+E4h] [rbp-C4h] BYREF
  int v57; // [rsp+E8h] [rbp-C0h] BYREF
  int v58; // [rsp+ECh] [rbp-BCh] BYREF
  int v59; // [rsp+F0h] [rbp-B8h] BYREF
  int v60; // [rsp+F4h] [rbp-B4h] BYREF
  int v61; // [rsp+F8h] [rbp-B0h] BYREF
  int v62; // [rsp+FCh] [rbp-ACh] BYREF
  int v63; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+108h] [rbp-A0h]
  __int64 v65; // [rsp+110h] [rbp-98h]
  _OWORD *v66; // [rsp+118h] [rbp-90h]
  void *v67; // [rsp+120h] [rbp-88h]
  __int64 v68; // [rsp+128h] [rbp-80h]
  __int64 v69; // [rsp+130h] [rbp-78h]
  __int64 v70; // [rsp+138h] [rbp-70h]
  __int64 v71; // [rsp+140h] [rbp-68h]
  void *Src[2]; // [rsp+148h] [rbp-60h]
  GUID ActivityId; // [rsp+158h] [rbp-50h] BYREF

  v9 = a1;
  v66 = a1;
  v67 = a5;
  ActivityId = 0LL;
  v65 = MEMORY[0xFFFFF78000000320];
  v64 = v65 * KeQueryTimeIncrement();
  *(_OWORD *)String1 = 0LL;
  v46 = 0LL;
  v12 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = gptiCurrent;
  if ( v9 )
  {
    *(_OWORD *)Src = *v9;
    v13 = LOWORD(Src[0]);
    v14 = LOWORD(Src[0]);
    v15 = (PCUNICODE_STRING)Win32AllocPoolWithQuota(LOWORD(Src[0]) + 18LL, 1936876615LL);
    String1[0] = v15;
    v12 = 0LL;
    if ( !v15 )
      goto LABEL_54;
    if ( qword_1C0255FC0 )
    {
      qword_1C0255FC0(v15, &String1[1], Win32FreePool);
      v15 = String1[0];
      v12 = 0LL;
    }
    v15->Buffer = &v15[1].Length;
    String1[0]->Length = v13;
    String1[0]->MaximumLength = v13 + 2;
    if ( (_WORD)v13 )
    {
      v16 = Src[1];
      if ( (char *)Src[1] + v13 > (void *)MmUserProbeAddress || (char *)Src[1] + v13 < Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(String1[0]->Buffer, v16, v14);
      v12 = 0LL;
    }
    String1[0]->Buffer[v14 >> 1] = 0;
  }
  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v43 = a2[34];
    v17 = (unsigned __int16)a2[35];
    if ( (unsigned __int16)(v43 - 188) > 0x20u )
    {
      v42 = -2;
LABEL_55:
      xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(String1, v10, v11, v12);
      return v42;
    }
    v12 = (struct _devicemodeW *)Win32AllocPoolWithQuota(v17 + 220, 1936876615LL);
    v47 = v12;
    v11 = 0LL;
    if ( v12 )
    {
      if ( qword_1C0255FC0 )
      {
        qword_1C0255FC0(v12, &v48, Win32FreePool);
        v12 = v47;
      }
      if ( v43 + (_DWORD)v17 )
      {
        v18 = (ULONG64)a2 + v43 + (unsigned int)v17;
        if ( v18 > MmUserProbeAddress || v18 < (unsigned __int64)a2 )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v12 = v47;
        }
      }
      memmove(v12, a2, v43);
      memmove(&v47[1], (char *)a2 + v43, v17);
      v47->dmSize = 220;
      v47->dmDriverExtra = v17;
      v9 = v66;
      goto LABEL_23;
    }
LABEL_54:
    v42 = -1;
    goto LABEL_55;
  }
LABEL_23:
  v19 = v67;
  v20 = xxxUserChangeDisplaySettingsInternal(String1[0], v47, a3, a4, v67, a6, a7);
  v21 = Win32AllocPoolZInit(0x90uLL);
  v25 = v21;
  if ( v21 )
  {
    *(_DWORD *)v21 = 4;
    *(_DWORD *)(v21 + 4) = 144;
    *(_DWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 32) = 0LL;
    v26 = 0;
    *(_OWORD *)(v25 + 8) = 0LL;
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 56) = v64;
    if ( a2 )
      v26 = v47 != 0LL;
    v27 = v26 | *(_DWORD *)(v25 + 140) & 0xFFFFFFFE;
    *(_DWORD *)(v25 + 140) = v27;
    if ( !v9 || !String1[0] || !String1[0]->Length || (v28 = 2, !String1[0]->Buffer) )
      v28 = 0;
    v29 = (v19 == 0LL ? 8 : 0) | (a6 == KernelMode ? 4 : 0) | v28 & 0xFFFFFFF3 | v27 & 0xFFFFFFF1;
    *(_DWORD *)(v25 + 140) = v29;
    *(_DWORD *)(v25 + 48) = a4;
    *(_DWORD *)(v25 + 52) = v20;
    if ( (v29 & 2) != 0 )
    {
      v30 = 16LL;
      v31 = (_WORD *)(v25 + 108);
      v32 = (char *)String1[0]->Buffer - v25 - 108;
      do
      {
        if ( v30 == -2147483630 )
          break;
        v33 = *(_WORD *)&v32[(_QWORD)v31];
        if ( !v33 )
          break;
        *v31++ = v33;
        --v30;
      }
      while ( v30 );
      v34 = v31 - 1;
      if ( v30 )
        v34 = v31;
      *v34 = 0;
      if ( !v30 )
        *(_WORD *)(v25 + 108) = 0;
    }
    if ( (*(_DWORD *)(v25 + 140) & 1) != 0 && v47->dmSize >= 0xB4u )
    {
      *(_DWORD *)(v25 + 64) = v47->dmFields;
      *(_QWORD *)(v25 + 68) = *(_QWORD *)&v47->dmOrientation;
      *(_DWORD *)(v25 + 76) = v47->dmBitsPerPel;
      *(_DWORD *)(v25 + 80) = v47->dmPelsWidth;
      *(_DWORD *)(v25 + 84) = v47->dmPelsHeight;
      *(_DWORD *)(v25 + 88) = v47->dmDisplayFrequency;
      *(_DWORD *)(v25 + 92) = v47->dmDriverExtra;
      *(_DWORD *)(v25 + 96) = v47->dmDisplayOrientation;
      *(_DWORD *)(v25 + 100) = v47->dmDisplayFixedOutput;
      *(_DWORD *)(v25 + 104) = v47->dmDisplayFlags;
    }
    ((void (__fastcall *)(__int64))qword_1C02509C0)(v25);
    v68 = MEMORY[0xFFFFF78000000320];
    v35 = v68 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v37 = (unsigned int)dword_1C0245378;
    if ( (unsigned int)dword_1C0245378 > 5
      && (unsigned __int8)tlgKeywordOn(&dword_1C0245378, 0x200000000004LL, (unsigned int)dword_1C0245378, v36) )
    {
      v69 = v35;
      v70 = v64;
      v51 = v20;
      v52 = a4;
      v53 = a2 == 0LL;
      v71 = v25 + 108;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v38,
        &unk_1C0218712,
        &ActivityId);
      v37 = (unsigned int)dword_1C0245378;
    }
    if ( (*(_DWORD *)(v25 + 140) & 1) != 0 && (unsigned int)v37 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0245378, 0x200000000004LL, v37, v36) )
      {
        v54 = *(_DWORD *)(v25 + 104);
        v55 = *(_DWORD *)(v25 + 100);
        v56 = *(_DWORD *)(v25 + 96);
        v57 = *(_DWORD *)(v25 + 92);
        v58 = *(_DWORD *)(v25 + 88);
        v59 = *(_DWORD *)(v25 + 84);
        v60 = *(_DWORD *)(v25 + 80);
        v61 = *(_DWORD *)(v25 + 72);
        v62 = *(_DWORD *)(v25 + 68);
        v63 = *(_DWORD *)(v25 + 64);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v39,
          (unsigned int)&unk_1C0218685,
          (unsigned int)&ActivityId,
          v40,
          (__int64)&v63,
          (__int64)&v62,
          (__int64)&v61,
          (__int64)&v60,
          (__int64)&v59,
          (__int64)&v58,
          (__int64)&v57,
          (__int64)&v56,
          (__int64)&v55,
          (__int64)&v54);
      }
    }
    Win32FreePool(v25);
  }
  xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(String1, v22, v23, v24);
  return v20;
}
