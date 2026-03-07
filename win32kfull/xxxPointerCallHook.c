__int64 __fastcall xxxPointerCallHook(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned int v5; // edi
  __int128 *v7; // rbx
  unsigned __int16 *v9; // rsi
  unsigned __int64 ThreadPointerData; // rbp
  unsigned int *v11; // r14
  struct tagTHREADINFO *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int *v15; // rcx
  unsigned __int64 *v16; // r8
  void **v17; // rdx
  struct tagHOOK *Valid; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int *v22; // [rsp+20h] [rbp-78h]
  __int128 v23; // [rsp+30h] [rbp-68h] BYREF
  __int128 v24; // [rsp+40h] [rbp-58h]
  __int128 v25; // [rsp+50h] [rbp-48h]
  unsigned int v26; // [rsp+A0h] [rbp+8h]
  int v27; // [rsp+B8h] [rbp+20h] BYREF

  v26 = a1;
  v5 = a5;
  v27 = 0;
  v23 = 0LL;
  v7 = (__int128 *)a3;
  v24 = 0LL;
  v25 = 0LL;
  v9 = (unsigned __int16 *)(a3 + 16);
  ThreadPointerData = 0LL;
  v11 = (unsigned int *)(a3 + 8);
  v12 = PtiCurrentShared(a1);
  switch ( a4 )
  {
    case 3:
      if ( (unsigned int)IsMiPPointerMessage(*v11) )
        return v5;
      ThreadPointerData = GetThreadPointerData((struct tagTHREADINFO *)((char *)v12 + 1128), *v9, 0LL, 0LL, (HWND *)v22);
      break;
    case 4:
      if ( (unsigned int)IsMiPPointerMessage(*(_DWORD *)v9) )
        return v5;
      ThreadPointerData = *(_QWORD *)v7;
      break;
    case 12:
      if ( !(unsigned int)IsMiPPointerMessage(*((_DWORD *)v7 + 6)) )
        ThreadPointerData = *(_QWORD *)v11;
      break;
    default:
      return v5;
  }
  if ( ThreadPointerData )
  {
    v14 = SGDGetUserSessionState(v13);
    if ( !CTouchProcessor::IsPointerMsgRedirected(*(CTouchProcessor **)(v14 + 3424), ThreadPointerData, &v27) || v27 )
    {
      if ( a4 == 3 )
      {
        if ( !(unsigned int)MakeThreadPointerHookData((struct tagTHREADINFO *)((char *)v12 + 1128), *v9) )
          return v5;
        v20 = v7[1];
        v23 = *v7;
        v21 = v7[2];
        v7 = &v23;
        v24 = v20;
        v25 = v21;
        goto LABEL_18;
      }
      if ( a4 == 4 )
      {
        v16 = (unsigned __int64 *)v7;
        v17 = (void **)v7 + 1;
        v15 = (unsigned int *)(v7 + 1);
      }
      else
      {
        v15 = (unsigned int *)v7 + 6;
        v16 = (unsigned __int64 *)v7 + 1;
        v17 = (void **)(v7 + 1);
      }
      if ( (unsigned int)PrepareSentPointerMessageForClient(v15, v17, v16, 1) )
      {
LABEL_18:
        Valid = (struct tagHOOK *)PhkFirstValid((__int64)v12, a4);
        v5 = xxxCallHook2(Valid, v26, a2, (__int64)v7, 0LL, 0);
        RemoveThreadPointerHookData((struct tagTHREADINFO *)((char *)v12 + 1128));
      }
    }
  }
  return v5;
}
