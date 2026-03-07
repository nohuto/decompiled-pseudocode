__int64 __fastcall KdpGetContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  int v8; // edi
  __int64 v9; // r9
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // ebx

  result = 2048LL;
  v5 = *(unsigned __int16 *)(a1 + 6);
  if ( (unsigned __int16)v5 >= 0x800u )
    goto LABEL_15;
  v8 = 0;
  v9 = KiProcessorBlock[v5];
  if ( !v9 )
    goto LABEL_15;
  if ( (_WORD)v5 != (unsigned __int16)KeGetPcr()->Prcb.Number )
    a3 = *(_QWORD *)(v9 + 35264);
  v10 = *(_DWORD *)(a3 + 48);
  v11 = 1264;
  if ( (v10 & 0x100040) == 0x100040 )
    v11 = MEMORY[0xFFFFF780000003E8] + 800;
  v12 = v11 + 32;
  if ( (v10 & 0x100080) != 0x100080 )
    v12 = v11;
  result = *(unsigned __int16 *)(a2 + 2);
  v13 = v12 + 15;
  if ( v13 <= (unsigned int)result )
  {
    KdpInitializeExtendedContext(*(_QWORD *)(a2 + 8), v10);
    result = KdpCopyContext(*(char **)(a2 + 8), v10, (_BYTE *)a3);
    if ( (v10 & 0x100040) != 0x100040 && (v10 & 0x100080) != 0x100080 )
      LOWORD(v13) = 1232;
    *(_WORD *)a2 = v13;
  }
  else
  {
LABEL_15:
    v8 = -1073741823;
  }
  *(_DWORD *)(a1 + 8) = v8;
  return result;
}
