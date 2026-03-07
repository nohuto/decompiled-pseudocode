__int64 __fastcall CVisual::ProcessInsertChild(
        unsigned __int64 this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_INSERTCHILD *a3)
{
  unsigned int v5; // edx
  CVisual *v6; // r13
  _DWORD *v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // r12
  _DWORD *v11; // r15
  __int64 v12; // rdi
  struct CVisual *v13; // rdi
  unsigned int v14; // r8d
  struct CVisual *v15; // r8
  int inserted; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  __int64 v20; // rbx

  v5 = *((_DWORD *)a3 + 2);
  v6 = (CVisual *)this;
  if ( !v5
    || v5 >= *((_DWORD *)a2 + 7)
    || (v7 = (_DWORD *)((char *)a2 + 24),
        this = *((_DWORD *)a2 + 6) * v5,
        v8 = (_QWORD *)((char *)a2 + 40),
        v9 = *((_QWORD *)a2 + 5),
        !*(_DWORD *)(this + v9)) )
  {
    v11 = (_DWORD *)((char *)a2 + 24);
    v10 = (_QWORD *)((char *)a2 + 40);
    v7 = (_DWORD *)((char *)a2 + 24);
    v8 = (_QWORD *)((char *)a2 + 40);
LABEL_18:
    v13 = 0LL;
    goto LABEL_7;
  }
  v10 = (_QWORD *)((char *)a2 + 40);
  v11 = (_DWORD *)((char *)a2 + 24);
  v12 = v9 + *v7 * v5;
  this = *(_QWORD *)(v12 + 8);
  if ( !this || !(*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)this + 56LL))(this, 196LL) )
    goto LABEL_18;
  v13 = *(struct CVisual **)(v12 + 8);
LABEL_7:
  v14 = *((_DWORD *)a3 + 3);
  if ( v14
    && v14 < *((_DWORD *)a2 + 7)
    && (this = *v11 * v14, *(_DWORD *)(this + *v10))
    && (v20 = *v8 + *v7 * v14, (this = *(_QWORD *)(v20 + 8)) != 0)
    && (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)this + 56LL))(this, 196LL) )
  {
    v15 = *(struct CVisual **)(v20 + 8);
  }
  else
  {
    v15 = 0LL;
  }
  if ( v13 )
  {
    inserted = CVisual::InsertChild(v6, v13, v15, *((_BYTE *)a3 + 16));
    v18 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, inserted, 0xC62u, 0LL);
  }
  else
  {
    v18 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, -2003303421, 0xC5Fu, 0LL);
  }
  return v18;
}
