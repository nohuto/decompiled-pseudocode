/*
 * XREFs of UpdateAsyncKeyState @ 0x1C00922C0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C021D024 (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionUpdateAsyncKeyStateThreads @ 0x1C009243C (ApiSetEditionUpdateAsyncKeyStateThreads.c)
 *     PostUpdateKeyStateEvent @ 0x1C0092540 (PostUpdateKeyStateEvent.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  int v6; // r14d
  unsigned __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r14d
  __int64 v27; // rax
  char v28; // [rsp+60h] [rbp+18h]

  v28 = a3;
  v4 = (unsigned __int8)a2;
  if ( a1 && (*(_DWORD *)(a1 + 396) & 1) != 0 )
  {
    PostUpdateKeyStateEvent();
    LOBYTE(a3) = v28;
  }
  v6 = v4 & 3;
  v7 = v4 >> 2;
  v8 = 2 * v6;
  if ( (_BYTE)a3 )
  {
    v9 = SGDGetUserSessionState(a1, a2, a3, a4);
    v11 = *(unsigned __int8 *)(v9 + v7 + 13992) & ~(1 << v8);
  }
  else
  {
    v13 = SGDGetUserSessionState(a1, a2, a3, a4);
    v14 = *(unsigned __int8 *)(v13 + (v4 >> 3) + 14120) | (unsigned int)(1 << (v4 & 7));
    *(_BYTE *)(v13 + (v4 >> 3) + 14120) |= 1 << (v4 & 7);
    v18 = SGDGetUserSessionState(v14, v15, v16, v17);
    v21 = v8;
    LOBYTE(v22) = *(_BYTE *)(v18 + v7 + 13992);
    if ( ((unsigned __int8)v22 & (unsigned __int8)(1 << v8)) == 0 )
    {
      v26 = 2 * v6 + 1;
      if ( ((unsigned __int8)(1 << v26) & *(_BYTE *)(SGDGetUserSessionState(v8, v22, v19, v20) + v7 + 13992)) != 0 )
      {
        v27 = SGDGetUserSessionState(v26, v23, v24, v25);
        v21 = *(unsigned __int8 *)(v27 + v7 + 13992);
        LODWORD(v21) = v21 & ~(1 << v26);
      }
      else
      {
        v27 = SGDGetUserSessionState(v26, v23, v24, v25);
        v21 = *(unsigned __int8 *)(v27 + v7 + 13992);
        LODWORD(v21) = v21 | (1 << v26);
      }
      *(_BYTE *)(v27 + v7 + 13992) = v21;
    }
    v9 = SGDGetUserSessionState(v21, v22, v19, v20);
    v11 = *(unsigned __int8 *)(v9 + v7 + 13992) | (1 << v8);
  }
  *(_BYTE *)(v9 + v7 + 13992) = v11;
  LOBYTE(v10) = v4;
  return ApiSetEditionUpdateAsyncKeyStateThreads(a1, v10);
}
