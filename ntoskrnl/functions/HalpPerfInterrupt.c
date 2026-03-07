char __fastcall HalpPerfInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // di
  __int64 (__fastcall *v3)(); // rax
  __int64 (__fastcall *v4)(); // rax

  v1 = *(_QWORD *)(a1 + 136);
  v2 = 0;
  if ( HalpProfileInterface == &EmonProfileInterface
    && (HalpProfileFeatures & 1) != 0
    && (__readmsr(0x38Eu) & 0x80000000000000LL) != 0 )
  {
    if ( (_BYTE)KdDebuggerNotPresent && (__readmsr(0x570u) & 0x111100000000LL) != 0 )
      KeBugCheckEx(0x17Bu, 0LL, 0x570uLL, __readmsr(0x570u), 0x111100000000uLL);
    v3 = HalpProfileInterface[13];
    if ( v3 )
    {
      ((void (__fastcall *)(__int64))v3)(v1);
      v2 = 1;
    }
    if ( HalpProcessorTraceInterruptHandler )
      HalpProcessorTraceInterruptHandler(v1);
  }
  v4 = HalpProfileInterface[13];
  if ( v4 && !v2 )
    ((void (__fastcall *)(__int64))v4)(v1);
  if ( HalpPerfInterruptHandler )
  {
    HalpPerfInterruptHandler(v1);
  }
  else
  {
    ((void (__fastcall *)(__int64))HalpProfileInterface[5])(v1);
    ((void (__fastcall *)(_QWORD))off_140C01DB8[0])(0LL);
  }
  return 1;
}
