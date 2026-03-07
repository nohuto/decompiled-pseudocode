__int64 __fastcall PspPicoGetContextThreadEx(struct _KTHREAD *a1, __int64 a2, char a3, char a4, char a5)
{
  return PspGetContextThreadInternal(a1, a2, a3, a4, a5 != 0);
}
