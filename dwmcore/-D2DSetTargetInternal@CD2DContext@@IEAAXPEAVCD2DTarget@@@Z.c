void __fastcall CD2DContext::D2DSetTargetInternal(CD2DContext *this, struct CD2DTarget *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax

  v2 = (__int64 *)*((_QWORD *)this + 26);
  v3 = *v2;
  if ( a2 )
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 56))(v2, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5));
  else
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 56))(v2, 0LL, 0LL);
}
