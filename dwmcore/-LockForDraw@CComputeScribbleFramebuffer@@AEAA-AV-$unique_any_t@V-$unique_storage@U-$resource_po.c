_QWORD *__fastcall CComputeScribbleFramebuffer::LockForDraw(__int64 a1, _QWORD *a2)
{
  int *v2; // rbx
  __int64 *v4; // rdi
  __int64 v6; // rcx
  _QWORD *result; // rax

  v2 = (int *)(a1 + 244);
  v4 = (__int64 *)(a1 + 232);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(a1, (__int64)&EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Start, *v4, *v2);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 64));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(v6, (__int64)&EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Stop, *v4, *v2);
  result = a2;
  *(_BYTE *)(a1 + 152) = 1;
  *a2 = a1 + 64;
  return result;
}
