/*
 * XREFs of ??1bad_array_new_length@std@@UEAA@XZ @ 0x140006110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((char *)this + 8);
}
