void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  bool v4; // si
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  char v8; // al
  char v9; // r9
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // edx
  __int64 v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+30h] [rbp-40h]
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  __int64 v27; // [rsp+68h] [rbp-8h]

  if ( CInteractionTracker::ShouldNotify(this, 0) )
  {
    v3 = (__int64 *)(v2 + 480);
    if ( !*(_DWORD *)(v2 + 504)
      || (v4 = 1, *(_DWORD *)(*(_QWORD *)(v2 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v2 + 504) - 1))) )
    {
      v4 = 0;
    }
    CInteractionTracker::SendPendingStateChangeCallbacks(this, v4);
    LOBYTE(v6) = *((_BYTE *)this + 540);
    if ( (v6 & 6) != 0 )
    {
      v7 = *((_DWORD *)this + 22);
      LOBYTE(v6) = (v6 & 4) != 0;
      v24 = *((_QWORD *)this + 10);
      v25 = v7;
      v8 = CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v24, v5, v6);
      *((_BYTE *)this + 540) &= 0xF9u;
      v9 = v8;
      if ( !v4 )
        return;
      v10 = *v3;
      v11 = *((_DWORD *)this + 22);
      v12 = 3LL * (unsigned int)(*((_DWORD *)v3 + 6) - 1);
      *(_QWORD *)(v10 + 8 * v12 + 4) = *((_QWORD *)this + 10);
      *(_DWORD *)(v10 + 8 * v12 + 12) = v11;
      *(_DWORD *)(*v3 + 24LL * (unsigned int)(*((_DWORD *)v3 + 6) - 1) + 16) = *((_DWORD *)this + 34);
    }
    else
    {
      v9 = 0;
      if ( !v4 )
        return;
    }
    if ( *((char *)this + 540) >= 0 && !v9 )
      CInteractionTracker::SendPendingStateChangeCallbacks(this, 0);
  }
  else
  {
    v13 = *((_DWORD *)this + 126);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1240LL) + 40LL);
    v15 = 0;
    if ( v13 )
    {
      while ( *(_DWORD *)(*((_QWORD *)this + 60) + 24LL * v15) )
      {
        if ( ++v15 >= v13 )
          goto LABEL_23;
      }
      v16 = *((_QWORD *)this + 6);
      if ( v16 )
        v17 = *(_DWORD *)(v16 + 76);
      else
        v17 = 0;
      v18 = *((_QWORD *)this + 10);
      v25 = *((_DWORD *)this + 22);
      v26 = v17;
      v19 = *((unsigned int *)this + 16);
      v24 = v18;
      v27 = v19;
      CoreUICallSend(v14, &v26, 2LL, 11LL, 0, &unk_18033941F, &v24);
      v20 = *((_DWORD *)this + 47);
      v21 = *((_QWORD *)this + 6);
      if ( v21 )
        v22 = *(unsigned int *)(v21 + 76);
      else
        v22 = 0LL;
      v26 = v22;
      v27 = *((unsigned int *)this + 16);
      LODWORD(v23) = v20;
      CoreUICallSend(
        v14,
        &v26,
        2LL,
        11LL,
        3,
        &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_nojTCorKGaq7usLSlUi67Vt3n6A,
        v23);
    }
LABEL_23:
    *((_DWORD *)this + 126) = 0;
  }
}
