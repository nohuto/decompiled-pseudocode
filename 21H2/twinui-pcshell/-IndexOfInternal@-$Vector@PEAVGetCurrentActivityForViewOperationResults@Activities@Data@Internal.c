/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@IPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@25@PEAIPEAE@Z @ 0x1802A33CC
 * Callers:
 *     ?IndexOf@?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@25@PEAIPEAE@Z @ 0x1802A31E0 (-IndexOf@-$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$?RUITreeNode@ComposableShell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITreeNode@ComposableShell@Internal@Windows@@0PEA_N@Z @ 0x1801B259C (--$-RUITreeNode@ComposableShell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITreeNode@Co.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x1801B2DFC (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Z @ 0x1802A3A44 (-Localize@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // edi
  unsigned int i; // esi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __m128i v16; // [rsp+30h] [rbp-10h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+30h] BYREF
  bool v18; // [rsp+80h] [rbp+40h] BYREF

  v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
  v18 = 0;
  v9 = 0;
  for ( i = 0; i < a3; ++i )
  {
    if ( v9 < 0 )
      return (unsigned int)v9;
    v11 = 0LL;
    v17 = 0LL;
    v16 = *a2;
    v9 = 0;
    v12 = v16.m128i_i64[0];
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v16, 8)) )
    {
      v9 = XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Localize(
             v16.m128i_i64[0],
             &v15);
    }
    else
    {
      v15 = v16.m128i_i64[0];
      if ( !v16.m128i_i64[0] )
        goto LABEL_9;
      (*(void (**)(void))(*(_QWORD *)v16.m128i_i64[0] + 8LL))();
    }
    if ( v9 >= 0 )
    {
      v12 = v15;
LABEL_9:
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v12;
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>((__int64 *)&v17);
      v17 = v11;
    }
    if ( v9 >= 0 )
    {
      v9 = XWinRT::InterfaceEquals::operator()<Windows::Internal::ComposableShell::ITreeNode>(v13, a4, v11, &v18);
      if ( v9 >= 0 && v18 )
      {
        *a6 = 1;
        *a5 = i;
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>((__int64 *)&v17);
        return (unsigned int)v9;
      }
    }
    XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>((__int64 *)&v17);
    ++a2;
  }
  return (unsigned int)v9;
}
