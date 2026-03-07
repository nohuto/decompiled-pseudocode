void __fastcall DirectComposition::CConnection::KeepOrDeferBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        struct DirectComposition::CBatch **a3)
{
  struct DirectComposition::CBatch *v3; // rbx
  _QWORD *v4; // r15
  struct DirectComposition::CBatch **v5; // r14
  struct DirectComposition::CBatch *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  struct DirectComposition::CBatch *v12; // rax
  struct DirectComposition::CBatch *v13; // rdi
  int v14; // [rsp+80h] [rbp+8h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF

  v3 = *a3;
  v4 = (_QWORD *)((char *)this + 136);
  v5 = a3;
  v8 = *a3;
  if ( !*a3 )
    return;
  do
  {
    v9 = *((_QWORD *)v8 + 12);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 33) )
      {
        v14 = 0;
        if ( (*((_BYTE *)v8 + 32) & 0x20) != 0
          && (!DirectComposition::CBatch::ShouldDefer(
                 v8,
                 *((_QWORD *)this + 20),
                 0,
                 0LL,
                 (enum DirectComposition::CBatch::DeferReason *)&v14)
           || v14 == 6) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v9 + 36));
          *((_BYTE *)v8 + 32) &= ~0x20u;
        }
      }
    }
    v8 = *(struct DirectComposition::CBatch **)v8;
  }
  while ( v8 );
  while ( 1 )
  {
    v15 = 0;
    *((_QWORD *)v3 + 7) = a2;
    if ( DirectComposition::CBatch::ShouldDefer(
           v3,
           *((_QWORD *)this + 20),
           1,
           *((struct DirectComposition::CEvent **)this + 10),
           (enum DirectComposition::CBatch::DeferReason *)&v15) )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0qpqxxq_EtwWriteTransfer(
          *((_QWORD *)v3 + 1),
          v10,
          v11,
          *(_DWORD *)(*((_QWORD *)v3 + 1) + 28LL),
          (char)v3,
          *((_DWORD *)v3 + 4),
          *((_QWORD *)v3 + 8),
          *((_QWORD *)this + 20),
          v15);
      v12 = *(struct DirectComposition::CBatch **)v3;
      *((_QWORD *)v3 + 7) = 0LL;
      *v5 = v12;
      *v4 = v3;
      v4 = v3;
      *(_QWORD *)v3 = 0LL;
      goto LABEL_16;
    }
    if ( (*((_BYTE *)v3 + 32) & 8) != 0 )
    {
      *(_BYTE *)(*((_QWORD *)v3 + 1) + 242LL) = 1;
      if ( (*((_BYTE *)v3 + 32) & 0x10) != 0 )
        break;
    }
    v5 = (struct DirectComposition::CBatch **)v3;
LABEL_16:
    v3 = *v5;
    if ( !*v5 )
      return;
  }
  v13 = *(struct DirectComposition::CBatch **)v3;
  *(_QWORD *)v3 = 0LL;
  if ( v13 )
  {
    *v4 = v13;
    do
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0qpqxxq_EtwWriteTransfer(
          *((_QWORD *)v13 + 1),
          v10,
          v11,
          *(_DWORD *)(*((_QWORD *)v13 + 1) + 28LL),
          (char)v13,
          *((_DWORD *)v13 + 4),
          *((_QWORD *)v13 + 8),
          *((_QWORD *)this + 20),
          7);
      *((_QWORD *)v13 + 7) = 0LL;
      v13 = *(struct DirectComposition::CBatch **)v13;
    }
    while ( v13 );
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 8LL), 1, 0);
  }
}
