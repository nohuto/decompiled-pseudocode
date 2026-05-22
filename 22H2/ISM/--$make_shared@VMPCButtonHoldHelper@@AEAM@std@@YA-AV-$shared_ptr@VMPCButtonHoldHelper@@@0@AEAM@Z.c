/*
 * XREFs of ??$make_shared@VMPCButtonHoldHelper@@AEAM@std@@YA?AV?$shared_ptr@VMPCButtonHoldHelper@@@0@AEAM@Z @ 0x18008500C
 * Callers:
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180085088 (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x18008527C (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 */

_QWORD *__fastcall std::make_shared<MPCButtonHoldHelper,float &>(_QWORD *a1, float *a2)
{
  _QWORD *result; // rax
  _DWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x38uLL);
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj<MPCButtonHoldHelper>::`vftable';
  MPCButtonHoldHelper::MPCButtonHoldHelper((MPCButtonHoldHelper *)(v5 + 4), *a2);
  result = a1;
  *a1 = v5 + 4;
  a1[1] = v5;
  return result;
}
