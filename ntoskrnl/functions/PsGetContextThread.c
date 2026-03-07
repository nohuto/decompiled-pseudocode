__int64 __fastcall PsGetContextThread(struct _KTHREAD *a1, __int64 a2, char a3)
{
  return PspGetContextThreadInternal(a1, a2, a3, a3, 1);
}
