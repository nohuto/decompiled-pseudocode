/*
 * XREFs of _lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator() @ 0x180030590
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___ @ 0x18003BD60 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002A49C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18002C774 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x18002FD24 (-IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800B2680 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator()(__int64 a1, unsigned int a2)
{
  PCWSTR StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  CreativeFramework::CreativeEventStore *v6; // rax
  int v7; // eax
  ContentManagement *v8; // rcx
  const unsigned __int16 *v9; // rdx
  _QWORD *v10; // rdi
  char v11; // bl
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  char *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx
  int v21; // eax
  _BYTE *v22; // rdx
  _QWORD v24[3]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD *v25; // [rsp+50h] [rbp-21h]
  _BYTE v26[24]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE *v27; // [rsp+70h] [rbp-1h]
  _QWORD v28[3]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v29; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 16), 0LL);
  v5 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 8), 0LL);
  v6 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  v7 = CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
         v6,
         v5,
         (const unsigned __int16 *)a2,
         (__int64)StringRawBuffer);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x209,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180030855LL);
  }
  v8 = (ContentManagement *)WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 16), 0LL);
  if ( ContentManagement::IsHighPriorityEvent(v8, v9) )
  {
    v28[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
    v28[1] = ContentManagement::BatterySaverOverrideEventNotificationHandler;
    v29 = v28;
    v10 = v28;
    v11 = 1;
    v12 = v25;
  }
  else
  {
    v13 = &unk_18019B150;
    while ( *(_DWORD *)v13 != **(_DWORD **)(a1 + 24) )
    {
      v13 += 5;
      if ( v13 == (_QWORD *)&unk_18019B1C8 )
      {
        v24[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
        v24[1] = ContentManagement::NormalEventNotificationHandler;
        v12 = v24;
        v25 = v24;
        goto LABEL_14;
      }
    }
    v25 = 0LL;
    v14 = (char *)v13[4];
    if ( v14 )
    {
      if ( v14 == (char *)(v13 + 1) )
        v15 = v24;
      else
        v15 = 0LL;
      v25 = (_QWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD *))v14)(v14, v15);
      v12 = v25;
    }
    else
    {
      v12 = 0LL;
      v25 = 0LL;
    }
LABEL_14:
    v10 = v24;
    v11 = 6;
  }
  v27 = 0LL;
  v16 = v10[3];
  if ( v16 )
  {
    if ( (_QWORD *)v16 == v10 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v16 + 8LL))(v10[3], v26);
      v27 = (_BYTE *)v16;
      v18 = (_QWORD *)v10[3];
      if ( !v18 )
      {
LABEL_22:
        v12 = v25;
        goto LABEL_23;
      }
      LOBYTE(v17) = v18 != v10;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v18 + 32LL))(v18, v17, v16);
      v16 = (__int64)v27;
    }
    else
    {
      v27 = (_BYTE *)v10[3];
    }
    v10[3] = 0LL;
    goto LABEL_22;
  }
  v16 = 0LL;
  v27 = 0LL;
LABEL_23:
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v12 )
    {
      v19 = v24;
      LOBYTE(v19) = v12 != v24;
      (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v12 + 32LL))(v12, v19, v16);
      v25 = 0LL;
      v16 = (__int64)v27;
    }
  }
  if ( (v11 & 1) != 0 && v29 )
  {
    v20 = v28;
    LOBYTE(v20) = v29 != v28;
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v29 + 32LL))(v29, v20, v16);
    v29 = 0LL;
    v16 = (__int64)v27;
  }
  if ( !v16 )
    std::_Xbad_function_call();
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v21);
  if ( v27 )
  {
    v22 = v26;
    LOBYTE(v22) = v27 != v26;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v27 + 32LL))(v27, v22);
  }
  return 0LL;
}
