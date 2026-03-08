/*
 * XREFs of ?VisualRemoveChild@CChannel@@UEAAJII@Z @ 0x180043A30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1801CD330 (-QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CChannel::VisualRemoveChild(CChannel *this, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rdx
  int v11[4]; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v14; // [rsp+60h] [rbp+20h] BYREF
  void *v15; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    v14 = 0LL;
    v15 = 0LL;
    v9 = CChannel::QueryResourceInterface(this, a2, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v15);
    v7 = v9;
    if ( v9 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
      v9 = CChannel::QueryResourceInterface(this, a3, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v14);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v15 + 136LL))(v15, v14);
        v7 = v9;
        if ( v9 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
          return 0LL;
        }
        v10 = 1422LL;
      }
      else
      {
        v10 = 1420LL;
      }
    }
    else
    {
      v10 = 1419LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9,
      v11[0]);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, this);
    CChannel::CheckHandle(this, a2, 196LL);
    CChannel::CheckHandle(this, a3, 196LL);
    v11[0] = 393;
    v11[1] = a2;
    v11[2] = a3;
    v6 = CChannel::SendCommand(this, v11, 0xCu);
    v7 = v6;
    if ( v6 >= 0 )
    {
      CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v12);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v6,
      v11[0]);
    CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v12);
  }
  return v7;
}
