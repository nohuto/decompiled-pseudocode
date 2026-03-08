/*
 * XREFs of ?CloseCallback@CTTMDEVICE@@CAX_K@Z @ 0x1C0350350
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GCTTMDEVICE@@QEAAPEAXI@Z @ 0x1C0058070 (--_GCTTMDEVICE@@QEAAPEAXI@Z.c)
 */

void __fastcall CTTMDEVICE::CloseCallback(CTTMDEVICE *this)
{
  __int64 v2; // rax
  struct _KEVENT *v3; // rcx

  if ( !this )
  {
    WdLogSingleEntry1(1LL, 6145LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pThis != NULL", 6145LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u) & 0x1F;
  *((_DWORD *)this + 2 * v2 + 157) = 1073741826;
  *((_DWORD *)this + 2 * (unsigned int)v2 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  if ( *((_BYTE *)this + 913) )
  {
    CTTMDEVICE::`scalar deleting destructor'(this);
  }
  else
  {
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)this + 6);
    v3 = (struct _KEVENT *)*((_QWORD *)this + 7);
    if ( v3 )
    {
      KeSetEvent(v3, 0, 0);
      *((_QWORD *)this + 7) = 0LL;
    }
  }
}
