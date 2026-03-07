InternalFilterInput *__fastcall InternalFilterInput::InternalFilterInput(
        InternalFilterInput *this,
        int a2,
        const struct tagRECT *a3,
        struct CResource *a4)
{
  *(_DWORD *)this = a2;
  *(struct tagRECT *)((char *)this + 4) = *a3;
  *((_QWORD *)this + 3) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
