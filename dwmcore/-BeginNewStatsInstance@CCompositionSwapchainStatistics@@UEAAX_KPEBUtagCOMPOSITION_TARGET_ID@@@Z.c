void __fastcall CCompositionSwapchainStatistics::BeginNewStatsInstance(
        CCompositionSwapchainStatistics *this,
        __int64 a2,
        const struct tagCOMPOSITION_TARGET_ID *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  _DWORD *v8; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v10[3]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 288LL))(*((_QWORD *)this + 2)) > *((_DWORD *)this + 14) )
  {
    *((_QWORD *)this + 6) = a2;
    v6 = *((_QWORD *)this + 4);
    v11 = 0LL;
    memset(v10, 0, sizeof(v10));
    v12 = 0;
    if ( v6 == *((_QWORD *)this + 5) )
    {
      std::vector<CompositionFrameInstance>::_Emplace_reallocate<CompositionFrameInstance const &>(
        (const void **)this + 3,
        (_BYTE *)v6,
        (__int64)v10);
    }
    else
    {
      *(_OWORD *)v6 = 0LL;
      *(_OWORD *)(v6 + 16) = 0LL;
      *(_OWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 48) = v11;
      *(_DWORD *)(v6 + 56) = 0;
      *((_QWORD *)this + 4) += 60LL;
    }
    v7 = *((_QWORD *)this + 4);
    if ( a3 )
    {
      *(_QWORD *)(v7 - 56) = *(_QWORD *)a3;
      *(_DWORD *)(v7 - 48) = *((_DWORD *)a3 + 4);
      *(_DWORD *)(v7 - 44) = *((_DWORD *)a3 + 6);
      *(_QWORD *)(v7 - 40) = *((_QWORD *)a3 + 1);
      v8 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 80LL))(
                       *((_QWORD *)this + 2),
                       v9);
      if ( *(_DWORD *)(v7 - 40) != *v8 || *(_DWORD *)(v7 - 36) != v8[1] )
        *(_BYTE *)(v7 - 32) = 1;
    }
    else
    {
      *(_DWORD *)(v7 - 60) = 1;
    }
  }
}
