__int64 __fastcall Interrupter_InitializeForOffload(__int64 a1)
{
  __int64 v2; // rbx
  int *v3; // rdx
  int v4; // r8d
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  _DWORD *v7; // rdx
  unsigned int *v8; // rdx
  unsigned int Ulong; // eax
  _DWORD *v10; // rdx
  __int64 result; // rax
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  memset(*(void **)(*(_QWORD *)(a1 + 144) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 144) + 44LL));
  v3 = (int *)(*(_QWORD *)(a1 + 24) + 8LL);
  v4 = (unsigned __int16)*(_DWORD *)(a1 + 108);
  if ( *(_BYTE *)(v2 + 137) )
  {
    *v3 = v4;
    _InterlockedOr(v12, 0);
  }
  else
  {
    XilRegister_WriteUlong(v2, v3, v4);
  }
  Interrupter_UpdateERDP(a1, 1);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 24LL);
  v7 = (_DWORD *)(v5 + 16);
  if ( *(_BYTE *)(v2 + 137) )
  {
    if ( (*(_QWORD *)(*(_QWORD *)(v2 + 8) + 336LL) & 1) != 0 )
    {
      *v7 = v6;
      _InterlockedOr(v12, 0);
      *(_DWORD *)(v5 + 20) = HIDWORD(v6);
    }
    else
    {
      *(_QWORD *)v7 = v6;
    }
    _InterlockedOr(v12, 0);
  }
  else
  {
    XilRegister_WriteUlong64(v2, v7, v6);
  }
  v8 = *(unsigned int **)(a1 + 24);
  if ( *(_BYTE *)(v2 + 137) )
    Ulong = *v8;
  else
    Ulong = XilRegister_ReadUlong(v2, v8);
  v10 = *(_DWORD **)(a1 + 24);
  result = Ulong | 2;
  if ( !*(_BYTE *)(v2 + 137) )
    return XilRegister_WriteUlong(v2, v10, result);
  *v10 = result;
  _InterlockedOr(v12, 0);
  return result;
}
