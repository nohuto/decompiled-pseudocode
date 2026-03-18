/*
 * XREFs of ??1InteractiveControlInput@@QEAA@XZ @ 0x1C025532C
 * Callers:
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C02537C0 (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlInput::~InteractiveControlInput(InteractiveControlInput *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 22) = 0;
  }
}
