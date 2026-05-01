/*
 * XREFs of _lambda_9d47f3ca24650e09de4b87214d29e4d8_::operator() @ 0x18001BAE0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8___::Run @ 0x18001BAD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8___--Run.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052ED0 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180081740 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x1801F9018 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_9d47f3ca24650e09de4b87214d29e4d8_::operator()(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  int v4; // edi
  int v5; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-60h]
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  __int128 v11; // [rsp+40h] [rbp-40h]
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  __int128 *v15; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF
  void *v18; // [rsp+A8h] [rbp+28h] BYREF

  v2 = a1 + 40;
  v3 = *(_QWORD *)(a1 + 88);
  if ( *(_DWORD *)v3 == 1 )
  {
    BYTE8(v11) = 0;
    LODWORD(v10) = *(_DWORD *)(v3 + 40);
    *((_QWORD *)&v10 + 1) = *(_QWORD *)(v3 + 48);
    if ( *(_BYTE *)(v3 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)&v10,
        *(const unsigned __int16 **)(v3 + 56));
    else
      *(_QWORD *)&v11 = *(_QWORD *)(v3 + 56);
    *(_QWORD *)&v12 = 0LL;
    *((_QWORD *)&v12 + 1) = v2;
    v13 = 0LL;
    v14 = 0;
    v15 = &v10;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)&v12);
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
  }
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    if ( *(_QWORD *)(a1 + 32) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v7 = CMarshaledInterface::_Unmarshal(
             (CMarshaledInterface *)(a1 + 32),
             &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
             &v18,
             1);
      v4 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC3,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
          (const char *)(unsigned int)v7,
          v9);
        goto LABEL_11;
      }
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v5 = CoreQueryWindowService(
           *(_QWORD *)a1,
           &GUID_db37659c_5741_4985_a443_dda995e92f5f,
           &GUID_c1635471_1417_4750_811f_a6122953c5a3,
           &v17);
    v4 = v5;
    if ( v5 < 0 )
    {
      v8 = 199LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))(*(_QWORD *)v17 + 48LL))(
             v17,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 24),
             v18);
      v4 = v5;
      if ( v5 >= 0 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
        v4 = 0;
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
LABEL_11:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        goto LABEL_12;
      }
      v8 = 200LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v5,
      v9);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v4,
    v9);
LABEL_12:
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v12);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)&v10);
  return (unsigned int)v4;
}
