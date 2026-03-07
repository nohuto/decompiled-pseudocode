bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 240);
  return !v3 || CmEqualTrans(a2, v3) != 0;
}
