/*
 * XREFs of ?TryBack@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x1803422D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewWrapperBase::TryBack(__int64 a1, __int64 a2)
{
  unsigned int AgileReference; // ebx
  __int64 v5; // r14
  RTL_SRWLOCK *v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 v13; // [rsp+60h] [rbp+40h] BYREF
  __int64 v14; // [rsp+68h] [rbp+48h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 120LL))(a1 - 8) )
  {
    v5 = 0LL;
    v13 = 0LL;
    if ( a2 )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      AgileReference = RoGetAgileReference(0LL, &GUID_4874a3f0_c856_52e6_ab24_d29fbf386438, a2, &v12);
      v5 = (__int64)v12;
      v12 = 0LL;
      v14 = 0LL;
      v13 = v5;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      if ( (AgileReference & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x608,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)AgileReference);
LABEL_22:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        return AgileReference;
      }
    }
    v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
    AcquireSRWLockExclusive(v6);
    v12 = v6;
    if ( *(_QWORD *)(a1 + 184) )
    {
      if ( *(_BYTE *)(a1 + 460) )
      {
        AgileReference = -2147483638;
        v7 = 1552LL;
LABEL_19:
        v9 = AgileReference;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)v9);
        if ( v6 )
          ReleaseSRWLockExclusive(v6);
        goto LABEL_22;
      }
      if ( *(_DWORD *)(a1 + 280) == 4 && *(_DWORD *)(a1 + 284) == 4 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 504LL) + 120LL))(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 504LL));
        AgileReference = v8;
        if ( v8 >= 0 )
        {
          *(_BYTE *)(a1 + 460) = 1;
          v13 = 0LL;
          v12 = *(RTL_SRWLOCK **)(a1 + 464);
          *(_QWORD *)(a1 + 464) = v5;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
          if ( v6 )
            ReleaseSRWLockExclusive(v6);
          AgileReference = 0;
          goto LABEL_22;
        }
        v9 = (unsigned int)v8;
        v7 = 1567LL;
        goto LABEL_20;
      }
      v7 = 1564LL;
    }
    else
    {
      v7 = 1549LL;
    }
    AgileReference = -2147019873;
    goto LABEL_19;
  }
  AgileReference = -2147467263;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x601,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x80004001LL);
  return AgileReference;
}
