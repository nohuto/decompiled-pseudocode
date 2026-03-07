__int64 __fastcall CD2DContext::PopulateEffectTable(CD2DContext *this)
{
  int v1; // ebx
  _BYTE *v2; // rsi
  _QWORD *v3; // r14
  __int64 v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v2 = &unk_1803E1D64;
  v10 = 0LL;
  v3 = (_QWORD *)((char *)this + 216);
  v4 = 0LL;
  do
  {
    if ( *v2 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 25) + 504LL))(
             *((_QWORD *)this + 25),
             (char *)&xmmword_1803E1D54 + 24 * v4,
             &v10);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x744u, 0LL);
        goto LABEL_9;
      }
      v9 = v10;
      v10 = 0LL;
      *v3 = v9;
    }
    v4 = (unsigned int)(v4 + 1);
    ++v3;
    v2 += 24;
  }
  while ( (unsigned int)v4 < 8 );
  if ( v1 >= 0 )
    goto LABEL_5;
LABEL_9:
  CD2DContext::ReleaseEffectTable(this);
LABEL_5:
  ReleaseInterface<ID2D1Effect>(&v10);
  return (unsigned int)v1;
}
