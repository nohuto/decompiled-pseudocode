bool __fastcall CitpProcessInfoIsValid(struct _CIT_PROCESS *a1)
{
  return (unsigned __int64)a1 >= 0xCEF2 || (unsigned __int64)a1 - 1 <= 0xCEEE;
}
