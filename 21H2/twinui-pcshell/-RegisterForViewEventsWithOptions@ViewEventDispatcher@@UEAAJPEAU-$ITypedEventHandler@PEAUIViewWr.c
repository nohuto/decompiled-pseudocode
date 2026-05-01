/*
 * XREFs of ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180315270
 * Callers:
 *     ?RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x180315220 (-RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@ViewM.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18007829C (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DEAC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 ViewEventDispatcher::RegisterForViewEventsWithOptions(RTL_SRWLOCK *a1, __int64 a2, ...)
{
  _QWORD *v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  int AgileReference; // ebx
  __int64 v8; // rdx
  HSTRING *v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  RTL_SRWLOCK *v14; // r13
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rdi
  UINT32 v17; // ebx
  const WCHAR *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  char *Ptr; // rcx
  RTL_SRWLOCK *v22; // r15
  void *v23; // r8
  PVOID v24; // rdx
  INT32 *v25; // rdx
  INT32 result[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v29; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  HSTRING v31; // [rsp+A0h] [rbp+50h] BYREF
  va_list va; // [rsp+A0h] [rbp+50h]
  HSTRING v33; // [rsp+A8h] [rbp+58h] BYREF
  va_list va1; // [rsp+A8h] [rbp+58h]
  __int64 v35; // [rsp+B0h] [rbp+60h]
  _QWORD *v36; // [rsp+B8h] [rbp+68h]
  va_list va2; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v31 = va_arg(va1, HSTRING);
  va_copy(va2, va1);
  v33 = va_arg(va2, HSTRING);
  v35 = va_arg(va2, _QWORD);
  v36 = va_arg(va2, _QWORD *);
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  v6 = 0LL;
  if ( v4 )
  {
    v4[3] = 0LL;
    v4[5] = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[4] = 0LL;
    *v4 = &CRefCountedObject<ViewEventRegistration>::`vftable';
    *((_DWORD *)v4 + 12) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v28 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
  if ( !v5 )
  {
    AgileReference = -2147024882;
    v8 = 1302LL;
LABEL_14:
    v11 = (unsigned int)AgileReference;
    goto LABEL_15;
  }
  v9 = (HSTRING *)(v5 + 8);
  v10 = Windows::Internal::String::Initialize((HSTRING *)(v5 + 8), (HSTRING *)va);
  AgileReference = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v8 = 1303LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v11);
    goto LABEL_35;
  }
  v12 = Windows::Internal::String::Initialize((HSTRING *)(v5 + 16), (HSTRING *)va1);
  AgileReference = v12;
  if ( v12 < 0 )
  {
    v11 = (unsigned int)v12;
    v8 = 1304LL;
    goto LABEL_15;
  }
  *(_DWORD *)(v5 + 24) = v35;
  v13 = 0LL;
  *(_QWORD *)result = 0LL;
  AgileReference = 0;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)result);
    AgileReference = RoGetAgileReference(0LL, &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9, a2, result);
    v13 = *(_QWORD *)result;
  }
  *(_QWORD *)result = 0LL;
  v29 = *(RTL_SRWLOCK **)(v5 + 32);
  *(_QWORD *)(v5 + 32) = v13;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)result);
  if ( AgileReference < 0 )
  {
    v8 = 1306LL;
    goto LABEL_14;
  }
  v14 = a1 + 33;
  AcquireSRWLockExclusive(a1 + 33);
  v29 = a1 + 33;
  if ( a1[39].Ptr )
  {
    while ( 1 )
    {
      StringLen = WindowsGetStringLen(*v9);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 8), 0LL);
      v17 = WindowsGetStringLen(*(HSTRING *)(*((_QWORD *)a1[38].Ptr + v6) + 8LL));
      v18 = WindowsGetStringRawBuffer(*(HSTRING *)(*((_QWORD *)a1[38].Ptr + v6) + 8LL), 0LL);
      if ( CompareStringOrdinal(v18, v17, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty(*(HSTRING *)(*((_QWORD *)a1[38].Ptr + v6) + 16LL)) )
          break;
        if ( WindowsIsStringEmpty(*(HSTRING *)(v5 + 16)) )
          break;
        v19 = *((_QWORD *)a1[38].Ptr + v6);
        result[0] = 0;
        WindowsCompareStringOrdinal(*(HSTRING *)(v19 + 16), *(HSTRING *)(v5 + 16), result);
        if ( !result[0] )
          break;
      }
      if ( (PVOID)++v6 >= a1[39].Ptr )
        goto LABEL_24;
      v9 = (HSTRING *)(v5 + 8);
    }
    AgileReference = -2147024809;
    v20 = 1335LL;
    goto LABEL_31;
  }
LABEL_24:
  Ptr = (char *)a1[37].Ptr;
  a1[37].Ptr = Ptr + 1;
  *(_QWORD *)(v5 + 40) = Ptr;
  v22 = a1 + 38;
  *(_QWORD *)result = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)result);
  AgileReference = 0;
  v24 = v22[1].Ptr;
  if ( v24 != v22[3].Ptr
    || (AgileReference = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                           (__int64)v22,
                           (unsigned __int64)v24 + 1,
                           v23),
        AgileReference >= 0) )
  {
    v25 = (INT32 *)((char *)v22->Ptr + 8 * (__int64)v22[1].Ptr++);
    if ( v25 )
    {
      *(_QWORD *)v25 = 0LL;
      if ( v25 != result )
      {
        *(_QWORD *)v25 = v5;
        *(_QWORD *)result = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)result);
  if ( AgileReference < 0 )
  {
    v20 = 1341LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)AgileReference);
    goto LABEL_33;
  }
  *v36 = *(_QWORD *)(v5 + 40);
  AgileReference = 0;
LABEL_33:
  if ( v14 )
    ReleaseSRWLockExclusive(v14);
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return (unsigned int)AgileReference;
}
