unsigned __int64 __fastcall MiUnlinkPageFromBadList(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 *v6; // rbx
  int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  volatile signed __int32 *v12; // r8
  int v13; // ebp
  unsigned __int64 v14; // rcx
  unsigned __int64 result; // rax
  _BYTE v16[112]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  memset(v16, 0, 0x68uLL);
  v5 = a1[5];
  if ( (v5 & 0x20000000000000LL) != 0 )
    v6 = &qword_140C65308;
  else
    v6 = (__int64 *)(*(_QWORD *)(qword_140C67048 + 8 * ((v5 >> 43) & 0x3FF)) + 6720LL);
  v7 = a2 & 0x80;
  if ( !v7 )
    MiAcquirePageListLock((__int64)v6, (__int64)a1, 1, (__int64)v16);
  v8 = *a1 & 0xFFFFFFFFFFLL;
  v9 = a1[3] & 0xFFFFFFFFFFLL;
  if ( v8 == 0x3FFFFFFFFFLL )
    v6[3] = v9;
  else
    MiSetPfnBlink(48 * v8 - 0x220000000000LL, a1[3] & 0xFFFFFFFFFFLL, 0);
  if ( v9 == 0x3FFFFFFFFFLL )
    v6[2] = v8;
  else
    *(_QWORD *)(48 * v9 - 0x220000000000LL) = v8 | *(_QWORD *)(48 * v9 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
  if ( v6 != &qword_140C65308 && dword_140C67ACC == 1 )
  {
    v10 = v4 & 0x1F;
    LOBYTE(v11) = 1;
    v12 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v4 >> 5));
    if ( v10 + 1 > 0x20 )
    {
      if ( (v4 & 0x1F) == 0 )
        goto LABEL_21;
      v13 = v4 & 0x1F;
      _InterlockedOr(v12++, ((1 << (32 - v13)) - 1) << v10);
      v11 = 1LL - (unsigned int)(32 - v13);
      if ( v11 >= 0x20 )
      {
        v14 = v11 >> 5;
        v11 += -32LL * (v11 >> 5);
        do
        {
          *v12++ = -1;
          --v14;
        }
        while ( v14 );
      }
      if ( v11 )
LABEL_21:
        _InterlockedOr(v12, (1 << v11) - 1);
    }
    else
    {
      _InterlockedOr(v12, 1 << v10);
    }
  }
  _InterlockedDecrement64(v6);
  if ( !v7 )
    MiReleasePageListLock((__int64)v6, (__int64)v16);
  *a1 = 0LL;
  result = 0xC000000000000000uLL;
  a1[3] &= 0xC000000000000000uLL;
  if ( v6 != &qword_140C65308 )
    a1[1] = 0LL;
  return result;
}
