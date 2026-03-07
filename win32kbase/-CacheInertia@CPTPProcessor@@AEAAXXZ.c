void __fastcall CPTPProcessor::CacheInertia(CPTPProcessor *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagHID_POINTER_DEVICE_INFO *v7; // rbp
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rsi
  struct tagPOINT v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

  v2 = HMValidateHandleNoSecure(*((_QWORD *)this + 65), 19);
  if ( v2 )
  {
    v7 = *(struct tagHID_POINTER_DEVICE_INFO **)(v2 + 472);
    v8 = SGDGetUserSessionState(v4, v3, v5, v6);
    v9 = (__int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                      v8 + 16904,
                      gptCursorAsync,
                      15LL);
    v10 = v9;
    if ( v9 )
    {
      *(_OWORD *)((char *)this + 168) = *(_OWORD *)v9;
      *(_OWORD *)((char *)this + 184) = *((_OWORD *)v9 + 1);
      *(_OWORD *)((char *)this + 200) = *((_OWORD *)v9 + 2);
      *(_OWORD *)((char *)this + 216) = *((_OWORD *)v9 + 3);
      *(_OWORD *)((char *)this + 232) = *((_OWORD *)v9 + 4);
      *(_OWORD *)((char *)this + 248) = *((_OWORD *)v9 + 5);
      *(_OWORD *)((char *)this + 264) = *((_OWORD *)v9 + 6);
      *(_OWORD *)((char *)this + 280) = *((_OWORD *)v9 + 7);
      *(_OWORD *)((char *)this + 296) = *((_OWORD *)v9 + 8);
      *(_OWORD *)((char *)this + 312) = *((_OWORD *)v9 + 9);
      *(_OWORD *)((char *)this + 328) = *((_OWORD *)v9 + 10);
      *(_OWORD *)((char *)this + 344) = *((_OWORD *)v9 + 11);
      *((struct tagPOINT *)this + 45) = gptCursorAsync;
      v11 = CPTPProcessor::TransformTPScreenToHimetric(v7, gptCursorAsync);
      *((_DWORD *)this + 95) |= 1u;
      *((struct tagPOINT *)this + 46) = v11;
      v16 = SGDGetUserSessionState(v13, v12, v14, v15);
      CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(v16 + 16840), 0, 0x32u, *((void **)this + 65));
      *((_BYTE *)this + 384) = 1;
      CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)(v8 + 16904), *v10, v10[1]);
    }
  }
}
