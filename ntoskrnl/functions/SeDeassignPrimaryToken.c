LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
