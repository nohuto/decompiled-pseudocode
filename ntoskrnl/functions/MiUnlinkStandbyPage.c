__int64 __fastcall MiUnlinkStandbyPage(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned __int64 a4, __int16 a5)
{
  __int64 v9; // rdi
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  volatile signed __int32 *v12; // r8
  unsigned int v13; // eax
  int v14; // r10d
  unsigned __int64 v15; // rcx
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 result; // rax

  v9 = 48 * a4 - 0x220000000000LL;
  if ( !*(_QWORD *)a3 )
    KeBugCheckEx(0x4Eu, 1uLL, a3, *(_QWORD *)(a1 + 17216), 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)a3);
  if ( dword_140C67ACC == 1 )
  {
    v10 = a4 & 0x1F;
    LOBYTE(v11) = 1;
    v12 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (a4 >> 5));
    if ( (unsigned __int64)(v10 + 1) <= 0x20 )
    {
      v13 = 1 << v10;
LABEL_12:
      _InterlockedOr(v12, v13);
      goto LABEL_13;
    }
    if ( !v10 )
      goto LABEL_11;
    v14 = a4 & 0x1F;
    _InterlockedOr(v12++, ((1 << (32 - v14)) - 1) << v10);
    v11 = 1LL - (unsigned int)(32 - v14);
    if ( v11 >= 0x20 )
    {
      v15 = v11 >> 5;
      v11 += -32LL * (v11 >> 5);
      do
      {
        *v12++ = -1;
        --v15;
      }
      while ( v15 );
    }
    if ( v11 )
    {
LABEL_11:
      v13 = (1 << v11) - 1;
      goto LABEL_12;
    }
  }
LABEL_13:
  if ( (*(_BYTE *)(v9 + 35) & 8) != 0 )
  {
    MiUnlinkProtectedStandbyPfn((_QWORD *)v9);
    v16 = 1;
  }
  else
  {
    v17 = *(_QWORD *)v9 & 0xFFFFFFFFFFLL;
    v18 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFLL;
    v16 = 0;
    if ( v18 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(a3 + 16) = v17;
    else
      *(_QWORD *)(48 * v18 - 0x220000000000LL) = v17 | *(_QWORD *)(48 * v18 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
    if ( v17 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(a3 + 24) = v18;
    else
      MiSetPfnBlink(48 * v17 - 0x220000000000LL, v18, 0);
  }
  MiUnlinkNumaStandbyPage(v9);
  if ( v16 )
    *(_BYTE *)(v9 + 35) &= ~8u;
  MiReleasePageListLock(a3, a2);
  v19 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, a5);
  MiSetPfnBlink(v9, 0LL, 1);
  MiRestoreTransitionPte(v9, 0);
  result = v19;
  _InterlockedDecrement64((volatile signed __int64 *)((-(__int64)(*(__int64 *)(v9 + 40) < 0) & 0xFFFFFFFFFFFFDCC0uLL)
                                                    + a1
                                                    + 16000));
  return result;
}
