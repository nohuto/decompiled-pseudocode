__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  _DWORD *v16; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  int v18; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  unsigned __int64 v24; // rbp
  void *v25; // rax
  void *v26; // r14

  v4 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    if ( v11 )
    {
      v14 = operator new[](0x178uLL, 0x4E506456u, 256LL);
      v15 = v14;
      if ( v14 )
      {
        *(_DWORD *)v14 = 305419896;
        *(_QWORD *)(v14 + 8) = v11;
        memset((void *)(v14 + 16), 0, 0x168uLL);
        operator delete(0LL);
        v16 = (_DWORD *)(v15 + 16);
        *(_DWORD *)(v15 + 28) = *(_DWORD *)(v11 + 112);
        if ( a4 )
          ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v11);
        else
          ContentRotationHw = *(_DWORD *)(v11 + 116);
        *(_DWORD *)(v15 + 36) = ContentRotationHw;
        *(_DWORD *)(v15 + 24) = *(_DWORD *)(v11 + 104);
        *v16 = *(_DWORD *)(*(_QWORD *)(v11 + 88) + 24LL);
        *(_DWORD *)(v15 + 20) = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 24LL);
        *(_DWORD *)(v15 + 80) = *(_DWORD *)(v11 + 164);
        v18 = *(_DWORD *)(v11 + 172);
        *(_DWORD *)(v15 + 84) = v18;
        *(_DWORD *)(v15 + 348) = *(_DWORD *)(v11 + 168);
        if ( v18 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v11);
        else
          MacroVisionTriggerBits = 0;
        *(_DWORD *)(v15 + 88) = MacroVisionTriggerBits;
        if ( v15 == -32 )
          WdLogSingleEntry0(1LL);
        *(_DWORD *)(v15 + 32) = *(_DWORD *)(v11 + 120);
        if ( v15 == -40 )
          WdLogSingleEntry0(1LL);
        *(_DWORD *)(v15 + 40) = *(_DWORD *)(v11 + 124);
        v20 = *(_QWORD *)(v11 + 184);
        if ( v20 )
        {
          v21 = *(_OWORD *)(v20 + 16);
          v22 = *(_QWORD *)(v20 + 32);
        }
        else
        {
          v21 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v22 = 0LL;
        }
        *(_OWORD *)(v15 + 352) = v21;
        *(_QWORD *)(v15 + 368) = v22;
        if ( !*(_QWORD *)(v15 + 368) )
          goto LABEL_17;
        v24 = *(_QWORD *)(v15 + 360);
        v25 = (void *)operator new[](v24, 0x4E506456u, 256LL);
        v26 = v25;
        if ( v25 )
        {
          memmove(v25, *(const void **)(v15 + 368), v24);
          *(_QWORD *)(v15 + 368) = v26;
LABEL_17:
          *a3 = v16;
          v15 = 0LL;
LABEL_18:
          operator delete((void *)v15);
          return v4;
        }
        WdLogSingleEntry1(6LL, v24);
      }
      else
      {
        v15 = 0LL;
        WdLogSingleEntry1(6LL, a1);
      }
      v4 = -1073741801;
      goto LABEL_18;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v12, v13) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192375LL;
  }
}
