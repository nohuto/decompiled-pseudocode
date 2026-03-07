char __fastcall ESM_FindAndSetTargetState(__int64 a1, unsigned int a2, _BYTE *a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rcx
  unsigned int v7; // r15d
  char v8; // bp
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  _BYTE *v14; // r9
  bool v15; // zf
  char v17; // cl
  int v18; // esi
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+90h] [rbp+8h]
  __int64 v22; // [rsp+A8h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 880);
  v5 = *(_QWORD *)(a1 + 968);
  *a3 = 0;
  v7 = v3;
  v22 = v5;
  v8 = 1;
  v20 = *(_DWORD *)(a1 + 976);
  while ( 1 )
  {
    LODWORD(v9) = 0;
    v10 = 1002;
    v11 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v7 + 852) - *(_DWORD *)(a1 + 976)));
    v12 = *(_DWORD *)(v11 + 32);
    if ( v12 != 1000 )
    {
      v13 = 0LL;
      while ( a2 != v12 )
      {
        v9 = (unsigned int)(v9 + 1);
        v13 = (unsigned int)v9;
        v12 = *(_DWORD *)(v11 + 8 * v9 + 32);
        if ( v12 == 1000 )
          goto LABEL_19;
      }
      v10 = *(_DWORD *)(v11 + 8 * v13 + 36);
      if ( v10 != 1002 )
        break;
LABEL_19:
      v5 = v22;
    }
    if ( !v7 )
      break;
    --v7;
  }
  v14 = a3;
  if ( v10 == 1000 )
    return 0;
  if ( v10 == 1002 )
  {
    ESM_LogUnhandledEvent(a1, a2, v11, a3);
    return 0;
  }
  if ( v7 < v3 )
  {
    v17 = *(_BYTE *)(a1 + 832);
    do
    {
      v18 = *(_DWORD *)(a1 + 4LL * --v3 + 852);
      if ( *(_DWORD *)(a1 + 976) == 2000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          v11,
          (_DWORD)v14,
          v19,
          *(_QWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 12LL * ((v17 - 1) & 0x3F) + 4),
          232,
          v18);
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v18;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v3;
      *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = 1000;
      v17 = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
      *(_BYTE *)(a1 + 832) = v17;
    }
    while ( v3 > v7 );
    v14 = a3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4LL * v7 + 852) - v20)) + 16LL) & 0x20) != 0 )
    *v14 = 1;
  *(_DWORD *)(a1 + 4LL * v7 + 852) = v10;
  v15 = *(_DWORD *)(a1 + 976) == 2000;
  *(_DWORD *)(a1 + 880) = v7;
  if ( v15 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v11,
      (_DWORD)v14,
      v19,
      *(_QWORD *)(a1 + 960),
      *(_DWORD *)(a1 + 12LL * ((*(_BYTE *)(a1 + 832) - 1) & 0x3F) + 4),
      a2,
      v10);
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 4) = v10;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832) + 8) = v7;
  *(_DWORD *)(a1 + 12LL * *(unsigned __int8 *)(a1 + 832)) = a2;
  *(_BYTE *)(a1 + 832) = (*(_BYTE *)(a1 + 832) + 1) & 0x3F;
  return v8;
}
