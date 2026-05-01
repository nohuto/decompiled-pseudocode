/*
 * XREFs of ??0bad_alloc@std@@QEAA@XZ @ 0x18021D674
 * Callers:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x180090794 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?get_weak@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@QEAA?AU?$weak_ref@UPinManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18014594C (-get_weak@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinMana.c)
 * Callees:
 *     <none>
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "bad allocation";
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
