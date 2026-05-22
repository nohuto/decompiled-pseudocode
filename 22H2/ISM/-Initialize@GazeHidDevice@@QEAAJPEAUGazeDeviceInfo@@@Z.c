/*
 * XREFs of ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x18009DA18
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B2F0 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800893A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UGazeInputInfo@@@@QEAA@_K@Z @ 0x18009D6F8 (--0-$VariableSizedPayloadStorage@UGazeInputInfo@@@@QEAA@_K@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18009DD04 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18009DE48 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18012A21C (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x18012A354 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::Initialize(GazeHidDevice *this, struct GazeDeviceInfo *a2)
{
  char *v4; // rbp
  int v5; // eax
  unsigned int v6; // esi
  NTSTATUS Caps; // eax
  int v9; // edx
  int v10; // r9d
  __int64 v11; // r8
  const char *v12; // r9
  void **v13; // rax
  const struct std::nothrow_t *v14; // rdx
  void **v15; // rdi
  int updated; // eax
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void **v19; // [rsp+30h] [rbp+8h]

  *((_QWORD *)this + 4) = a2;
  v4 = (char *)this + 128;
  v5 = GazeHidParser::Initialize((PHIDP_CAPS)this + 2, *((PHIDP_PREPARSED_DATA *)this + 6));
  v6 = v5;
  if ( v5 >= 0 )
  {
    Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 6), (PHIDP_CAPS)((char *)this + 60));
    if ( Caps >= 0 )
    {
      *((_DWORD *)a2 + 392) = 0;
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 6LL) )
        *((_DWORD *)a2 + 392) = v9 - 5;
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 10LL) )
        *((_DWORD *)a2 + 392) = v10 | 2;
      *((_DWORD *)a2 + 396) = *((_DWORD *)this + 14);
      memcpy_0((char *)a2 + 1588, *((const void **)this + 6), *((unsigned int *)this + 14));
      *((_DWORD *)this + 58) = *((unsigned __int16 *)this + 32) + 96;
      v19 = (void **)operator new(8uLL);
      v13 = VariableSizedPayloadStorage<GazeInputInfo>::VariableSizedPayloadStorage<GazeInputInfo>(
              v19,
              *((unsigned int *)this + 58),
              v11,
              v12);
      v15 = (void **)*((_QWORD *)this + 28);
      *((_QWORD *)this + 28) = v13;
      if ( v15 )
      {
        if ( *v15 )
          operator delete(*v15, v14);
        operator delete(v15, (const struct std::nothrow_t *)8);
      }
      updated = GazeHidDevice::TryUpdateDisplayMapping(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          54LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)updated);
      v17 = GazeHidDevice::TryUpdateCalibrationState(this);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          55LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)v17);
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x1C,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)Caps);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
