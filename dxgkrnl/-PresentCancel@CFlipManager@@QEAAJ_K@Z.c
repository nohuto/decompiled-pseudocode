__int64 __fastcall CFlipManager::PresentCancel(CFlipManager *this, __int64 a2)
{
  unsigned int v4; // edi
  __int64 Pool2; // rax
  _QWORD *v6; // rbx
  __int64 v7; // r8
  CFlipManager **v8; // rdx
  _QWORD *v9; // rax
  CFlipManager *v10; // rax
  struct DXGGLOBAL *Global; // rax
  CFlipManager::PresentHistory *v12; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(257LL, 40LL, 1668301638LL);
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v7 = *((_QWORD *)this + 29);
    v8 = (CFlipManager **)*((_QWORD *)this + 25);
    v9 = (_QWORD *)(Pool2 + 8);
    v9[1] = v9;
    *v9 = v9;
    *v6 = &CFlipPresentCancel::`vftable';
    v10 = (CFlipManager *)(v6 + 1);
    v6[3] = v7;
    v6[4] = a2;
    if ( *v8 != (CFlipManager *)((char *)this + 192) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)this + 192;
    v6[2] = v8;
    *v8 = v10;
    *((_QWORD *)this + 25) = v10;
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)Global + 38069) + 304LL))(*((unsigned int *)this + 83), a2);
    v12 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
    if ( v12 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v12);
      *((_DWORD *)NextEntry + 10) = 11;
      *((_QWORD *)NextEntry + 2) = v6[3];
      *((_QWORD *)NextEntry + 4) = v6[4];
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
