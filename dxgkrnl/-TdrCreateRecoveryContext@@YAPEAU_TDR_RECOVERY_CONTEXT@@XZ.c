struct _TDR_RECOVERY_CONTEXT *TdrCreateRecoveryContext(void)
{
  __int64 Pool2; // rax
  struct _TDR_RECOVERY_CONTEXT *v1; // rbx

  Pool2 = ExAllocatePool2(64LL, 2920LL, 1380209782LL);
  v1 = (struct _TDR_RECOVERY_CONTEXT *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_DWORD *)(Pool2 + 116) = 0;
    *(_DWORD *)Pool2 = 1380209782;
    *(_DWORD *)(Pool2 + 112) = 1380209782;
    *(_DWORD *)(Pool2 + 128) = 12;
    *(_DWORD *)(Pool2 + 2784) = g_TdrConfig;
    *(_DWORD *)(Pool2 + 2788) = dword_1C013BA74;
    *(_DWORD *)(Pool2 + 2792) = dword_1C013BA80;
    *(_QWORD *)(Pool2 + 120) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(Pool2 + 2836) = 1380209782;
  }
  else
  {
    WdLogSingleEntry1(2LL, 2920LL);
  }
  return TdrReferenceRecoveryContext(v1);
}
