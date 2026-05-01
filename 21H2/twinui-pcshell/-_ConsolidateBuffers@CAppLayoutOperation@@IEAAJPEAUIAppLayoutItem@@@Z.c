/*
 * XREFs of ?_ConsolidateBuffers@CAppLayoutOperation@@IEAAJPEAUIAppLayoutItem@@@Z @ 0x1804EEEB8
 * Callers:
 *     ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180476F14 (-QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperation::_ConsolidateBuffers(CAppLayoutOperation *this, struct IAppLayoutItem *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 4LL);
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    return (unsigned int)-2147319767;
  }
  else
  {
    v5 = 0;
    if ( v4 == 2 )
    {
      v9 = 0LL;
      v6 = *((_QWORD *)this + 5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      if ( (*(int (__fastcall **)(__int64, struct IAppLayoutItem *, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 120LL))(
             v6,
             a2,
             0xFFFFFFFFLL,
             4LL,
             &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
             &v9) >= 0
        || (v7 = *((_QWORD *)this + 5),
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9),
            v5 = (*(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *, __int64))(*(_QWORD *)v7 + 120LL))(
                   v7,
                   a2,
                   1LL),
            v5 >= 0) )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 288LL))(*((_QWORD *)this + 5), v9);
        if ( v5 >= 0 )
        {
          v10 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
          v5 = (**(__int64 (__fastcall ***)(struct IAppLayoutItem *, GUID *, __int64 *))a2)(
                 a2,
                 &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04,
                 &v10);
          if ( v5 >= 0 )
          {
            v11 = 0LL;
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v10 + 104LL))(v10, 0LL, &v11);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
  }
  return (unsigned int)v5;
}
