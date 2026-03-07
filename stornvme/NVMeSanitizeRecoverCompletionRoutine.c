char __fastcall NVMeSanitizeRecoverCompletionRoutine(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 LocalCommand; // rax
  __int64 v6; // r11
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // ecx

  GetSrbExtension(a2);
  LocalCommand = GetLocalCommand(a1, v4);
  v7 = LocalCommand;
  if ( !LocalCommand )
    goto LABEL_2;
  if ( *(_BYTE *)(a2 + 3) != 1 )
    goto LABEL_4;
  v8 = *(_QWORD *)(v6 + 4200);
  if ( !v8 )
  {
LABEL_2:
    *(_BYTE *)(v6 + 4253) |= 8u;
    *(_BYTE *)(a2 + 3) = 4;
    return LocalCommand;
  }
  LOBYTE(LocalCommand) = *(_BYTE *)(v8 + 2) & 7;
  if ( (_BYTE)LocalCommand != 3 )
  {
LABEL_4:
    *(_BYTE *)(v6 + 4253) |= 8u;
    return LocalCommand;
  }
  v9 = *(_DWORD *)(v8 + 4);
  v10 = 1;
  if ( (v9 & 8) == 0 )
    v10 = v9 & 7;
  *(_BYTE *)(*(_QWORD *)(v7 + 96) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(v7 + 96) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(v7 + 96) + 4244LL) = 0;
  v11 = *(_QWORD *)(v7 + 96);
  v12 = *(_DWORD *)(v11 + 4136) & 0xFFFFFFF8;
  *(_BYTE *)(v11 + 4096) = -124;
  *(_DWORD *)(v11 + 4140) = 0;
  *(_DWORD *)(v11 + 4136) = (8 * ((v9 & 8) != 0)) | (v10 | v12) & 0xFFFFFC07;
  LOBYTE(LocalCommand) = ProcessCommand(a1, v7 + 8);
  return LocalCommand;
}
