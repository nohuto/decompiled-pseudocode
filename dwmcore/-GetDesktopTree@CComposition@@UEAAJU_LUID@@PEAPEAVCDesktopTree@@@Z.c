__int64 __fastcall CComposition::GetDesktopTree(CComposition *this, struct _LUID a2, struct CDesktopTree **a3)
{
  DWORD LowPart; // edi
  unsigned int v6; // ebp
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  char *v11; // [rsp+50h] [rbp+8h] BYREF
  struct _LUID v12; // [rsp+58h] [rbp+10h]

  v12 = a2;
  *a3 = 0LL;
  v11 = (char *)this + 16;
  LowPart = a2.LowPart;
  v6 = -2147023728;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v7 = (_QWORD *)*((_QWORD *)this + 7);
  v8 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v7 != v8 )
  {
    v9 = (_QWORD *)*v7;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 184LL))(*v7) )
      break;
    if ( v9[591] == __PAIR64__(v12.HighPart, LowPart) )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 1));
      v6 = 0;
      *a3 = (struct CDesktopTree *)v9;
      break;
    }
    ++v7;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v6;
}
