__int64 __fastcall CCompositionFrameCollection::FindCompositionFrame(
        CCompositionFrameCollection *this,
        __int64 a2,
        struct ICompositionFrame **a3)
{
  char *v3; // rsi
  unsigned int v7; // r14d
  char *v8; // r15
  char *v9; // rdi
  struct ICompositionFrame *v10; // rbx

  v3 = (char *)this + 32;
  *a3 = 0LL;
  v7 = -1073741275;
  ExAcquirePushLockSharedEx((char *)this + 32, 0LL);
  v3[8] = 0;
  v8 = (char *)this + 16;
  v9 = (char *)*((_QWORD *)this + 3);
  if ( v9 != (char *)this + 16 )
  {
    while ( 1 )
    {
      v10 = (struct ICompositionFrame *)(v9 - 16);
      if ( (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v9 - 2) + 72LL))((_QWORD *)v9 - 2) == a2 )
        break;
      v9 = (char *)*((_QWORD *)v9 + 1);
      if ( v9 == v8 )
        goto LABEL_4;
    }
    (**(void (__fastcall ***)(__int64))v10)((__int64)(v9 - 16));
    v7 = 0;
    *a3 = v10;
  }
LABEL_4:
  if ( v3[8] )
    ExReleasePushLockExclusiveEx(v3, 0LL);
  else
    ExReleasePushLockSharedEx(v3, 0LL);
  return v7;
}
