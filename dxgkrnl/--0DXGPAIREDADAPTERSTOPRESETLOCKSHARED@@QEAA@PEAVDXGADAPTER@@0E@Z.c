DXGPAIREDADAPTERSTOPRESETLOCKSHARED *__fastcall DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER *a3)
{
  char *v4; // rcx
  struct DXGADAPTER *v5; // rax
  char v6; // al
  DXGPAIREDADAPTERSTOPRESETLOCKSHARED *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  v4 = (char *)this + 24;
  v5 = a2;
  if ( a3 )
    v5 = a3;
  v4[16] = 0;
  *((_QWORD *)v4 + 1) = v5;
  if ( !a3 || (v6 = 0, a3 == a2) )
    v6 = 1;
  *((_BYTE *)this + 48) = v6;
  *((_BYTE *)this + 49) = 0;
  if ( !v6 )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v4);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
  result = this;
  *((_BYTE *)this + 49) = 1;
  return result;
}
