__int64 __fastcall CRotationMgr::GetActivePpiPreference(_DWORD *a1)
{
  PEPROCESS *v2; // rcx
  unsigned int v3; // ebx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v5, gRotationProcessLock);
  if ( grpdeskRitInput && (v2 = *(PEPROCESS **)(grpdeskRitInput + 248LL)) != 0LL )
  {
    if ( a1 )
      *a1 = (unsigned int)PsGetProcessId(*v2);
    v3 = *(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 248LL) + 904LL);
  }
  else
  {
    v3 = 0;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  return v3;
}
