struct _LIST_ENTRY *SepRmSetSharedUserSessionWrkr()
{
  struct _LIST_ENTRY *result; // rax
  int v1; // r8d
  __int64 v2; // rdx

  result = PsGetCurrentServerSiloGlobals();
  LODWORD(result[82].Blink[1].Blink) = v1;
  *(_DWORD *)(v2 + 40) = 0;
  return result;
}
