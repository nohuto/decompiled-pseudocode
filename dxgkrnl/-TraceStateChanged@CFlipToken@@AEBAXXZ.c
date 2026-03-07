void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  CompositionSurfaceObject **v1; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // r15
  int v5; // esi
  int v6; // ebp
  __int64 v7; // rcx
  CompositionSurfaceObject *v8; // rax
  char v9; // bl
  __int64 v10; // r14
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int); // r12
  __int64 v12; // rdi
  unsigned int v13; // eax
  int started; // [rsp+A0h] [rbp+8h]
  _QWORD *v15; // [rsp+A8h] [rbp+10h]

  started = 0;
  v1 = (CompositionSurfaceObject **)((char *)this + 32);
  v15 = (_QWORD *)((char *)this + 32);
  if ( *((_DWORD *)this + 6) == 3 )
    started = (unsigned __int8)CompositionSurfaceObject::StartCompositionEarly(*v1, *((_QWORD *)this + 5));
  else
    v15 = (_QWORD *)((char *)this + 32);
  Global = DXGGLOBAL::GetGlobal();
  v4 = *((_QWORD *)this + 5);
  v5 = *((unsigned __int8 *)this + 560);
  v6 = *((_DWORD *)this + 6);
  v7 = *((_QWORD *)Global + 38069);
  v8 = *v1;
  v9 = *((_BYTE *)this + 563);
  v10 = *((_QWORD *)this + 12);
  v11 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int))(v7 + 384);
  v12 = *((_QWORD *)v8 + 3);
  v13 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v11(*v15, *((unsigned int *)this + 26), v13, v10, v6, v5, v9 == 0, v12, v4, started);
}
