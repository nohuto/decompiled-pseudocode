/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01C7270
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01C5F24 (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01C6A28 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 */

__int64 __fastcall xxxDiscardPointerWindowFrameMessages(unsigned __int64 **a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 result; // rax
  unsigned __int64 *v7; // rax
  void *v8; // rbx
  unsigned __int64 v9; // rcx
  int v10; // edx
  int v11; // r12d
  unsigned int v12; // esi
  int v13; // edi
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edi
  __int64 ThreadWin32Thread; // rax
  HWND HwndReference; // [rsp+30h] [rbp-30h]
  __int64 v22; // [rsp+38h] [rbp-28h]
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  unsigned __int16 v26; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v2) = 0;
  v27 = 0;
  v26 = 0;
  v5 = SGDGetUserSessionState(a1);
  HwndReference = CTouchProcessor::GetHwndReference(*(CTouchProcessor **)(v5 + 3424), a2, &v26, &v27);
  result = ValidateHwnd(HwndReference);
  v22 = result;
  if ( result )
  {
    v7 = a1[58];
    v8 = 0LL;
    v9 = *v7;
    if ( ((*((_BYTE *)a1 + 680) | *(_BYTE *)(*v7 + 16)) & 0x10) != 0 )
    {
      v10 = 1;
      v9 = 48LL * v27;
      if ( v9 <= 0xFFFFFFFF && (unsigned int)v9 < 0x2710000 && (_DWORD)v9 )
      {
        v8 = (void *)Win32AllocPoolZInit((unsigned int)v9, 1735422805LL);
        v10 = 1;
      }
    }
    else
    {
      v10 = 0;
    }
    v11 = 0;
    v12 = 0;
    v13 = v8 != 0LL ? v10 : 0;
    v14 = a1[54][3];
    if ( v14 )
    {
      do
      {
        v2 = *(_QWORD *)v14;
        v15 = SGDGetUserSessionState(v9);
        if ( CTouchProcessor::IsPointerWindowFrameMessage(
               *(CTouchProcessor **)(v15 + 3424),
               a2,
               HwndReference,
               *(_DWORD *)(v14 + 24),
               *(_QWORD *)(v14 + 40),
               1) )
        {
          v16 = 0LL;
          if ( v13 && v12 < v27 )
            v16 = (__int64)v8 + 48 * v12;
          v17 = DiscardPointerMessage((__int64)a1, v14, v22, v16);
          if ( v13 && v17 == 1 )
            ++v12;
          ++v11;
        }
        v14 = v2;
      }
      while ( v2 );
      if ( v11 )
      {
        v18 = SGDGetUserSessionState(v9);
        CTouchProcessor::UpdateThreadPointerList(
          *(CTouchProcessor **)(v18 + 3424),
          (struct tagTHREADINPUTPOINTERLIST *)(a1 + 141),
          v26);
      }
    }
    if ( v13 )
    {
      v24 = 0LL;
      v23 = 0LL;
      PushW32ThreadLock((__int64)v8, &v23, (__int64)Win32FreePool);
      v19 = v2;
      if ( v12 )
      {
        do
        {
          if ( v19 >= v27 )
            break;
          xxxCallHook(0LL, 1uLL, (__int64)v8 + 48 * v19++, 3);
        }
        while ( v19 < v12 );
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v23;
    }
    if ( v8 )
      Win32FreePool(v8);
    return 1LL;
  }
  return result;
}
