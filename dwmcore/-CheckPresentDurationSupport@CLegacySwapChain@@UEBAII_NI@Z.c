__int64 __fastcall CLegacySwapChain::CheckPresentDurationSupport(
        CLegacySwapChain *this,
        unsigned int a2,
        char a3,
        unsigned int a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r8d
  LARGE_INTEGER v12; // r8
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  unsigned int v15; // r13d
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned int v24; // r9d
  int v26; // [rsp+70h] [rbp+40h] BYREF
  int v27; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v28; // [rsp+88h] [rbp+58h]

  v28 = a4;
  v4 = *((unsigned int *)this + 73);
  v6 = *((unsigned int *)this + 72);
  v27 = 0;
  v26 = 0;
  v8 = 10000000 * v4 / v6;
  if ( a3 )
  {
    v12 = g_qpcFrequency;
    v13 = 1;
    while ( 1 )
    {
      v14 = a2 / v13;
      v15 = a4 / v13;
      if ( *((_QWORD *)this + 37) )
      {
        if ( CLegacySwapChain::IsValidVariableRefreshDuration(this, v12.QuadPart * (unsigned __int64)v14 / 0x989680) )
        {
          LODWORD(v8) = a2 / v13;
          return (unsigned int)v8;
        }
        if ( v17 <= v16 )
          LODWORD(v18) = 0;
        else
          v18 = 10000000 * v17 / v12.QuadPart;
        v19 = *((_QWORD *)this + 38);
        v26 = v18;
        if ( v19 && v19 < v16 )
          v20 = 10000000 * v19 / v12.QuadPart;
        else
          LODWORD(v20) = 0;
        v27 = v20;
      }
      else
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, int *))(**((_QWORD **)this + 28) + 192LL))(
                *((_QWORD *)this + 28),
                v14,
                &v27,
                &v26);
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x281u, 0LL);
          return (unsigned int)v8;
        }
        LODWORD(v20) = v27;
        LODWORD(v18) = v26;
        v12 = g_qpcFrequency;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
      {
        McTemplateU0qqqq_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&CustomDurationIterationResult,
          v14,
          v15,
          v20,
          v18);
        LODWORD(v20) = v27;
        LODWORD(v18) = v26;
        v12 = g_qpcFrequency;
      }
      v23 = -1;
      if ( (_DWORD)v20 )
        v23 = v14 - v20;
      v24 = -1;
      if ( (_DWORD)v18 )
        v24 = v18 - v14;
      if ( v23 < v24 )
        LODWORD(v18) = v20;
      else
        v23 = v24;
      if ( v23 <= v15 )
      {
        LODWORD(v8) = v18;
        return (unsigned int)v8;
      }
      ++v13;
      if ( !(_DWORD)v20 || v13 > 5 )
        return (unsigned int)v8;
      a4 = v28;
    }
  }
  if ( *((_QWORD *)this + 37) )
  {
    if ( CLegacySwapChain::IsValidVariableRefreshDuration(
           this,
           g_qpcFrequency.QuadPart * (unsigned __int64)a2 / 0x989680) )
    {
      LODWORD(v8) = a2;
    }
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, int *))(**((_QWORD **)this + 28) + 192LL))(
           *((_QWORD *)this + 28),
           a2,
           &v27,
           &v26);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x248u, 0LL);
    }
    else
    {
      v11 = v26;
      if ( (int)abs32(a2 - v27) < (int)abs32(a2 - v26) )
        v11 = v27;
      LODWORD(v8) = v11;
    }
  }
  return (unsigned int)v8;
}
