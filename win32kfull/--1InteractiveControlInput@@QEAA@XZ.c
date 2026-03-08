/*
 * XREFs of ??1InteractiveControlInput@@QEAA@XZ @ 0x1C0249704
 * Callers:
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C0247B20 (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlInput::~InteractiveControlInput(InteractiveControlInput *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 22) = 0;
  }
}
