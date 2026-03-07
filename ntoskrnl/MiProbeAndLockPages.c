__int64 __fastcall MiProbeAndLockPages(_DWORD *a1, char a2, int a3)
{
  int v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  _BYTE *v9; // rbx
  int v10; // edi
  int v11; // edx
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD v16[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = MiProbeAndLockPrepare((unsigned int)v16, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
  if ( v6 < 0 )
    RtlRaiseStatus((unsigned int)v6);
  v7 = MiProbeAndLockPacket(v16);
  result = MiProbeAndLockComplete(v16, v7, 3LL);
  v9 = (_BYTE *)v16[16];
  v10 = result;
  if ( v16[16] )
  {
    v11 = *(_DWORD *)(v16[16] + 52LL);
    v12 = v16[14] + (v11 & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v16[16] + 34LL) << 31));
    v13 = v11 ^ (v12 ^ v11) & 0x7FFFFFFF;
    v14 = v16[15];
    *(_DWORD *)(v16[16] + 52LL) = v13;
    v9[34] = v12 >> 31;
    v15 = v14 - v16[14];
    if ( v15 )
      MiReturnFullProcessCommitment(v16[11], v15);
    result = MiUnlockAndDereferenceVad(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus((unsigned int)v10);
  return result;
}
