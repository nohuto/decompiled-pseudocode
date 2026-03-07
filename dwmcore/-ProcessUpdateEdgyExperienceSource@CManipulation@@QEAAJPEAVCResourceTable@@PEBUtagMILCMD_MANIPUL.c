__int64 __fastcall CManipulation::ProcessUpdateEdgyExperienceSource(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE *a3)
{
  unsigned int v4; // edx
  unsigned int v7; // edi
  __int64 Resource; // rax
  int updated; // eax
  __int64 v10; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_DWORD *)a3 + 2);
  v7 = 0;
  if ( v4 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v4, 0x59u);
    if ( !Resource )
      ModuleFailFastForHRESULT(2147500036LL, retaddr);
    if ( !*((_DWORD *)a3 + 3) || !*((_WORD *)a3 + 8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *((_OWORD *)this + 36) = *(_OWORD *)((char *)a3 + 8);
    *((_OWORD *)this + 37) = *(_OWORD *)((char *)a3 + 24);
    *((_OWORD *)this + 38) = *(_OWORD *)((char *)a3 + 40);
    *((_OWORD *)this + 39) = *(_OWORD *)((char *)a3 + 56);
    *((_OWORD *)this + 40) = *(_OWORD *)((char *)a3 + 72);
    *((_OWORD *)this + 41) = *(_OWORD *)((char *)a3 + 88);
    *((_OWORD *)this + 42) = *(_OWORD *)((char *)a3 + 104);
    *((_OWORD *)this + 43) = *(_OWORD *)((char *)a3 + 120);
    *((_QWORD *)this + 88) = *((_QWORD *)a3 + 17);
    *((_DWORD *)this + 178) = *(_DWORD *)(Resource + 1704);
    updated = CManipulation::_UpdateEdgyExperienceInput(this);
    v7 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, updated, 0x2FEu, 0LL);
  }
  return v7;
}
