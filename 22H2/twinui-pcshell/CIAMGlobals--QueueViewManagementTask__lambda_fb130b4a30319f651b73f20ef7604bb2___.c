/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_fb130b4a30319f651b73f20ef7604bb2___ @ 0x18003734C
 * Callers:
 *     _lambda_ed95610872b18a867010d7fca41407e7_::operator() @ 0x1800383C8 (_lambda_ed95610872b18a867010d7fca41407e7_--operator().c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1312c5eca8584d5a6e8e07620abebaca_____lambda_1312c5eca8584d5a6e8e07620abebaca___ @ 0x18003740C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1312c5eca8584.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_fb130b4a30319f651b73f20ef7604bb2___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  __int64 *Ptr; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edi
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = a1;
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v5 = *Ptr;
  v12[0] = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (**)(void))(v5 + 8))();
  v6 = *a2;
  v7 = (unsigned int)v2[15].Ptr;
  v12[1] = v6;
  v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1312c5eca8584d5a6e8e07620abebaca_____lambda_1312c5eca8584d5a6e8e07620abebaca___(
                    &v13,
                    v12);
  v9 = *v8;
  *v8 = 0LL;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v9, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v10;
}
