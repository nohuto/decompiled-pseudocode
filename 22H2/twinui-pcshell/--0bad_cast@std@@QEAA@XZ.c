/*
 * XREFs of ??0bad_cast@std@@QEAA@XZ @ 0x18011A908
 * Callers:
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x180119F0C (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 * Callees:
 *     <none>
 */

std::bad_cast *__fastcall std::bad_cast::bad_cast(std::bad_cast *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "bad cast";
  *(_QWORD *)this = &std::bad_cast::`vftable';
  return this;
}
