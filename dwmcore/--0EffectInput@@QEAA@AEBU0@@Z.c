EffectInput *__fastcall EffectInput::EffectInput(EffectInput *this, const struct EffectInput *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // cl

  v4 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
  {
    v5 = *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + v4 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
  {
    v7 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  v8 = *((_BYTE *)a2 + 44);
  *((_BYTE *)this + 44) = v8;
  *((_BYTE *)this + 45) = *((_BYTE *)a2 + 45);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  if ( v8 )
  {
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
    *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  }
  return this;
}
