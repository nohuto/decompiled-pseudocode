__int64 __fastcall CAnimation::ProcessSetHandoff(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETHANDOFF *a3)
{
  unsigned int v6; // edx
  __int64 Resource; // rax

  *((_DWORD *)this + 54) = *((_DWORD *)a3 + 2);
  *((_QWORD *)this + 28) = *((_QWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 6);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 2u);
    *((_QWORD *)this + 29) = Resource;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
    *((_BYTE *)this + 125) = *((_BYTE *)a3 + 32) != 0;
    *((_QWORD *)this + 31) = *((_QWORD *)a3 + 5);
    *((_QWORD *)this + 32) = *((_QWORD *)a3 + 6);
  }
  *((_DWORD *)this + 60) = *((_DWORD *)a3 + 7);
  return 0LL;
}
