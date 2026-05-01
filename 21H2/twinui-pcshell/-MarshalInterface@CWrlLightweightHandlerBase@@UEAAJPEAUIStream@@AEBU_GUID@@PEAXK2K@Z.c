/*
 * XREFs of ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18007BD20
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005EB14 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C26C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     IStream_Write_0 @ 0x180094986 (IStream_Write_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWrlLightweightHandlerBase::MarshalInterface(
        CWrlLightweightHandlerBase *this,
        struct IStream *pstm,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  void *v11; // rbx
  const struct _GUID *v12; // rdx
  int StdMarshaler; // esi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  void *v17; // [rsp+40h] [rbp-30h] BYREF
  void *pv; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+58h] [rbp-18h] BYREF

  v20[1] = -2LL;
  v11 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v12, &v17);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(void *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v17 + 40LL))(
                     v17,
                     pstm,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7);
    if ( StdMarshaler >= 0 )
    {
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       (char *)this + 16);
      if ( StdMarshaler >= 0 )
      {
        StdMarshaler = IStream_Write_0(pstm, (char *)this + 16, 4u);
        if ( StdMarshaler >= 0 )
        {
          StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, _QWORD *))(*(_QWORD *)pstm + 40LL))(
                           pstm,
                           0LL,
                           1LL,
                           v20);
          if ( StdMarshaler >= 0 )
          {
            StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)this + 88LL))(
                             this,
                             pstm,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7);
            if ( StdMarshaler >= 0 )
            {
              StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                               pstm,
                               0LL,
                               1LL,
                               &v19);
              if ( StdMarshaler >= 0 )
              {
                v14 = *((unsigned int *)this + 4);
                if ( v19 - v20[0] <= v14 )
                {
                  if ( v19 - v20[0] < v14 )
                  {
                    v15 = v14 - (v19 - v20[0]);
                    if ( v15 <= 0xFFFFFFFF )
                    {
                      pv = 0LL;
                      if ( is_mul_ok((unsigned int)v15, 1uLL) )
                      {
                        StdMarshaler = CTCoAllocPolicy::Alloc((void *)(unsigned int)v15, 1, (unsigned int)v15, &pv);
                        v11 = pv;
                        if ( StdMarshaler >= 0 )
                          StdMarshaler = IStream_Write_0(pstm, pv, v15);
                      }
                      else
                      {
                        StdMarshaler = -2147024362;
                      }
                      CoTaskMemFree(v11);
                    }
                    else
                    {
                      StdMarshaler = -2147024362;
                    }
                  }
                }
                else
                {
                  StdMarshaler = -2147467259;
                }
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return (unsigned int)StdMarshaler;
}
