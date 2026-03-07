char __fastcall ViCtxIsrMessageBased(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  volatile signed __int32 *v6; // rbp
  char v7; // bl
  __int64 v8; // r8

  v3 = a3;
  v6 = ViCtxCaptureInitialIsrState(a1, a2, a3);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(a2 + 16))(a1, *(_QWORD *)(a2 + 8), v3);
  if ( v6 )
    ViCtxCheckAndReleaseIsrState((__int64)v6, *(const void **)(a2 + 16), v8);
  return v7;
}
