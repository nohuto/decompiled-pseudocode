__int64 __fastcall CFlipManager::AddContent(CFlipManager *this, unsigned __int64 a2, struct CFlipPropertySet *a3)
{
  char *v3; // rsi
  unsigned __int64 v6; // r11
  unsigned int v7; // edi
  int v8; // eax
  struct CContentResourceState *v9; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rax
  char *v12; // rcx
  char **v13; // rax
  struct CContentResourceState *v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0LL;
  v3 = (char *)this + 72;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 72)) )
    return (unsigned int)-1073741811;
  v8 = CContentResource::Create(v6, a3, &v15);
  v9 = v15;
  v7 = v8;
  if ( v8 >= 0 )
  {
    if ( !*(_QWORD *)(*((_QWORD *)v15 + 3) + 48LL) )
    {
LABEL_7:
      v12 = (char *)(((unsigned __int64)v9 + 8) & -(__int64)(v9 != 0LL));
      v13 = (char **)*((_QWORD *)v3 + 1);
      if ( *v13 != v3 )
        __fastfail(3u);
      *(_QWORD *)v12 = v3;
      v9 = 0LL;
      *((_QWORD *)v12 + 1) = v13;
      *v13 = v12;
      *((_QWORD *)v3 + 1) = v12;
      goto LABEL_12;
    }
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 280LL))(
      1LL,
      *((unsigned int *)this + 83),
      *((_QWORD *)v9 + 3));
    v11 = *((_QWORD *)this + 6);
    if ( !v11 )
    {
      *((_QWORD *)this + 6) = 1LL;
      *((_QWORD *)this + 3) = ExAllocatePool2(257LL, 22536LL, 1752187718LL);
      goto LABEL_7;
    }
    if ( v11 == 1 )
      goto LABEL_7;
    v7 = -1073741790;
  }
LABEL_12:
  if ( v9 )
    (*(void (__fastcall **)(struct CContentResourceState *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
  return v7;
}
