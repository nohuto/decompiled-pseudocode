void __fastcall CD2DBrush::ReleaseD2DResources(CD2DBrush *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
