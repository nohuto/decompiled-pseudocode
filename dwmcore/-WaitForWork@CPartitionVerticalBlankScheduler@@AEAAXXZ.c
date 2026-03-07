void __fastcall CPartitionVerticalBlankScheduler::WaitForWork(HANDLE *this)
{
  __int64 v2; // rsi
  void *OcclusionEvent; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // r15
  ULONGLONG TickCount64; // rax
  int v7; // edi
  HANDLE *v8; // r15
  HANDLE v9; // rcx
  __m128i *p_si128; // rdi
  int v11; // edx
  int v12; // ecx
  DWORD v13; // r8d
  char v14; // di
  char v15; // r13
  char v16; // r12
  int v17; // eax
  int v18; // esi
  int v19; // r15d
  int v20; // r14d
  int v21; // edi
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // ecx
  int v28; // r9d
  signed int LastError; // eax
  DWORD v30; // [rsp+40h] [rbp-30h] BYREF
  int v31; // [rsp+44h] [rbp-2Ch] BYREF
  __m128i si128; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v33[16]; // [rsp+58h] [rbp-18h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  v2 = 4LL;
  OcclusionEvent = CDisplayManager::GetOcclusionEvent((CDisplayManager *)this);
  if ( OcclusionEvent )
    this[4] = OcclusionEvent;
  else
    v2 = 3LL;
  v5 = g_renderThreadTick;
  g_renderThreadTick = 0LL;
  if ( v5 )
  {
    TickCount64 = GetTickCount64();
    v7 = TickCount64 - v5;
    if ( TickCount64 - v5 > (unsigned int)CCommonRegistryData::RenderThreadTimeoutMilliseconds
      && !IsDebuggerPresent()
      && !(unsigned int)IsKernelDebuggerPresent()
      && (unsigned int)dword_1803E0B40 > 5
      && (unsigned __int8)tlgKeywordOn(&dword_1803E0B40, 0x400000000000LL) )
    {
      v31 = v7;
      si128.m128i_i64[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v27,
        (unsigned int)&unk_18037BFEB,
        v4,
        v28,
        (__int64)&si128,
        (__int64)&v31);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFW_Start,
      v4,
      1LL,
      &si128);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Compositor_Context, &WaitForWork_Start, v4, 1LL, &si128);
  v8 = this + 1;
  v30 = WaitForMultipleObjects(v2, this + 1, 0, 0);
  if ( v30 >= (unsigned int)v2 )
  {
    while ( 1 )
    {
      v22 = (*(__int64 (__fastcall **)(HANDLE, _QWORD, char *, __int64, _DWORD, DWORD *))(*(_QWORD *)this[10] + 32LL))(
              this[10],
              (unsigned int)v2,
              (char *)this + 8,
              0xFFFFFFFFLL,
              0,
              &v30);
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x13Du, 0LL);
        v24 = -1;
        v30 = -1;
      }
      else
      {
        v24 = v30;
      }
      if ( v24 < (unsigned int)v2 )
        break;
      v25 = (*(__int64 (__fastcall **)(HANDLE, __int64))(*(_QWORD *)this[10] + 24LL))(this[10], 3LL);
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x14Bu, 0LL);
    }
  }
  v9 = this[3];
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !CancelWaitableTimer(v9) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  *((_DWORD *)this + 1158) = -1;
  p_si128 = &si128;
  do
  {
    p_si128->m128i_i32[0] = WaitForSingleObject(*v8++, 0);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
    --v2;
  }
  while ( v2 );
  v13 = v30;
  v14 = 0;
  if ( !v30 || !si128.m128i_i32[0] )
    v14 = 1;
  if ( v30 == 1 || !si128.m128i_i32[1] )
    v14 |= 2u;
  v15 = si128.m128i_i8[8];
  if ( v30 == 2 || !si128.m128i_i32[2] )
    v14 |= 4u;
  v16 = si128.m128i_i8[12];
  if ( v30 == 3 || !si128.m128i_i32[3] )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT,
        v30,
        1LL,
        v33);
    CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)this[8] + 27));
    v13 = v30;
    v14 |= 8u;
  }
  v17 = dword_1803E2BE0;
  v18 = v14 & 1;
  if ( (v14 & 1) != 0 )
  {
    v17 = dword_1803E2BE0 | 8;
    dword_1803E2BE0 |= 8u;
  }
  v19 = v14 & 2;
  if ( (v14 & 2) != 0 )
  {
    v17 |= 0x10u;
    dword_1803E2BE0 = v17;
  }
  v20 = v14 & 4;
  if ( (v14 & 4) != 0 )
  {
    v17 |= 2u;
    dword_1803E2BE0 = v17;
  }
  v21 = v14 & 8;
  if ( v21 )
    dword_1803E2BE0 = v17 | 4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    McTemplateU0qqqqq_EventWriteTransfer(v12, v11, v13, si128.m128i_i32[0], si128.m128i_i8[4], v15, v16);
    v13 = v30;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0qtttt_EventWriteTransfer(v21 != 0, v11, v13, v18, v19 != 0, v20 != 0, v21 != 0);
  g_renderThreadTick = GetTickCount64();
}
