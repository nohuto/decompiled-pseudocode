__int64 __fastcall CManipulationContext::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  __int64 v6; // r14
  char v8; // bl
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // r8
  bool v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rsi
  char v18; // bl
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+18h] BYREF

  v21 = a3;
  v8 = a5;
  v20 = *(_QWORD *)(a2 + 8);
  v6 = v20;
  v12 = 0;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v20);
  v15 = (unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                        a1 + 56,
                        (__int64)&v21,
                        (__int64)&v20) == 0;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v15 )
  {
    v12 = -2147024882;
  }
  else
  {
    InputTraceLogging::GestureTargeting::SetInteractionChain(a3, *(const struct CInteraction **)(a2 + 8));
    v16 = *(_QWORD *)(a2 + 8);
    if ( (*(_BYTE *)(v16 + 192) & 0x20) != 0
      && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v16 + 64) + 80LL))(v16 + 64, a4, 0LL) )
    {
      *(_BYTE *)(a1 + 28) |= 2u;
    }
    if ( a6 )
      NtDCompositionUpdatePointerCapture(*(unsigned int *)(*(_QWORD *)(a2 + 8) + 188LL), a3);
    if ( !*(_QWORD *)(a1 + 48) )
      Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(a1 + 48), *(_QWORD *)a2);
    *(_BYTE *)(a1 + 28) = *(_BYTE *)(a1 + 28) & 0xF7 | (8
                                                      * CManipulationContext::CheckForSingleTarget(
                                                          *(const struct CInteraction **)(a1 + 48),
                                                          (const struct InputSinks *)(*(_QWORD *)(a1 + 48) + 72LL)));
  }
  if ( !v8 || (*(_BYTE *)(a1 + 28) & 1) != 0 )
  {
    v17 = *(_QWORD *)(a2 + 8);
    v18 = v8 ^ 1;
    while ( 1 )
    {
      LOBYTE(v14) = *(_BYTE *)(a1 + 28) & 1;
      if ( !v17 )
        break;
      LOBYTE(v13) = v18;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(v17 + 64) + 40LL))(v17 + 64, v13, v14, a4);
      v17 = *(_QWORD *)(v17 + 216);
    }
    LOBYTE(v13) = v18;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 136) + 40LL))(
      *(_QWORD *)(a1 + 136),
      v13,
      v14,
      a4);
  }
  return v12;
}
