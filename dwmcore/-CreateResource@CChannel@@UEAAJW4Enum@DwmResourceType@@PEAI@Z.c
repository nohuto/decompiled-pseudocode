/*
 * XREFs of ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x180043EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z @ 0x180044220 (-CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x180044320 (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetFreeHandle@CChannel@@AEAAIXZ @ 0x18004434C (-GetFreeHandle@CChannel@@AEAAIXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::CreateResource(struct CChannel *a1, unsigned int a2, unsigned int *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned int FreeHandle; // eax
  unsigned int v10; // esi
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-40h]
  unsigned int v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v16[4]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v19; // [rsp+98h] [rbp+38h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v17, a1);
  v6 = CChannel::MilTypeFromDwmType(a2, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 721LL;
    goto LABEL_10;
  }
  v15 = 0LL;
  v8 = *((_QWORD *)a1 + 8);
  if ( v8 )
  {
    v10 = v14;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, __int64 *))(*(_QWORD *)v8 + 24LL))(
           v8,
           v14,
           &v19,
           &v15);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_4;
    v12 = 728LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v6,
      v13);
    goto LABEL_5;
  }
  FreeHandle = CChannel::GetFreeHandle(a1);
  v10 = v14;
  v19 = FreeHandle;
  v16[0] = 44;
  v16[1] = FreeHandle;
  v16[2] = v14;
  v6 = CChannel::SendCommand(a1, v16, 0xCu);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 736LL;
    goto LABEL_10;
  }
LABEL_4:
  CChannel::CreateNewHandleTableEntry(a1, v19, v10, v15);
  v7 = 0;
  *a3 = v19;
LABEL_5:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v17);
  return v7;
}
