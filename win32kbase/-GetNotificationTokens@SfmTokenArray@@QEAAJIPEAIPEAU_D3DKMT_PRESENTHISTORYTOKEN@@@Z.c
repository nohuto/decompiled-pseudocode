__int64 __fastcall SfmTokenArray::GetNotificationTokens(
        SfmTokenArray *this,
        unsigned int a2,
        unsigned int *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4)
{
  unsigned int v7; // edi
  unsigned int v8; // r14d
  unsigned int *v9; // rsi
  unsigned int v10; // r15d
  unsigned int v11; // ebx

  SGDGetSessionState(this);
  v7 = 0;
  v8 = a2 / 0x28;
  v9 = (unsigned int *)((char *)this + 12);
  v10 = *((_DWORD *)this + 3);
  v11 = v10;
  if ( v8 <= v10 )
    v11 = v8;
  memmove(a4, *(const void **)this, 40 * v11);
  if ( v11 < *v9 )
    memmove(*(void **)this, (const void *)(*(_QWORD *)this + 40 * v11), 40 * (*v9 - v11));
  *v9 -= v11;
  *a3 = v11;
  if ( v8 <= v10 && *v9 )
    return (unsigned int)-1073741789;
  return v7;
}
