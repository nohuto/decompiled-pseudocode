/*
 * XREFs of ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C001D944
 * Callers:
 *     EditionInitGlobalCursorSizes @ 0x1C00F4640 (EditionInitGlobalCursorSizes.c)
 *     EditionzzzUpdateCursorSizes @ 0x1C00F59C0 (EditionzzzUpdateCursorSizes.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001DB98 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GetCursorSizeFromIndex @ 0x1C003AB10 (GetCursorSizeFromIndex.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00DBE14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00F0AD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C0141A3E (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x1C01A9BD8 (-UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z.c)
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
  __int128 v11; // xmm1
  int *v12; // rcx
  __int64 v13; // r9
  int v14; // r8d
  _DWORD *v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rbx
  __int64 v18; // rsi
  char v19; // r13
  bool v20; // zf
  CCursorSizes *v21; // r13
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // rax
  unsigned int v24; // edi
  int v26; // r9d
  unsigned int v27; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v28; // [rsp+40h] [rbp-91h] BYREF
  CCursorSizes *v29; // [rsp+48h] [rbp-89h]
  _OWORD v30[2]; // [rsp+50h] [rbp-81h] BYREF
  __int64 v31; // [rsp+70h] [rbp-61h]
  _OWORD v32[2]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v33; // [rsp+98h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+A0h] [rbp-31h] BYREF
  unsigned int *v35; // [rsp+C0h] [rbp-11h]
  __int64 v36; // [rsp+C8h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-1h] BYREF
  __int64 *v38; // [rsp+F0h] [rbp+1Fh]
  __int64 v39; // [rsp+F8h] [rbp+27h]

  v29 = this;
  v2 = *(_DWORD *)UPDWORDPointer(8232LL);
  CPushLock::AcquireLockExclusive((CCursorSizes *)((char *)this + 64));
  v3 = *((_DWORD *)this + 1);
  v4 = *(_OWORD *)((char *)this + 24);
  *((_DWORD *)this + 1) = v2;
  v5 = 0;
  v6 = *(_OWORD *)((char *)this + 40);
  v7 = (_DWORD *)((char *)this + 24);
  v30[0] = v4;
  v31 = *((_QWORD *)this + 7);
  v30[1] = v6;
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
    v22 = *(_WORD *)(*(_QWORD *)(i + 40) + 64LL);
    if ( v22 >= 0x90u )
    {
      if ( v22 >= 0xC0u )
      {
        if ( v22 >= 0x120u )
          v23 = (-(__int64)(v22 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 56;
        else
          v23 = 40LL;
      }
      else
      {
        v23 = 32LL;
      }
    }
    else
    {
      v23 = 24LL;
    }
    *(_DWORD *)((char *)this + v23) = 1;
  }
  v11 = *(_OWORD *)((char *)this + 40);
  v32[0] = *(_OWORD *)((char *)this + 24);
  v33 = *((_QWORD *)this + 7);
  v32[1] = v11;
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  if ( v2 != v3 )
    InputTraceLogging::Cursor::UpdateBaseSize(v2);
  v12 = (int *)v32;
  v13 = 5LL;
  do
  {
    v14 = *v12;
    v15 = v30;
    v16 = 5LL;
    do
    {
      if ( v14 && *v15 && v12[1] == v15[1] )
      {
        v14 = 0;
        *v15 = 0;
      }
      v15 += 2;
      --v16;
    }
    while ( v16 );
    *v12 = v14;
    v12 += 2;
    --v13;
  }
  while ( v13 );
  v17 = 0LL;
  v18 = 5LL;
  v19 = 0;
  do
  {
    if ( *(_DWORD *)((char *)v30 + v17) )
    {
      v24 = *(_DWORD *)((char *)v30 + v17 + 4);
      if ( (unsigned int)dword_1C035C080 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 8LL) )
      {
        v27 = v24;
        v35 = &v27;
        v36 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C035C080, (int)&dword_1C031B5BA, 0, 0, 3u, &v34);
      }
      _CleanupUnneededSystemCursorSizes(v24);
    }
    if ( *(_DWORD *)((char *)v32 + v17) )
    {
      v19 = 1;
      if ( (unsigned int)dword_1C035C080 > 5 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 8LL) )
        {
          LODWORD(v28) = v26;
          v38 = &v28;
          v39 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C035C080, (int)&dword_1C031B586, 0, 0, 3u, &v37);
        }
      }
    }
    v17 += 8LL;
    --v18;
  }
  while ( v18 );
  v20 = v19 == 0;
  v21 = v29;
  if ( !v20 )
  {
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 4u);
    KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
  }
  CCursorSizes::zzzUpdateGlobalCursorSize(v21, (const struct tagPOINT *)(gpsi + 4960LL), 1);
}
