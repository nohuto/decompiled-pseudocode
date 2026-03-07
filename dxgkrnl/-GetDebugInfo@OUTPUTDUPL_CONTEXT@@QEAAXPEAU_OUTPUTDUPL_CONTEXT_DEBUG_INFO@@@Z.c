void __fastcall OUTPUTDUPL_CONTEXT::GetDebugInfo(OUTPUTDUPL_CONTEXT *this, struct _OUTPUTDUPL_CONTEXT_DEBUG_INFO *a2)
{
  a2->Status = (*((_DWORD *)this + 72) != 0) + 1;
  a2->ProcessID = PsGetProcessId(*((PEPROCESS *)this + 3));
  a2->AccumulatedPresents = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 34) + 8LL) + 4LL);
  a2->LastMouseTime.QuadPart = **((_QWORD **)this + 34);
  a2->LastPresentTime.QuadPart = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 34) + 8LL) + 8LL);
  *(_OWORD *)a2->ProcessName = *(_OWORD *)PsGetProcessImageFileName(*((_QWORD *)this + 3));
}
