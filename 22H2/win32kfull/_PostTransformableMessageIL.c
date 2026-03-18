/*
 * XREFs of _PostTransformableMessageIL @ 0x1C004F3FC
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00F1BB8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C004F0AC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     _PostTransformableMessage @ 0x1C004F59C (_PostTransformableMessage.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C004FA44 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C0050BB8 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ValidateDDEConvPair @ 0x1C01FB050 (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostTransformableMessageIL(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  int v9; // r9d
  __int64 v10; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdi
  void *const *WindowMessageFilter; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+64h] [rbp+Ch]

  if ( a2 - 992 <= 8 )
  {
    v15 = ValidateDDEConvPair(a3, a1);
    v9 = a5;
    if ( v15 )
      v9 = 1;
  }
  else
  {
    v9 = a5;
  }
  if ( a2 == 274 && a3 == 61488 )
  {
    LOBYTE(v16) = IAMThreadAccessGranted(gptiCurrent);
    if ( v16 )
      v9 = 1;
  }
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL || v9 )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v10 == v12 )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( a2 != 717 )
  {
    if ( !(unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v10 + 864), a2, 0LL, 0LL) )
    {
      WindowMessageFilter = GetWindowMessageFilter(a1);
      if ( !(unsigned int)IsMessageAllowedByFilterEx(WindowMessageFilter, a2, 0LL, 0LL)
        && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
        && (a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
      {
        if ( *(_QWORD *)v10 == gpepCSRSS )
        {
          v19 = 0;
          v18 = 0x2000;
        }
        else
        {
          v18 = *(_DWORD *)(v10 + 888);
          v19 = *(_DWORD *)(v10 + 892);
        }
        if ( !(unsigned __int8)CheckAccess(v12 + 888, &v18) )
        {
          if ( a2 != 793
            || (v17 = *((_QWORD *)a1 + 2), *(struct tagWND **)(v17 + 1432) != a1)
            || *(_QWORD *)(v17 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
          {
            EtwTraceUIPIMsgError(v12, v10, a2, a3, a4);
            UserSetLastError(5LL);
            return 0LL;
          }
        }
      }
    }
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  }
  return 0LL;
}
