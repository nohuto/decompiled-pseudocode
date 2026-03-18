/*
 * XREFs of ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C02146D4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAJAEBUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@Z @ 0x1C022C108 (-Add@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@Q.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C022C284 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C023C4E8 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CapturePointer(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  int v9; // ebx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DirectComposition::CResourceMarshaler *v13; // rdi
  unsigned int v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  if ( !CInputManager::OwnsPointerId(*(_DWORD *)(a1 + 1720), a4) )
    return (unsigned int)-1073741790;
  v10 = (unsigned int)(a2 - 1);
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( v10 >= *(_QWORD *)(a1 + 80) )
    return (unsigned int)-1073741811;
  _mm_lfence();
  v11 = *(_QWORD *)(a1 + 56);
  v12 = v10 * *(_QWORD *)(a1 + 88);
  v13 = *(struct DirectComposition::CResourceMarshaler **)(v12 + v11);
  if ( !v13
    || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v13 + 96LL))(*(_QWORD *)(v12 + v11), 87LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( !a3 )
  {
    v9 = CDynamicArray<unsigned int,2003858261>::Grow((char *)v13 + 288);
    if ( v9 >= 0 )
    {
      *(_DWORD *)(*((_QWORD *)v13 + 36) + 4LL * (unsigned int)(*((_DWORD *)v13 + 74))++) = a4;
      *((_DWORD *)v13 + 4) |= 0x80u;
    }
    goto LABEL_12;
  }
  if ( a3 != 1 )
    return (unsigned int)-1073741811;
  v16 = a5;
  v15 = a4;
  v9 = CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Add(
         (char *)v13 + 304,
         &v15);
LABEL_12:
  if ( v9 >= 0 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList((DirectComposition::CApplicationChannel *)a1, v13);
  return (unsigned int)v9;
}
