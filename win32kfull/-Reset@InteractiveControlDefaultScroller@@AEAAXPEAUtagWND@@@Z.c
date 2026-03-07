void __fastcall InteractiveControlDefaultScroller::Reset(InteractiveControlDefaultScroller *this, struct tagWND *a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _BYTE *v12; // rdi
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax

  v4 = (_DWORD *)(SGDGetUserSessionState(this) + 17112);
  *v4 = *((_DWORD *)InteractiveControlManager::Instance(v5) + 55);
  v7 = *((_DWORD *)InteractiveControlManager::Instance(v6) + 57);
  v4[4] = 0;
  v4[6] = 0;
  v4[2] = v7;
  v4[1] = *((_DWORD *)InteractiveControlManager::Instance(v8) + 59);
  v4[3] = *((_DWORD *)InteractiveControlManager::Instance(v9) + 61);
  v4[5] = *((_DWORD *)InteractiveControlManager::Instance(v10) + 63);
  v4[7] = *((_DWORD *)InteractiveControlManager::Instance(v11) + 65);
  v12 = *(_BYTE **)(*((_QWORD *)a2 + 2) + 424LL);
  v13 = v12[1017];
  *((_BYTE *)this + 52) = v13;
  LOBYTE(v14) = v12[1016];
  *((_BYTE *)this + 53) = v14;
  if ( !v13 )
  {
    if ( (_BYTE)v14 )
      *((_BYTE *)this + 52) = 2;
    else
      *((_WORD *)this + 26) = 258;
    goto LABEL_6;
  }
  if ( v13 == 2 )
  {
LABEL_6:
    v16 = *((_DWORD *)InteractiveControlManager::Instance(v14) + 51);
    goto LABEL_8;
  }
  v16 = *((_DWORD *)InteractiveControlManager::Instance(v14) + 53);
LABEL_8:
  if ( *((_DWORD *)this + 14) == 1 )
    v17 = *((unsigned int *)InteractiveControlManager::Instance(v15) + 45);
  else
    v17 = v16;
  v18 = (unsigned __int8)v12[1018];
  if ( v18 <= (unsigned int)v17 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      v18 = *((_DWORD *)InteractiveControlManager::Instance(v17) + 45);
    else
      v18 = v16;
  }
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 12) = v18;
  v19 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 5) = v19;
  *((_QWORD *)this + 2) = v19;
  InteractiveControlDefaultScroller::SetBallisticsLevel(this, 0, 1);
}
