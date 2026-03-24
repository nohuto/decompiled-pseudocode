/*
 * XREFs of ?ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TURBULENCEEFFECT@@@Z @ 0x1801B4050
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTurbulenceEffect::ProcessUpdate(
        CTurbulenceEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TURBULENCEEFFECT *a3)
{
  *((_QWORD *)this + 19) = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 20) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 21) = *((_QWORD *)a3 + 3);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 9);
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 47) = *((_DWORD *)a3 + 11);
  (*(void (__fastcall **)(CTurbulenceEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
