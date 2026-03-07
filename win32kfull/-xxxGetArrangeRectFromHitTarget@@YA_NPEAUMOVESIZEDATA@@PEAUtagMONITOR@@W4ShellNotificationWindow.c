char __fastcall xxxGetArrangeRectFromHitTarget(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, struct tagWND *a5)
{
  char v9; // dl
  int v10; // r8d
  int v11; // eax
  int v12; // r10d
  int v13; // r14d
  int v14; // edx
  int v15; // ecx
  int v16; // r9d
  int v17; // eax
  int v18; // r11d
  int v19; // edx
  int v20; // r8d
  unsigned int v21; // edi
  __m128i v22; // [rsp+58h] [rbp-30h] BYREF

  if ( (unsigned __int8)xxxGetArrangeRectFromShell(a1, a2, a3, a5) )
    return 1;
  if ( *(_DWORD *)(a1 + 296) != 2 && a4 <= 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        1u,
        0x1Bu,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
        a4);
    *(__m128i *)a5 = *GetMonitorWorkRectForWindow(&v22, a2, *(const struct tagWND **)(a1 + 16));
    if ( a4 )
    {
      if ( a4 == 1 )
      {
        *((_DWORD *)a5 + 2) = *(_DWORD *)a5 + (*((_DWORD *)a5 + 2) - *(_DWORD *)a5) / 2;
        *(_DWORD *)(a1 + 200) |= 0x100u;
      }
      else
      {
        *(_DWORD *)a5 = *((_DWORD *)a5 + 2) - (*((_DWORD *)a5 + 2) - *(_DWORD *)a5) / 2;
        *(_DWORD *)(a1 + 200) |= 0x200u;
      }
    }
    *(struct tagRECT *)a5 = *WindowMargins::ExtendRect(
                               (struct tagRECT *)&v22,
                               *(struct tagRECT **)(a1 + 16),
                               a5,
                               (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 60LL));
    v10 = *(_DWORD *)(a1 + 112);
    v11 = v10;
    v12 = *((_DWORD *)a5 + 2);
    v13 = *(_DWORD *)a5;
    v14 = v12 - *(_DWORD *)a5;
    v15 = *(_DWORD *)(a1 + 104);
    if ( v10 >= v14 )
      v11 = *((_DWORD *)a5 + 2) - *(_DWORD *)a5;
    if ( v15 <= v11 )
    {
      v15 = *((_DWORD *)a5 + 2) - *(_DWORD *)a5;
      if ( v10 < v14 )
        v15 = *(_DWORD *)(a1 + 112);
    }
    v16 = *(_DWORD *)(a1 + 116);
    v17 = v16;
    v18 = *((_DWORD *)a5 + 1);
    v19 = *((_DWORD *)a5 + 3) - v18;
    v20 = *(_DWORD *)(a1 + 108);
    if ( v16 >= v19 )
      v17 = *((_DWORD *)a5 + 3) - v18;
    if ( v20 <= v17 )
    {
      v20 = *((_DWORD *)a5 + 3) - v18;
      if ( v16 < v19 )
        v20 = *(_DWORD *)(a1 + 116);
    }
    *((_DWORD *)a5 + 3) = v18 + v20;
    if ( a4 && (v21 = a4 - 1) != 0 )
    {
      if ( v21 == 1 )
        *(_DWORD *)a5 = v12 - v15;
    }
    else
    {
      *((_DWORD *)a5 + 2) = v13 + v15;
    }
    return 1;
  }
  return 0;
}
