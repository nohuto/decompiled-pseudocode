void __fastcall MousePerfStage::UpdatePerfData(MousePerfStage *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // ecx
  bool v9; // zf
  unsigned __int64 v10; // rcx

  if ( a2 )
  {
    v3 = a2;
    if ( *(_QWORD *)this > a2 )
      v3 = *(_QWORD *)this;
    v4 = *((_QWORD *)this + 1);
    *(_QWORD *)this = v3;
    v5 = a2;
    if ( v4 < a2 )
      v5 = v4;
    v6 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 1) = v5;
    v7 = a2 + v6;
    v8 = *((_DWORD *)this + 8);
    v9 = v8 == -1;
    v10 = (unsigned int)(v8 + 1);
    *((_QWORD *)this + 3) = v7;
    *((_DWORD *)this + 8) = v10;
    if ( v9 )
      *((_QWORD *)this + 2) = 0LL;
    else
      *((_QWORD *)this + 2) = v7 / v10;
  }
}
