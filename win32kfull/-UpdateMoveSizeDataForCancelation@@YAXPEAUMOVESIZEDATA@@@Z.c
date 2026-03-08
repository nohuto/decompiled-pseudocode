/*
 * XREFs of ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01EC2F0
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x1C023D464 (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 */

void __fastcall UpdateMoveSizeDataForCancelation(struct MOVESIZEDATA *this)
{
  _DWORD *v1; // r8
  __int128 v2; // xmm0
  __int64 v3; // r9
  __int16 v5; // dx
  bool v6; // zf
  _DWORD *v7; // rdx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx

  v1 = (_DWORD *)((char *)this + 240);
  v2 = *(_OWORD *)((char *)this + 136);
  v3 = *((_QWORD *)this + 27);
  v5 = *((_QWORD *)this + 25) ^ (*((_QWORD *)this + 25) >> 5);
  *((_QWORD *)this + 26) = v3;
  v6 = (v5 & 0x300) == 0LL;
  v7 = (_DWORD *)((char *)this + 224);
  *(_OWORD *)((char *)this + 24) = v2;
  if ( v6 && *v1 == *v7 )
    v8 = 0;
  else
    v8 = 0x40000;
  v9 = *((_DWORD *)this + 50) & 0xFFFBFFFF;
  *((_QWORD *)this + 29) = v3;
  *v1 = *v7;
  v10 = (((unsigned __int16)(v8 | v9) | 0x1000) ^ (unsigned __int16)((v8 | v9 | 0x1000) >> 5)) & 0x100 ^ (v8 | v9 | 0x1000);
  *((_DWORD *)this + 50) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(v10 >> 5)) & 0x200;
  MOVESIZEDATA::SHData_ResetRuntimeState(this);
  *((_DWORD *)this + 50) &= ~0x80000u;
}
