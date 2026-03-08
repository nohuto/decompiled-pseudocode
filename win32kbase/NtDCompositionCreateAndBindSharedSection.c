/*
 * XREFs of NtDCompositionCreateAndBindSharedSection @ 0x1C005C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C005C64C (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005F334 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionCreateAndBindSharedSection(unsigned int a1, int a2, __int64 a3, _QWORD *a4)
{
  HANDLE v7; // rbx
  int v8; // edi
  DirectComposition::CApplicationChannel *v9; // rbx
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CApplicationChannel *v12; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v12);
  if ( v8 >= 0 )
  {
    v9 = v12;
    v8 = DirectComposition::CApplicationChannel::CreateAndBindSharedSection(v12, a2, a3, &Handle);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v9)(v9);
    v7 = Handle;
  }
  if ( v8 >= 0 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_QWORD *)MmUserProbeAddress;
    *a4 = v7;
  }
  return (unsigned int)v8;
}
