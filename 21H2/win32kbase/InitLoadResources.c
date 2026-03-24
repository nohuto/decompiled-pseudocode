/*
 * XREFs of InitLoadResources @ 0x1C006F680
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0068284 (-UserInitialize@@YAJXZ.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C7464 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C01177E0 (xxxRemoteConnect.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     SetDpiDepSysMet @ 0x1C006F900 (SetDpiDepSysMet.c)
 *     EngMulDiv @ 0x1C0070E10 (EngMulDiv.c)
 *     ClearLogicalCursorPos @ 0x1C00B82E0 (ClearLogicalCursorPos.c)
 */

void *__fastcall InitLoadResources(int a1)
{
  unsigned __int16 v2; // cx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int16 v7; // cx
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  void *result; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // xmm0_8
  void *v23; // rcx
  __int64 v24; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 14, 21, (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  *((_DWORD *)gpsi + 608) = 32;
  *((_DWORD *)gpsi + 609) = 32;
  v2 = *((_WORD *)gpsi + 3499);
  if ( v2 >= 0x90u )
  {
    if ( v2 >= 0xC0u )
    {
      if ( v2 >= 0x120u )
        v3 = 4 - (v2 < 0x180u);
      else
        v3 = 2;
    }
    else
    {
      v3 = 1;
    }
  }
  else
  {
    v3 = 0;
  }
  v4 = 128;
  if ( v3 )
  {
    v18 = v3 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
          v5 = 96LL;
        else
          v5 = 128LL;
      }
      else
      {
        v5 = 64LL;
      }
    }
    else
    {
      v5 = 48LL;
    }
  }
  else
  {
    v5 = 32LL;
  }
  SetDpiDepSysMet(7LL, v5, 384LL);
  v7 = *((_WORD *)gpsi + 3499);
  if ( v7 >= 0x90u )
  {
    if ( v7 >= 0xC0u )
    {
      if ( v7 >= 0x120u )
        v8 = 4 - (v7 < 0x180u);
      else
        v8 = 2;
    }
    else
    {
      v8 = 1;
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
  {
    v20 = v8 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
          v4 = 96;
      }
      else
      {
        v4 = 64;
      }
    }
    else
    {
      v4 = 48;
    }
  }
  else
  {
    v4 = 32;
  }
  SetDpiDepSysMet(8LL, v4, v6);
  *((_DWORD *)gpsi + 606) = 32;
  *((_DWORD *)gpsi + 607) = 32;
  *((_DWORD *)gpsi + 621) = *((_DWORD *)gpsi + 606) / 2;
  *((_DWORD *)gpsi + 622) = *((_DWORD *)gpsi + 607) / 2;
  v9 = EngMulDiv(*((_DWORD *)gpsi + 606), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(5LL, v9, v10);
  v11 = EngMulDiv(*((_DWORD *)gpsi + 607), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(6LL, v11, v12);
  v13 = EngMulDiv(*((_DWORD *)gpsi + 621), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(20LL, v13, v14);
  v15 = EngMulDiv(*((_DWORD *)gpsi + 622), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(21LL, v15, v16);
  *((_DWORD *)gpsi + 492) = 0;
  *((_DWORD *)gpsi + 479) = 1;
  *((_DWORD *)gpsi + 480) = 1;
  *((_DWORD *)gpsi + 519) = 2;
  *((_DWORD *)gpsi + 520) = 2;
  *((_DWORD *)gpsi + 481) = 3;
  result = gpsi;
  *((_DWORD *)gpsi + 482) = 3;
  if ( !a1 && (!gbNonServiceSession || gbFirstInteractiveSession) )
  {
    v22 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 40LL) + 28LL), 8).m128i_u64[0];
    *((_DWORD *)gpsi + 1240) = (int)v22 / 2;
    v23 = gpsi;
    v24 = (unsigned int)(SHIDWORD(v22) >> 31);
    LODWORD(v24) = SHIDWORD(v22) % 2;
    *((_DWORD *)gpsi + 1241) = SHIDWORD(v22) / 2;
    return (void *)ClearLogicalCursorPos(v23, v24);
  }
  return result;
}
