/*
 * XREFs of ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C01DC800
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C0054D90 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C0054DD4 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
        CBaseInput *this,
        struct CEventBitmap *a2,
        struct IRegisterInputDispatcherObjects *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 i; // rdx
  int v9; // eax
  _QWORD v11[18]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v11, 0, 0x88uLL);
  v7 = 0LL;
  *(_DWORD *)a2 = 0;
  for ( i = 0LL; ; i = *(unsigned int *)a2 )
  {
    v9 = *((_DWORD *)a2 + 1);
    if ( !v9 || (unsigned int)v7 >= 0x11 )
      break;
    if ( (v9 & 1) != 0 && CRIMBase::IsDispatcherObjectValid(this, i, v6) )
    {
      v11[v7] = CRIMBase::GetDispatcherObjectByIndex(this, *(unsigned int *)a2, v6);
      v7 = (unsigned int)(v7 + 1);
    }
    ++*(_DWORD *)a2;
    *((_DWORD *)a2 + 1) >>= 1;
  }
  return (*(__int64 (__fastcall **)(struct IRegisterInputDispatcherObjects *, _QWORD, _QWORD *))(*(_QWORD *)a3 + 8LL))(
           a3,
           (unsigned int)v7,
           v11);
}
