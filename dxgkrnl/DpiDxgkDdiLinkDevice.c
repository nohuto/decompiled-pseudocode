/*
 * XREFs of DpiDxgkDdiLinkDevice @ 0x1C006593C
 * Callers:
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqqtq_EtwWriteTransfer @ 0x1C0065BF0 (McTemplateK0ppqqtq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiLinkDevice(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  _QWORD *v15; // rax

  LOBYTE(v4) = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppqqtq_EtwWriteTransfer(a1, (unsigned int)&EventEnterDdiLinkDevice, a3, a2, a3, 0, 0, 0, 0);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 616))(a2, a3, a4);
  v14 = v9;
  if ( bTracingEnabled )
  {
    v11 = 0LL;
    LOBYTE(v10) = 0;
    if ( a4 )
    {
      v4 = *a4;
      v11 = (unsigned int)a4[1];
      LOBYTE(v10) = *((_BYTE *)a4 + 8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqtq_EtwWriteTransfer(v11, (unsigned int)&EventExitDdiLinkDevice, v12, a2, a3, v4, v11, v10, v9);
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v15[3] = a2;
  v15[4] = a3;
  v15[5] = (unsigned int)a4[1];
  v15[6] = *((unsigned __int8 *)a4 + 8);
  v15[7] = v14;
  return (unsigned int)v14;
}
