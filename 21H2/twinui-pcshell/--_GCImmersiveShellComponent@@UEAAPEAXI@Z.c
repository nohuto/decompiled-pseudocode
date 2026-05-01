/*
 * XREFs of ??_GCImmersiveShellComponent@@UEAAPEAXI@Z @ 0x1801B0240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801AFD3C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

CImmersiveShellComponent *__fastcall CImmersiveShellComponent::`scalar deleting destructor'(
        CImmersiveShellComponent *this,
        char a2)
{
  CImmersiveShellComponent::~CImmersiveShellComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
