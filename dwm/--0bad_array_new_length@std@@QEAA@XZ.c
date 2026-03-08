/*
 * XREFs of ??0bad_array_new_length@std@@QEAA@XZ @ 0x1400060B4
 * Callers:
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x14000619C (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 * Callees:
 *     <none>
 */

std::bad_array_new_length *__fastcall std::bad_array_new_length::bad_array_new_length(std::bad_array_new_length *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "bad array new length";
  *(_QWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}
