void __fastcall CSharedSectionBase::UnmapSharedMemory(CSharedSectionBase *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 40LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 656LL)) )
    CComposition::UnmapSharedSectionView(*((CComposition **)this + 2), *((void **)this + 10));
  else
    UnmapViewOfFile(*((LPCVOID *)this + 10));
}
