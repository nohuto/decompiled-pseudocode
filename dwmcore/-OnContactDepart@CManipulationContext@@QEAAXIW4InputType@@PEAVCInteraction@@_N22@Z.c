void __fastcall CManipulationContext::OnContactDepart(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  _QWORD *v7; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  int Key; // eax
  __int64 i; // rsi
  _QWORD *v15; // rsi
  _QWORD *v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v7 = (_QWORD *)a4;
  v16 = (_QWORD *)a4;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v16);
  v11 = v7;
  v12 = v7;
  if ( !v7 )
  {
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            a1 + 56,
            (int *)&v17);
    if ( Key == -1 )
    {
      v16 = 0LL;
    }
    else
    {
      v7 = *(_QWORD **)(*(_QWORD *)(a1 + 64) + 8LL * Key);
      v16 = v7;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v16);
    }
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v16);
    v11 = v7;
    v12 = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v11 = v7;
      v12 = v7;
    }
  }
  if ( a5 )
  {
    for ( i = (unsigned __int64)(v11 + 8) & -(__int64)(v12 != 0LL);
          i;
          i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, i) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)i + 56LL))(i, a3);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 56LL))(*(_QWORD *)(a1 + 136), a3);
  }
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    a1 + 56,
    &v17);
  if ( !a5
    && (v15 = v7 + 8, (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(v7[8] + 216LL))(v7 + 8, 0LL))
    && (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v15 + 224LL))(v7 + 8, a2, 0LL) )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v15 + 232LL))(v7 + 8, a2);
  }
  else if ( a7 )
  {
    NtDCompositionUpdatePointerCapture(0LL, a2);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, 0LL);
  CManipulationContext::CleanTreeState((__int64)v7, a1, *(RTL_SRWLOCK **)(a1 + 40), a6, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
}
