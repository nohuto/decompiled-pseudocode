/*
 * XREFs of ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x18003A288
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18001AA40 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AB64 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorNotificationProcessor::ProcessPositionChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagPOINT *a2)
{
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  unsigned int v6; // edi
  __int64 *v7; // rbx
  int v9; // eax
  __int64 *v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, __int64 **))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, &v10);
  v4 = v10;
  v5 = v11;
  if ( v10 == v11 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)this + 48LL))(
      *(_QWORD *)this,
      (unsigned int)a2->x,
      (unsigned int)a2->y);
LABEL_3:
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)*v4 + 24LL))(
             *v4,
             (unsigned int)a2->x,
             (unsigned int)a2->y);
      v6 = v9;
      if ( v9 < 0 )
        break;
      if ( ++v4 == v5 )
        goto LABEL_3;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)(unsigned int)v9);
  }
  v7 = v10;
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
      v10,
      v11);
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)((v12 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return v6;
}
