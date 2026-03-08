/*
 * XREFs of ?NlsSendParamVk@@YAHPEAUtagKE@@_KK@Z @ 0x1C00D6020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsSendParamVk(struct tagKE *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax

  result = 1LL;
  *((_WORD *)a1 + 1) = a3 | *((_WORD *)a1 + 1) & 0x8F00;
  return result;
}
