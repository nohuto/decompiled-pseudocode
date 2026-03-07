__int64 MiUnmapPatchTable()
{
  unsigned __int64 SessionVm; // rax
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  _OWORD v4[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]

  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  SessionVm = MiGetSessionVm();
  return MiDeleteSystemPagableVm(SessionVm, 0LL, v1, v2, 33, v4);
}
