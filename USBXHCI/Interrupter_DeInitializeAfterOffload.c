/*
 * XREFs of Interrupter_DeInitializeAfterOffload @ 0x1C003DCEC
 * Callers:
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0032DE0 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 * Callees:
 *     XilRegister_WriteUlong64 @ 0x1C0014C68 (XilRegister_WriteUlong64.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_i @ 0x1C001C5CC (WPP_RECORDER_SF_i.c)
 *     XilRegister_ReadUlong64 @ 0x1C003F338 (XilRegister_ReadUlong64.c)
 */

__int64 __fastcall Interrupter_DeInitializeAfterOffload(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned int *v4; // rdx
  __int64 v5; // rdi
  unsigned int Ulong; // r8d
  unsigned int *v7; // rdx
  unsigned int v8; // r8d
  unsigned int *v9; // rdx
  int v10; // eax
  int *v11; // rdx
  int v12; // r8d
  _QWORD *v13; // rdx
  unsigned int i; // ecx
  char v15; // r10
  int v16; // r11d
  unsigned int v17; // ebx
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rdx
  int v21; // ebp
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  __int64 result; // rax
  signed __int32 v26[8]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 64));
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(unsigned int **)(v2 + 24);
  v5 = *(_QWORD *)(v3 + 88);
  if ( *(_BYTE *)(v5 + 137) )
    Ulong = *v4;
  else
    Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v4);
  v7 = *(unsigned int **)(v2 + 24);
  v8 = Ulong & 0xFFFFFFFD;
  if ( *(_BYTE *)(v5 + 137) )
  {
    *v7 = v8;
    _InterlockedOr(v26, 0);
  }
  else
  {
    XilRegister_WriteUlong(v5, v7, v8);
  }
  v9 = *(unsigned int **)(v2 + 24);
  if ( *(_BYTE *)(v5 + 137) )
    v10 = *v9;
  else
    v10 = XilRegister_ReadUlong(v5, v9);
  if ( (v10 & 1) != 0 )
  {
    v11 = *(int **)(v2 + 24);
    if ( *(_BYTE *)(v5 + 137) )
    {
      *v11 = v10;
      _InterlockedOr(v26, 0);
    }
    else
    {
      XilRegister_WriteUlong(v5, v11, v10);
    }
  }
  v12 = 0;
  v13 = *(_QWORD **)(v2 + 160);
  i = 0;
  v15 = 0;
  v16 = 0;
  if ( (_QWORD *)(v2 + 160) != v13 )
  {
    v17 = *(_DWORD *)(v2 + 116);
    do
    {
      v18 = v13[2];
      for ( i = 0; i < v17; ++i )
      {
        if ( v12 || i )
        {
          if ( v16 != (*(_DWORD *)(v18 + 16LL * i + 12) & 1) )
          {
            v15 = 1;
            goto LABEL_25;
          }
        }
        else
        {
          v16 = *(_DWORD *)(v18 + 12) & 1;
        }
      }
      v13 = (_QWORD *)*v13;
      ++v12;
    }
    while ( (_QWORD *)(v2 + 160) != v13 );
  }
LABEL_25:
  v19 = v15 != 0 ? i : 0;
  v20 = *(_QWORD *)(v2 + 24) + 24LL;
  v21 = v15 != 0 ? v12 : 0;
  if ( !*(_BYTE *)(v5 + 137) )
    XilRegister_ReadUlong64(v5, v20);
  v22 = v21 & 7 | (*(_QWORD *)(*(_QWORD *)(v2 + 144) + 24LL) + 16 * v19) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v20,
      9,
      65,
      (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
      v22);
  }
  v23 = *(_QWORD *)(v2 + 24);
  v24 = (_DWORD *)(v23 + 24);
  if ( !*(_BYTE *)(v5 + 137) )
    return XilRegister_WriteUlong64(v5, v24, v22);
  result = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 336LL);
  if ( (result & 1) != 0 )
  {
    *v24 = v22;
    _InterlockedOr(v26, 0);
    *(_DWORD *)(v23 + 28) = HIDWORD(v22);
  }
  else
  {
    *(_QWORD *)v24 = v22;
  }
  _InterlockedOr(v26, 0);
  return result;
}
