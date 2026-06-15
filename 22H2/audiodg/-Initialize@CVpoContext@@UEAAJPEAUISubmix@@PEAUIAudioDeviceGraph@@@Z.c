/*
 * XREFs of ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x14004E000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x14004DC4C (-Add@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVpoContext::Initialize(CVpoContext *this, struct ISubmix *a2, struct IAudioDeviceGraph *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  int v10[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v12; // [rsp+68h] [rbp+20h] BYREF

  *((_DWORD *)this + 20) = _InterlockedIncrement((volatile signed __int32 *)&CVpoContext::s_VpoContextId);
  v12 = (char *)this - 8;
  ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
    (__int64)this,
    (_DWORD *)this + 20,
    &v12);
  v6 = 0LL;
  *(_QWORD *)v10 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  *(_QWORD *)v10 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct ISubmix *, GUID *, int *))a2)(
         a2,
         &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee,
         v10);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v6 = *(_QWORD *)v10;
LABEL_5:
    *((_QWORD *)this + 8) = v6;
    *((_QWORD *)this + 9) = a3;
    v8 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
    (const char *)(unsigned int)v7);
LABEL_6:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v10);
  return v8;
}
