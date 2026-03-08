/*
 * XREFs of NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140A01620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
        char a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // r14
  __int64 (__fastcall *v8)(); // rax
  int v9; // ecx
  __int64 (__fastcall *v10)(); // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF

  v13[0] = 0LL;
  v12 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 + 8 > 0x7FFFFFFF0000LL || a2 + 8 < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v7 = *(_QWORD *)a2;
    v13[1] = *(_QWORD *)a2;
    ProbeForWrite(a3, 8uLL, 4u);
    if ( a4 )
      ProbeForWrite(a4, 8uLL, 4u);
    v8 = off_140C01D38[0];
    if ( !a1 )
      v8 = off_140C01D30[0];
    v9 = ((__int64 (__fastcall *)(__int64, __int64 *, _QWORD *))v8)(v7, &v12, v13);
    if ( v9 >= 0 )
    {
      *a3 = v12;
      if ( a4 )
        *a4 = v13[0];
    }
  }
  else
  {
    v10 = off_140C01D38[0];
    if ( !a1 )
      v10 = off_140C01D30[0];
    return ((unsigned int (__fastcall *)(_QWORD, _QWORD *, _QWORD *))v10)(*(_QWORD *)a2, a3, a4);
  }
  return (unsigned int)v9;
}
