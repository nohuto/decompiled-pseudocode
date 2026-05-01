/*
 * XREFs of ?Navigate@AccessibleElementBase@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x180423C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180086554 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180424238 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::Navigate(
        AccessibleElementBase *this,
        enum NavigateDirection a2,
        struct IRawElementProviderFragment **a3)
{
  int Element; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  __int64 v10; // r9
  __int64 *v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 8),
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              &v15);
  if ( Element >= 0 )
  {
    v16 = 0LL;
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              goto LABEL_16;
            v10 = 8LL;
          }
          else
          {
            v10 = 7LL;
          }
        }
        else
        {
          v10 = 6LL;
        }
      }
      else
      {
        v10 = 5LL;
      }
      v11 = (__int64 *)(*(__int64 (__fastcall **)(void *, __int64 *, _QWORD, __int64, int))(*(_QWORD *)v15 + 272LL))(
                         v15,
                         &v17,
                         0LL,
                         v10,
                         1);
    }
    else
    {
      v11 = (__int64 *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v17);
    }
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v16, v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    if ( v16 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderFragment **))(*(_QWORD *)v16 + 376LL))(
              v16,
              &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
              a3);
      Element = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11B,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v12);
LABEL_17:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_18;
      }
    }
LABEL_16:
    Element = 0;
    goto LABEL_17;
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return (unsigned int)Element;
}
