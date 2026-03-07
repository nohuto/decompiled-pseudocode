__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentProcessSessionId; // eax

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  return DxgkWriteDiagEntry(a1, CurrentProcessSessionId);
}
