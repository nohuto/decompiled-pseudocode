void __fastcall ViPtLogStackTrace(__int64 a1, int a2, __int64 a3, char a4)
{
  __int16 v8; // bx
  bool v9; // zf
  __int64 *v10; // rdx
  __int128 Parameter; // [rsp+30h] [rbp-1C8h] BYREF
  _QWORD v12[54]; // [rsp+40h] [rbp-1B8h] BYREF

  memset(v12, 0, 0x1A8uLL);
  v8 = VfOptionFlags;
  Parameter = 0LL;
  if ( (VfOptionFlags & 0x1000) != 0 )
    v9 = a2 == 1850304854;
  else
    v9 = VfPoolTraces == 0LL;
  if ( !v9 && !MmIsSessionAddress(a1) && (v8 & 0x1002) != 2 )
  {
    if ( VfPoolTraces )
    {
      v10 = (__int64 *)((char *)VfPoolTraces
                      + 424 * (_InterlockedIncrement(&VfPoolTracesIndex) & (unsigned int)(VfPoolTracesLength - 1)));
      v10[2] = (__int64)KeGetCurrentThread();
      *v10 = a1;
      v10[1] = a3;
      *(_QWORD *)&Parameter = v10;
    }
    else
    {
      v12[0] = a1;
      *(_QWORD *)&Parameter = v12;
      v12[1] = a3;
    }
    DWORD2(Parameter) = a2;
    BYTE12(Parameter) = a4;
    if ( KeGetCurrentIrql() > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
      ViPtLogStackCallout(&Parameter);
    else
      KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ViPtLogStackCallout, &Parameter, 0xE30uLL, 1u, 0LL);
  }
}
