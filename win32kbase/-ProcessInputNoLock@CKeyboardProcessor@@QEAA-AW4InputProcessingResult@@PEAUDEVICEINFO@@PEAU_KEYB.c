__int64 __fastcall CKeyboardProcessor::ProcessInputNoLock(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // ebx
  unsigned __int64 v16; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // edi
  unsigned int v31; // esi
  unsigned int v32; // ebx
  HKL ActiveHKL; // rax
  int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // r9d
  __int64 v45; // [rsp+60h] [rbp+8h] BYREF
  BOOL v46; // [rsp+68h] [rbp+10h] BYREF

  v45 = a1;
  v5 = (unsigned int)a4;
  v6 = a3;
  if ( a2 )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13896) )
    {
      v13 = *(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 13896);
      if ( *(_DWORD *)(v13 + 88) )
      {
        v19 = *(_QWORD *)(SGDGetUserSessionState(v13, v12, v10, v14) + 13896);
        if ( !*(_DWORD *)(v19 + 116) )
        {
          v22 = *(_QWORD *)(SGDGetUserSessionState(v19, v18, v10, v20) + 13896);
          if ( *(_DWORD *)(v22 + 104) != *(_DWORD *)(a2 + 484)
            || (v22 = *(_QWORD *)(SGDGetUserSessionState(v22, v21, v10, v23) + 13896),
                *(_DWORD *)(v22 + 108) != *(_DWORD *)(a2 + 488)) )
          {
            v24 = *(_QWORD *)(SGDGetUserSessionState(v22, v21, v10, v23) + 13896);
            v25 = *(_DWORD *)(v24 + 108);
            v29 = SGDGetUserSessionState(v24, v26, v27, v28);
            v30 = *(_DWORD *)(a2 + 488);
            v31 = *(_DWORD *)(a2 + 484);
            v32 = *(_DWORD *)(*(_QWORD *)(v29 + 13896) + 104LL);
            ActiveHKL = (HKL)GetActiveHKL();
            InputTraceLogging::Keyboard::TypeSubtypeUpdated(ActiveHKL, v31, v30, v32, v25);
            SearchAndSetKbdTbl((struct DEVICEINFO *)a2, *(_DWORD *)(a2 + 484), *(_DWORD *)(a2 + 488));
            v34 = *(_DWORD *)(a2 + 484);
            v39 = *(_QWORD *)(SGDGetUserSessionState(v36, v35, v37, v38) + 13896);
            *(_DWORD *)(v39 + 104) = v34;
            v40 = *(_DWORD *)(a2 + 488);
            *(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState(v39, v41, v42, v43) + 13896) + 108LL) = v40;
          }
        }
      }
    }
    if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
    {
      InputTraceLogging::Keyboard::DropInput(1LL);
    }
    else if ( v6 )
    {
      v15 = a5;
      v16 = v6 + v5;
      do
      {
        if ( v6 >= v16 )
          break;
        if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 0x4000LL) )
        {
          LODWORD(v45) = v15;
          v46 = (*(_WORD *)(v6 + 4) & 1) == 0;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C02CA7E0,
            (unsigned int)&unk_1C029B508,
            v10,
            v44,
            (__int64)&v46,
            (__int64)&v45);
        }
        if ( (_BYTE)v15 )
        {
          ProcessKeyboardInjectedInputViaRim(v6, a2);
        }
        else
        {
          LOBYTE(v10) = 1;
          ProcessKeyboardInputWorker(v6, a2, v10);
        }
        v6 += 12LL;
      }
      while ( v6 );
    }
  }
  return 0LL;
}
