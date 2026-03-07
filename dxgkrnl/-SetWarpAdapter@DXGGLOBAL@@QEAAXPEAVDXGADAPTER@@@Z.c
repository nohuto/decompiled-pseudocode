void __fastcall DXGGLOBAL::SetWarpAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8

  v2 = *((_QWORD *)this + 121);
  v3 = (_QWORD *)((char *)this + 952);
  if ( !v2 || v2 == *v3 )
  {
    *((_QWORD *)this + 121) = a2;
    if ( a2 )
      *((_QWORD *)this + 122) = *(_QWORD *)((char *)a2 + 404);
  }
  *v3 = a2;
}
