/*
 * XREFs of ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x1800B4960
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18001AA40 (-OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AB64 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCursorOrientation@Cursor@InputTraceLogging@@SAX_KN@Z @ 0x1800B4A68 (-UpdateCursorOrientation@Cursor@InputTraceLogging@@SAX_KN@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorNotificationProcessor::ProcessOrientationChangeNotification(
        CursorNotificationProcessor *this,
        double a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  unsigned int *v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 *v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v12; // [rsp+70h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 **))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, &v8);
  v2 = v8;
  v3 = v9;
  if ( v8 == v9 )
  {
LABEL_5:
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v4 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v2 + 40LL))(*v2, &v12);
      InputTraceLogging::Cursor::UpdateCursorOrientation(*v4, a2);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 104LL))(*v2);
      v6 = v5;
      if ( v5 < 0 )
        break;
      if ( ++v2 == v3 )
      {
        v2 = v8;
        goto LABEL_5;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotific"
               "ationprocessor.cpp",
      (const char *)(unsigned int)v5);
    v2 = v8;
  }
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
      v2,
      v9);
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((v10 - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return v6;
}
