void *__fastcall InitLoadResources(int a1, __int64 a2, __int64 a3)
{
  bool v4; // dl
  __int64 v5; // r9
  unsigned int v6; // ebx
  unsigned __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // cx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  void *result; // rax
  unsigned __int64 v25; // xmm0_8
  void *v26; // rcx
  __int64 v27; // rdx

  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v5 = 21LL;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      21,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  *((_DWORD *)gpsi + 608) = 32;
  v6 = 64;
  *((_DWORD *)gpsi + 609) = 32;
  v7 = *((_WORD *)gpsi + 3499);
  if ( v7 >= 0x90u )
  {
    if ( v7 < 0xC0u )
    {
      v8 = 48LL;
    }
    else if ( v7 < 0x120u )
    {
      v8 = 64LL;
    }
    else
    {
      v8 = v7 < 0x180u ? 96 : 128;
    }
  }
  else
  {
    v8 = 32LL;
  }
  SetDpiDepSysMet(7LL, v8, a3, v5);
  v11 = *((_WORD *)gpsi + 3499);
  if ( v11 >= 0x90u )
  {
    if ( v11 < 0xC0u )
    {
      v6 = 48;
    }
    else if ( v11 >= 0x120u )
    {
      v6 = v11 < 0x180u ? 96 : 128;
    }
  }
  else
  {
    v6 = 32;
  }
  SetDpiDepSysMet(8LL, v6, v9, v10);
  *((_DWORD *)gpsi + 606) = 32;
  *((_DWORD *)gpsi + 607) = 32;
  *((_DWORD *)gpsi + 621) = *((_DWORD *)gpsi + 606) / 2;
  *((_DWORD *)gpsi + 622) = *((_DWORD *)gpsi + 607) / 2;
  v12 = EngMulDiv(*((_DWORD *)gpsi + 606), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(5LL, v12, v13, v14);
  v15 = EngMulDiv(*((_DWORD *)gpsi + 607), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(6LL, v15, v16, v17);
  v18 = EngMulDiv(*((_DWORD *)gpsi + 621), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(20LL, v18, v19, v20);
  v21 = EngMulDiv(*((_DWORD *)gpsi + 622), *((unsigned __int16 *)gpsi + 3499), 96);
  SetDpiDepSysMet(21LL, v21, v22, v23);
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
    v25 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(*((_QWORD *)gpDispInfo + 12) + 40LL) + 28LL), 8).m128i_u64[0];
    *((_DWORD *)gpsi + 1240) = (int)v25 / 2;
    v26 = gpsi;
    v27 = (unsigned int)(SHIDWORD(v25) >> 31);
    LODWORD(v27) = SHIDWORD(v25) % 2;
    *((_DWORD *)gpsi + 1241) = SHIDWORD(v25) / 2;
    return (void *)ClearLogicalCursorPos(v26, v27);
  }
  return result;
}
