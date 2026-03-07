__int64 __fastcall CommonRenderingShaderBody::GetShaderLinkingBody(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  void *v4; // rax
  __int128 v5; // xmm0
  int v6; // r10d
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !a3 )
  {
    v4 = &unk_180398480;
    goto LABEL_4;
  }
  if ( a3 == 1 )
  {
    v4 = &unk_180351830;
LABEL_4:
    *(_QWORD *)(a1 + 16) = 3106LL;
    *(_QWORD *)(a1 + 24) = v4;
    *(_BYTE *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = off_1802CB340[a2];
    v5 = *(_OWORD *)CommonRenderingShaderBody::GetInputs(v8);
    *(_DWORD *)(v3 + 48) = v6;
    *(_WORD *)(v3 + 52) = 10;
    *(_OWORD *)v3 = v5;
  }
  return v3;
}
