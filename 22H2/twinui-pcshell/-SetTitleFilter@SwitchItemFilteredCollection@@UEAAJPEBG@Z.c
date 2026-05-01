/*
 * XREFs of ?SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z @ 0x180403CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005E140 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804041D8 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 *     ?_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x180404694 (-_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::SetTitleFilter(
        SwitchItemFilteredCollection *this,
        const unsigned __int16 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  struct IObservableItem *v13; // [rsp+60h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 24LL))(
           *((_QWORD *)this + 2),
           &v12);
    if ( v4 < 0 )
    {
      v5 = 295LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    v6 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = 0LL;
        v7 = *((_QWORD *)this + 2);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IObservableItem **))(*(_QWORD *)v7 + 32LL))(
               v7,
               v6,
               &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27,
               &v13);
        v4 = v8;
        if ( v8 < 0 )
          break;
        v8 = SwitchItemFilteredCollection::_RegisterItemForTitleChanges(
               (SwitchItemFilteredCollection *)((char *)this - 168),
               v13);
        v4 = v8;
        if ( v8 < 0 )
        {
          v9 = 300LL;
          goto LABEL_13;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        if ( ++v6 >= v12 )
          goto LABEL_8;
      }
      v9 = 299LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      return (unsigned int)v4;
    }
LABEL_8:
    *((_BYTE *)this + 80) = 1;
  }
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (LPVOID *)this + 7,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v4 < 0 )
  {
    v5 = 306LL;
    goto LABEL_16;
  }
  v4 = SwitchItemFilteredCollection::_ApplyFilterToAllItems((SwitchItemFilteredCollection *)((char *)this - 168));
  if ( v4 < 0 )
  {
    v5 = 308LL;
    goto LABEL_16;
  }
  return (unsigned int)v4;
}
