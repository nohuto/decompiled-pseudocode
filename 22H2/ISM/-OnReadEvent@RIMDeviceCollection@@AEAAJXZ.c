/*
 * XREFs of ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x180090998
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x180090930 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180022DA8 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180022E14 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C70 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800893A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180090444 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::OnReadEvent(HANDLE *this)
{
  char v2; // si
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int *v8; // rcx
  unsigned int v9; // edi
  int Buffer; // eax
  unsigned int v11; // edi
  int InputReportFromRIM; // eax
  int v14; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v16; // [rsp+60h] [rbp+8h]
  struct RIMDevice *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0LL;
  v16 = 0;
  v2 = 1;
  v3 = *((unsigned int *)this + 680);
  if ( (_DWORD)v3 == -1073741528 )
  {
    RIMDeviceCollection::Close(this);
LABEL_14:
    v11 = 0;
    goto LABEL_15;
  }
  if ( (v3 & 0x80000000) != 0LL )
  {
    v4 = 640LL;
LABEL_22:
    v11 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)v4,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)v3);
    goto LABEL_15;
  }
  if ( (int)RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, 0, this[338], &v17, 0LL) < 0 )
    goto LABEL_25;
  v8 = (unsigned int *)*((_QWORD *)v17 + 4);
  v9 = *((unsigned __int16 *)this + 1364);
  if ( (v8[1] & 0xFFFFFEFF) != 0 )
    (*((void (__fastcall **)(HANDLE *, _QWORD, HANDLE, _QWORD))*this + 10))(
      this,
      *v8,
      this[337],
      *((unsigned __int16 *)this + 1364));
  v5 = (__int64)this[337];
  if ( (HANDLE)v5 == this[335]
    || (v16 = 1,
        RIMFreeInputBuffer(this[10]),
        this[337] = 0LL,
        Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, (const struct std::nothrow_t *)v9),
        v11 = Buffer,
        Buffer >= 0) )
  {
LABEL_25:
    if ( *((_BYTE *)this + 2736) )
    {
      SetEvent(this[7]);
    }
    else
    {
      InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this, v5, v6, v7, v14);
      if ( InputReportFromRIM < 0 )
      {
        v3 = (unsigned int)InputReportFromRIM;
        v4 = 710LL;
        goto LABEL_22;
      }
    }
    v2 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B2,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)Buffer);
LABEL_15:
  if ( v2 && v16 && this[337] )
  {
    RIMFreeInputBuffer(this[10]);
    this[337] = 0LL;
  }
  return v11;
}
