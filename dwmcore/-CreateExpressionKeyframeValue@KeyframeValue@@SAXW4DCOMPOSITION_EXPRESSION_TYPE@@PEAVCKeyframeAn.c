int __fastcall KeyframeValue::CreateExpressionKeyframeValue(unsigned __int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v7; // r14d
  _QWORD *v8; // rax
  _QWORD *v9; // rbx

  v7 = a1;
  v8 = KeyframeValue::operator new(a1);
  v9 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 0;
    *v8 = &KeyframeValue::`vftable';
    LODWORD(v8) = CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 1));
  }
  else
  {
    v9 = 0LL;
  }
  v9[3] = a2;
  *((_DWORD *)v9 + 8) = a3;
  *((_DWORD *)v9 + 5) = 2;
  *((_DWORD *)v9 + 4) = v7;
  *a4 = v9;
  return (int)v8;
}
