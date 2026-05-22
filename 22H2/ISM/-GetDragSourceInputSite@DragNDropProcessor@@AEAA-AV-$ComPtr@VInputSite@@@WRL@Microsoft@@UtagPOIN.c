/*
 * XREFs of ?GetDragSourceInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F981C
 * Callers:
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FB4CC (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800113C4 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011AD4 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044F88 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x1800F6510 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x1800F65A4 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F9708 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x18014930C (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall DragNDropProcessor::GetDragSourceInputSite(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 *Attached; // rax
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 *v15; // rsi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp-91h] BYREF
  int v23; // [rsp+38h] [rbp-89h]
  __int64 v24[2]; // [rsp+40h] [rbp-81h] BYREF
  GUID v25; // [rsp+50h] [rbp-71h]
  _BYTE v26[8]; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v27[3]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v28; // [rsp+80h] [rbp-41h]

  v24[1] = (__int64)a2;
  *a2 = 0LL;
  v23 = 1;
  v9 = HitTestHelper::ConvertInputTypeToPointerType(a4, a2);
  (*(void (__fastcall **)(_QWORD, _BYTE *, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
    *(_QWORD *)(a1 + 24),
    v26,
    v10,
    v9);
  v25 = GUID_NULL;
  DragNDropProcessor::GetDragManagerInputSite(a1, v24, a3, a4, a5);
  if ( v24[0] )
  {
    Attached = InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(v24[0], &v22);
    v25 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*Attached + 8) + 72LL))(*Attached + 8);
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(&v22);
  }
  v13 = *(_QWORD *)&v25.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v25.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v13 = *(_QWORD *)v25.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v13 )
  {
    v14 = (__int64 *)v27[0];
    v15 = (__int64 *)v27[1];
    while ( v14 != v15 )
    {
      InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v14, &v22);
      v16 = v22;
      if ( v22 )
      {
        v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v22 + 8) + 24LL))(v22 + 8);
        v18 = *v17 - *(_QWORD *)&v25.Data1;
        if ( *v17 == *(_QWORD *)&v25.Data1 )
          v18 = v17[1] - *(_QWORD *)v25.Data4;
        if ( !v18 )
        {
          Microsoft::WRL::ComPtr<IRawInputClient>::operator=(a2, v14);
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          break;
        }
      }
      if ( v16 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
      ++v14;
    }
  }
  v19 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v28 - 1;
  if ( (unsigned __int64)(v28 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v28);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v27, v20, v11);
  return a2;
}
