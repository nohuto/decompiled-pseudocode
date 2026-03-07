RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3, int a4)
{
  __int64 v8; // rax
  int v9; // edi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rsi
  __int64 ProcessWow64Process; // rax
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rsi
  char v20; // cl
  int v22; // [rsp+54h] [rbp-64h] BYREF
  char *v23; // [rsp+58h] [rbp-60h] BYREF
  __int64 v24; // [rsp+60h] [rbp-58h] BYREF
  struct _RECTL v25; // [rsp+68h] [rbp-50h] BYREF
  __int64 v26; // [rsp+78h] [rbp-40h]

  v24 = (__int64)this;
  v8 = HmgLock((unsigned int)a2, 4);
  *(_QWORD *)this = v8;
  v23 = (char *)this + 8;
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a3;
  if ( !v8 )
    return this;
  v9 = 1;
  if ( a4 && *(_WORD *)(v8 + 12) != 1 )
  {
    if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
    {
      v22 = 0;
      v24 = 0x1000000LL;
      LODWORD(v23) = 82559;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C02C93D8,
        (unsigned int)&unk_1C0295532,
        v10,
        v11,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v22);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    goto LABEL_34;
  }
  if ( *(_DWORD *)(v8 + 80) )
  {
    if ( !(unsigned int)GrepIsPreviousModeKernel() )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v9 = 0;
    }
    goto LABEL_32;
  }
  v13 = *(_QWORD *)(HmgPentryFromPobj((_DWORD *)v8) + 16);
  if ( !v13 )
    goto LABEL_32;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v15 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v15 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !v15 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    goto LABEL_32;
  }
  ProcessWow64Process = PsGetProcessWow64Process(*(_QWORD *)v15);
  v17 = *(unsigned int *)(v15 + 292);
  v18 = *(_DWORD *)(v15 + 292);
  if ( ProcessWow64Process )
    v19 = v17 ^ (unsigned int)__ROR4__(v13, 32 - (v18 & 0x1F));
  else
    v19 = __ROR8__(v13, 64 - (v18 & 0x3Fu)) ^ v17;
  if ( v19 )
  {
    v25 = *(struct _RECTL *)v19;
    v26 = *(_QWORD *)(v19 + 16);
    v20 = _mm_cvtsi128_si32((__m128i)v25);
    if ( (v20 & 0x11) == 0x10 )
    {
      if ( (v20 & 0x20) == 0 )
        goto LABEL_32;
      if ( v25.top == 1 )
      {
        RGNOBJ::vSet(this);
LABEL_30:
        *(_DWORD *)v19 &= ~0x20u;
        goto LABEL_32;
      }
      if ( v25.top != 2 )
        goto LABEL_32;
      if ( (((v25.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((HIDWORD(v26) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v26 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v25.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        RGNOBJ::vSet(this, (const struct _RECTL *const)&v25.right);
        goto LABEL_30;
      }
    }
    v9 = 0;
  }
LABEL_32:
  if ( !v9 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_34:
    *((_QWORD *)this + 1) = 0LL;
    *(_QWORD *)this = 0LL;
  }
  return this;
}
