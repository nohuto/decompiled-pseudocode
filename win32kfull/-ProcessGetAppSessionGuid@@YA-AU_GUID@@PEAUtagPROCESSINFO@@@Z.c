struct _GUID *__fastcall ProcessGetAppSessionGuid(struct _GUID *__return_ptr retstr, struct tagPROCESSINFO *a2)
{
  unsigned int v2; // eax
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // ax
  bool v7; // cc
  struct _KPROCESS *v8; // rcx

  v2 = *((_DWORD *)a2 + 14);
  *retstr = 0LL;
  retstr->Data1 = v2;
  v5 = *(_WORD *)SGDGetUserSessionState(retstr);
  v6 = MEMORY[0xFFFFF780000002C4];
  v7 = MEMORY[0xFFFFF780000002C4] <= 0xFFFFu;
  retstr->Data2 = v5;
  if ( !v7 )
    v6 = -1;
  v8 = *(struct _KPROCESS **)a2;
  retstr->Data3 = v6;
  *(_QWORD *)retstr->Data4 = PsGetProcessCreateTimeQuadPart(v8);
  return retstr;
}
