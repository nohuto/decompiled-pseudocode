/*
 * XREFs of ??0CInputConfig@@AEAA@XZ @ 0x1C0097D00
 * Callers:
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0097C58 (-Initialize@CInputConfig@@SAJXZ.c)
 * Callees:
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C0013300 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 */

CInputConfig *__fastcall CInputConfig::CInputConfig(CInputConfig *this)
{
  CInputConfig *result; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v3 = 0LL;
  v4 = 0;
  CInputSpace::CInputSpace((CInputConfig *)((char *)this + 32), (const struct INPUT_SPACE *)&v3, 0);
  result = this;
  *((_WORD *)this + 752) = 1;
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  return result;
}
