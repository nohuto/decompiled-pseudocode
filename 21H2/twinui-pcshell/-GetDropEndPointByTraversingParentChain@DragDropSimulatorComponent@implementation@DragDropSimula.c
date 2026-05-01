/*
 * XREFs of ?GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@PEAUHWND__@@@Z @ 0x1804D28A4
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800E1500 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E1500.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1804D050C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?GetDragDropExtensionPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$com_ptr_t@UIDragDropExtensionForOLE@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804D27E8 (-GetDragDropExtensionPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ?get@?$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceLogging@@P6AXXZ@Z @ 0x1804D583C (-get@-$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceL.c)
 */

// Hidden C++ exception states: #wind=2
HWND *__fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDropEndPointByTraversingParentChain(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *a1,
        HWND *a2,
        HWND a3)
{
  __int64 v6; // rcx
  DWORD v7; // ebx
  ATOM v8; // ax
  HANDLE PropW; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  HWND Parent; // rax
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rcx
  _BYTE v20[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  LPVOID v23[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h] BYREF
  DWORD dwProcessId; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+48h] BYREF

  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDragDropExtensionPoint(
    a1,
    v23);
  GetWindowThreadProcessId(a3, &dwProcessId);
  v7 = dwProcessId;
  while ( 1 )
  {
    if ( !a3 )
    {
      v14 = *(_DWORD **)(wil::details::static_lazy<DragDropSimulatorTraceLogging>::get(
                           v6,
                           _lambda_a3088610fb5396f8b42a9a023b177495_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v14 > 5u && tlgKeywordOn((__int64)v14, 0x400000000000LL) )
      {
        v22 = 0x2000000LL;
        LODWORD(v27) = -2147467259;
        v21 = (__int64)"Appropriate window is not found";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v15,
          byte_18059F4C7,
          v16,
          v17,
          (const wchar_t **)&v21,
          (__int64)&v27,
          (__int64)&v22);
      }
      v23[1] = 0LL;
      v22 = 0LL;
      v27 = 0LL;
      *a2 = 0LL;
      v24 = 0LL;
      a2[1] = 0LL;
      v25 = 0LL;
      a2[2] = 0LL;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
      v18 = &v22;
      goto LABEL_18;
    }
    v8 = *((_WORD *)a1 + 52);
    if ( !v8 )
    {
      v8 = GlobalAddAtomW(L"OleEndPointID");
      *((_WORD *)a1 + 52) = v8;
    }
    PropW = GetPropW(a3, (LPCWSTR)v8);
    if ( PropW )
      break;
LABEL_8:
    v21 = 0LL;
    v11 = *(_QWORD *)v23[0];
    v21 = 0LL;
    if ( (*(int (__fastcall **)(LPVOID, HWND, _QWORD, __int64 *))(v11 + 40))(v23[0], a3, 0LL, &v21) >= 0 )
    {
      v12 = v21;
      if ( v21 )
      {
        *a2 = a3;
        a2[1] = (HWND)v12;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v27 = 0LL;
        a2[2] = 0LL;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
        v18 = &v21;
LABEL_18:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v18);
        goto LABEL_19;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    Parent = GetParent(a3);
    a3 = Parent;
    if ( Parent )
    {
      GetWindowThreadProcessId(Parent, (LPDWORD)&v27);
      if ( (_DWORD)v27 == v7 )
        continue;
    }
    a3 = 0LL;
  }
  v22 = 0LL;
  if ( (int)InternalGetWindowPropInterface2(a3, PropW, 0LL, &GUID_00000160_0000_0000_c000_000000000046, &v22, v20) < 0
    || (v10 = v22) == 0 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    goto LABEL_8;
  }
  *a2 = a3;
  v27 = 0LL;
  a2[1] = 0LL;
  a2[2] = (HWND)v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
LABEL_19:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
  return a2;
}
