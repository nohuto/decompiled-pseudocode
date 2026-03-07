__int64 __fastcall NVMeSetIoQueueCount(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  __int16 v4; // si
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // ax
  int v7; // ecx
  unsigned __int16 v8; // bx
  __int64 v9; // rax
  char v10; // cl
  __int64 result; // rax

  v2 = a2;
  if ( a2 )
  {
    v4 = *(_WORD *)(a1 + 336);
    v5 = *(_WORD *)(a1 + 338);
  }
  else
  {
    *(_DWORD *)(a1 + 336) = 0;
    if ( *(_BYTE *)(a1 + 20) )
    {
      v4 = 1;
      v5 = 1;
    }
    else
    {
      v6 = *(_WORD *)(a1 + 48);
      if ( !v6 )
      {
        v6 = *(_WORD *)(a1 + 242);
        if ( (unsigned int)(*(_DWORD *)(a1 + 164) - 3) > 1 )
          v6 *= 2;
      }
      v7 = *(_DWORD *)(a1 + 132);
      if ( v7 )
        v6 += v7;
      v5 = *(_WORD *)(a1 + 50);
      if ( !v5 )
      {
        v8 = *(_WORD *)(a1 + 280);
        if ( v8 <= 1u )
          v5 = 1;
        else
          v5 = v8 - 1;
      }
      if ( v7 )
        v5 += v7;
      v4 = v5;
      if ( v6 > v5 )
        v4 = v6;
    }
  }
  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v9 = *(_QWORD *)(a1 + 1040);
  *(_WORD *)(v9 + 4142) = v5 - 1;
  *(_BYTE *)(v9 + 4096) = 9;
  *(_BYTE *)(v9 + 4136) = 7;
  *(_WORD *)(v9 + 4140) = v4 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4224LL) = NVMeSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4232LL) = v2;
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  v10 = *(_BYTE *)(a1 + 955);
  if ( v10 == 1 )
    return 0LL;
  result = 3238002689LL;
  if ( v10 == 5 )
    return 3238002700LL;
  return result;
}
