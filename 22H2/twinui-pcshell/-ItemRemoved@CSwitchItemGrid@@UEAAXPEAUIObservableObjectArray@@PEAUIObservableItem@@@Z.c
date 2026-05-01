/*
 * XREFs of ?ItemRemoved@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804168D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FCEEC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1803FCF70 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$FindEx@VCompareToItemData@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareToItemData@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804159B0 (--$FindEx@VCompareToItemData@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Mi.c)
 */

void __fastcall CSwitchItemGrid::ItemRemoved(
        CSwitchItemGrid *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  __int64 *v5; // r15
  __int64 v6; // r8
  __int64 v7; // rax
  char *v8; // r13
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 **v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  unsigned int v15; // eax
  int v16; // eax
  char v17; // bl
  __int64 v18; // r8
  __int64 v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct IObservableItem *v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+90h] [rbp+50h] BYREF
  __int64 v23; // [rsp+98h] [rbp+58h] BYREF

  v21 = (struct IObservableItem *)*((_QWORD *)this + 80);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, (__int64 *)&v21, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v22 = 0LL;
  v21 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  v5 = (__int64 *)((char *)this - 200);
  LOBYTE(a3) = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<CompareToItemData>(
                      (__int64 *)this - 25,
                      &v21,
                      v6,
                      &v23) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( !(_BYTE)a3 )
    goto LABEL_7;
  v7 = *v5;
  v8 = (char *)this - 216;
  v9 = v23;
  LOBYTE(v21) = 1;
  v10 = *(_QWORD *)(v7 + 8 * v23);
  v11 = (__int64 **)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 27) + 384LL))(
                      (char *)this - 216,
                      &v22);
  v12 = *v11;
  v13 = **v11;
  v14 = *(_QWORD *)(*v5 + 8 * v9);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 400LL))(v10);
  v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, struct IObservableItem **))(v13 + 32))(
          v12,
          v15,
          v14,
          &v21);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x245,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v16);
LABEL_4:
    v17 = 1;
    goto LABEL_5;
  }
  if ( (_BYTE)v21 )
    goto LABEL_4;
  v17 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( v17 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v5 + 8 * v9) + 80LL))(*(_QWORD *)(*v5 + 8 * v9));
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(char *, _QWORD, __int64))(*(_QWORD *)v8 + 72LL))(v8, *(_QWORD *)(*v5 + 8 * v9), v18);
  }
LABEL_7:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
}
