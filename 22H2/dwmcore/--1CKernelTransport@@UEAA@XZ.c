/*
 * XREFs of ??1CKernelTransport@@UEAA@XZ @ 0x1801D1668
 * Callers:
 *     ??_ECKernelTransport@@UEAAPEAXI@Z @ 0x1801D16D0 (--_ECKernelTransport@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKernelTransport::~CKernelTransport(CKernelTransport *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CKernelTransport::`vftable';
  if ( *((_QWORD *)this + 1) )
  {
    NtDCompositionDestroyConnection();
    *((_QWORD *)this + 1) = 0LL;
  }
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &CTransport::`vftable';
}
