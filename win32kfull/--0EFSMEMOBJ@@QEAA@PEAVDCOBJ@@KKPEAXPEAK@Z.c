EFSMEMOBJ *__fastcall EFSMEMOBJ::EFSMEMOBJ(
        EFSMEMOBJ *this,
        struct DCOBJ *a2,
        unsigned int a3,
        int a4,
        void *a5,
        unsigned int *a6)
{
  __int64 v8; // rdi
  __int64 v10; // rax
  int v11; // r8d

  *((_QWORD *)this + 1) = a6;
  v8 = a3;
  if ( a3 > 0x1FFFFFF7 )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v10 = AllocFreeTmpBuffer(8 * a3 + 68);
    *(_QWORD *)this = v10;
    if ( v10 )
    {
      v11 = *a6;
      *(_QWORD *)(v10 + 40) = v10 + 68;
      *(_QWORD *)(*(_QWORD *)this + 56LL) = *(_QWORD *)this + 68LL;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)this + 8 * v8 + 68;
      **(_QWORD **)this = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 8LL) = a4;
      *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = a5;
      *(_DWORD *)(*(_QWORD *)this + 24LL) = v11;
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 32LL) = a2;
    }
  }
  return this;
}
