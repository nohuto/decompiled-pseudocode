/*
 * XREFs of ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C01670A8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     ??0CCursorSizes@@QEAA@XZ @ 0x1C0135FEC (--0CCursorSizes@@QEAA@XZ.c)
 *     EditionzzzUpdateCursorSizes @ 0x1C01674A0 (EditionzzzUpdateCursorSizes.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010B1D8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GetCursorSizeFromIndex @ 0x1C012135C (GetCursorSizeFromIndex.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C012D02C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C0167380 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01D0EF0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x1C01D4018 (-UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01D40B0 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 */

void __fastcall CCursorSizes::zzzRefreshSizes(CCursorSizes *this)
{
  unsigned int v2; // r15d
  int v3; // r12d
  __int128 v4; // xmm0
  unsigned int v5; // edi
  __int128 v6; // xmm1
  _DWORD *v7; // rsi
  INT CursorSizeFromIndex; // eax
  INT v9; // eax
  __int64 i; // rdx
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // rax
  __int128 v13; // xmm1
  int *v14; // rcx
  __int64 v15; // r9
  int v16; // r8d
  unsigned int *v17; // rdx
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rbx
  char v21; // r13
  __int64 v22; // rsi
  unsigned int v23; // edi
  bool v24; // zf
  CCursorSizes *v25; // r13
  unsigned int v26; // [rsp+3Ch] [rbp-35h] BYREF
  int v27; // [rsp+40h] [rbp-31h] BYREF
  CCursorSizes *v28; // [rsp+48h] [rbp-29h]
  unsigned int v29[4]; // [rsp+50h] [rbp-21h] BYREF
  __int128 v30; // [rsp+60h] [rbp-11h]
  __int64 v31; // [rsp+70h] [rbp-1h]
  _OWORD v32[2]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v33; // [rsp+98h] [rbp+27h]

  v28 = this;
  v2 = *(_DWORD *)UPDWORDPointer(8232LL);
  CPushLock::AcquireLockExclusive((CCursorSizes *)((char *)this + 64));
  v3 = *((_DWORD *)this + 1);
  v4 = *(_OWORD *)((char *)this + 24);
  *((_DWORD *)this + 1) = v2;
  v5 = 0;
  v6 = *(_OWORD *)((char *)this + 40);
  v7 = (_DWORD *)((char *)this + 24);
  *(_OWORD *)v29 = v4;
  v31 = *((_QWORD *)this + 7);
  v30 = v6;
  do
  {
    CursorSizeFromIndex = GetCursorSizeFromIndex(v5);
    v9 = EngMulDiv(CursorSizeFromIndex, v2, 32);
    *v7 = 0;
    ++v5;
    v7[1] = v9;
    v7 += 2;
  }
  while ( v5 < 5 );
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    v11 = *(_WORD *)(*(_QWORD *)(i + 40) + 68LL);
    if ( v11 >= 0x90u )
    {
      if ( v11 >= 0xC0u )
      {
        if ( v11 >= 0x120u )
          v12 = (-(__int64)(v11 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 56;
        else
          v12 = 40LL;
      }
      else
      {
        v12 = 32LL;
      }
    }
    else
    {
      v12 = 24LL;
    }
    *(_DWORD *)((char *)this + v12) = 1;
  }
  v13 = *(_OWORD *)((char *)this + 40);
  v32[0] = *(_OWORD *)((char *)this + 24);
  v33 = *((_QWORD *)this + 7);
  v32[1] = v13;
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  if ( v2 != v3 )
    InputTraceLogging::Cursor::UpdateBaseSize(v2);
  v14 = (int *)v32;
  v15 = 5LL;
  do
  {
    v16 = *v14;
    v17 = v29;
    v18 = 5LL;
    do
    {
      if ( v16 && *v17 && v14[1] == v17[1] )
      {
        v16 = 0;
        *v17 = 0;
      }
      v17 += 2;
      --v18;
    }
    while ( v18 );
    *v14 = v16;
    v14 += 2;
    --v15;
  }
  while ( v15 );
  v19 = qword_1C0330B38;
  v20 = 0LL;
  v21 = 0;
  v22 = 5LL;
  do
  {
    if ( v29[v20] )
    {
      v23 = v29[v20 + 1];
      if ( (unsigned int)dword_1C0330B20 > 5 && (qword_1C0330B30 & 8) != 0 && (v19 & 8) == v19 )
      {
        v26 = v29[v20 + 1];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C0330B20,
          (unsigned int)&unk_1C02F12C8,
          v16,
          v15,
          (__int64)&v26);
      }
      _CleanupUnneededSystemCursorSizes(v23);
      v19 = qword_1C0330B38;
    }
    if ( *(_DWORD *)((char *)v32 + v20 * 4) )
    {
      v21 = 1;
      if ( (unsigned int)dword_1C0330B20 > 5 && (qword_1C0330B30 & 8) != 0 && (v19 & 8) == v19 )
      {
        v27 = *(_DWORD *)((char *)v32 + v20 * 4 + 4);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C0330B20,
          (unsigned int)&unk_1C02F1294,
          v16,
          v15,
          (__int64)&v27);
        v19 = qword_1C0330B38;
      }
    }
    v20 += 2LL;
    --v22;
  }
  while ( v22 );
  v24 = v21 == 0;
  v25 = v28;
  if ( !v24 )
  {
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 4u);
    KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
  }
  CCursorSizes::zzzUpdateGlobalCursorSize(v25, (const struct tagPOINT *)(gpsi + 4960LL), 1);
}
