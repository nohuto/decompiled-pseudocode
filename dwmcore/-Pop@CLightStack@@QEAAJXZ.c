__int64 __fastcall CLightStack::Pop(CLightStack *this)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)(*(_QWORD *)this + 16LL * (unsigned int)--*((_DWORD *)this + 6));
  if ( (_QWORD)v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(v1);
  return 0LL;
}
